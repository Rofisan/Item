#include <iostream>
#include <string>

using namespace std;

int main()
{
    string nama_item = "";
    string item_sebelum = "";
    string item_terhebat = "";
    string item_terlemah = "";
    int ulang = 1;
    int stat = 0;
    int stat_sebelum = 0;
    int stat_terhebat = 0;
    int stat_terlemah = 0;
    bool flag = true;

    while(ulang== 1) {
    cout << "Masukkan Nama Item: "; cin >> nama_item;
    cout << "Masukkan Stat: "; cin >> stat;
    cout << endl;

    cout << "Item anda adalah: " << "[" << nama_item  << "]" << " Status: " << "[" << stat << "]" << endl;
    if(flag == true){
        item_sebelum = "Belum ada";
        item_terhebat = nama_item;
        item_terlemah = nama_item;
        stat_terhebat = stat;
        stat_terlemah = stat;
    }else{
        if(stat >= stat_terhebat){
            stat_terhebat = stat;
            item_terhebat = nama_item;
        }else{
        if(stat <= stat_terlemah){
            stat_terlemah = stat;
            item_terlemah = nama_item;
            }
        }
    }
    cout << "Item sebelumnya: " << item_sebelum << endl;
    cout << "Item terhebat  : " << item_terhebat << endl;
    cout << "Item terlemah  : " << item_terlemah << endl;

    item_sebelum = nama_item;
    stat_sebelum = stat;
    flag = false;

    cout << "Masukkan item lagi ? [1] : "; cin >> ulang;
    cout << endl;
    }
}
