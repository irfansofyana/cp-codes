//Program untuk membaca lima angka, mencari penjumlahan, dan menampilkan
//angka - angka dengan urutan terbalik.

#include <iostream>

using namespace std;

int main()
{
    int item0, item1, item2, item3, item4;
    int jum;

    cout << "Masukkan lima integer: ";
    cin >> item0 >> item1 >> item2 >> item3 >> item4;
    cout << endl;

    jum = item0 + item1 + item2 + item3 + item4;

    cout << "Penjumlahan atas semua angka = " << jum << endl;
    cout << "Angka - angka dalam urutan terbalik adalah: ";
    cout << item4 << " " << item3 << " " << item2 << " "
         << item1 << " " << item0 << endl;

    return 0;
}