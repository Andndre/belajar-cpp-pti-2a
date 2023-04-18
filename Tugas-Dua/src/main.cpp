#include <iostream>

using namespace std;

int main()
{
    int nomorHari;

    cout << "Masukkan nomor hari: ";
    cin >> nomorHari;

    switch (nomorHari)
    {
    case 0:
    case 7:
        cout << "Minggu";
        break;
    case 1:
        cout << "Senin";
        break;
    case 2:
        cout << "Selasa";
        break;
    case 3:
        cout << "Rabu";
        break;
    case 4:
        cout << "Kamis";
        break;
    case 5:
        cout << "Jumat";
        break;
    case 6:
        cout << "Sabtu";
        break;
    default:
        cout << "Nomor hari tidak tersedia";
    }
    cout << endl;
}
