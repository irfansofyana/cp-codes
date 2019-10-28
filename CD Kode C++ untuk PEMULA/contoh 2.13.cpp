//Contoh: setfill

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int x = 15; //Baris 1
    int y = 7634; //Baris 2

    cout << "12345678901234567890" << endl; //Baris 3
    cout << setw(5) << x << setw(7) << y
         << setw(8) << "Alam" << endl; //Baris 4

    cout << setfill('*'); //Baris 5
    cout << setw(5) << x << setw(7) << y
         << setw(8) << "Alam" << endl; //Baris 6

    cout << setw(5) << x << setw(7) << setfill('#')
         << y << setw(8) << "Alam" << endl; //Baris 7

    cout << setw(5) << setfill('@') << x
         << setw(7) << setfill('#') << y
         << setw(8) << setfill('^') << "Alam"
         << endl; //Baris 8

    cout << setfill(' '); //Baris 9
    cout << setw(5) << x << setw(7) << y
         << setw(8) << "Alam" << endl; //Baris 10

    return 0;
}