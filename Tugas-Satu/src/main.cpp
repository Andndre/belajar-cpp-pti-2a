#include <iostream>

using namespace std;

int main()
{
    int barang1, barang2;

    cout << "Masukkan barang 1: ";
    cin >> barang1;
    cout << "Masukkan barang 2: ";
    cin >> barang2;

    float diskon = 0.0f;
    int total = barang1 + barang2;

    if (total > 500000)
    {
        cout << "Selamat!, anda mendapat diskon 25%" << endl;
        diskon = total * 0.25f;
    }
    else if (total > 250000)
    {
        cout << "Selamat!, anda mendapat diskon 10%" << endl;
        diskon = total * 0.1f;
    }
    else
    {
        cout << "Anda tidak mendapat diskon" << endl;
    }

    int hargaBayar = total - diskon;

    cout << "Harga yang harus dibayar: " << hargaBayar << endl;
}
