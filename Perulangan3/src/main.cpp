#include <iostream>

using namespace std;

int main()
{
    int hasil = 0, perulangan = 0, i = 2, maxPerulangan = 1;

    const int BARIS = 5;

    for (int j = 1; j <= BARIS; j++)
    {
        cout << i;

        while (++perulangan < maxPerulangan)
        {
            hasil += i;
            i += 2;
            cout << " + " << i;
        }

        hasil += i;

        for (; perulangan < BARIS; perulangan++)
            cout << "    ";

        cout << "\t = " << hasil << endl;
        hasil = 0, maxPerulangan++, i = 2, perulangan = 0;
    }
}
