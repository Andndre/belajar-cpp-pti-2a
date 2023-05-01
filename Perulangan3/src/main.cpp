#include <iostream>

using namespace std;

int main()
{
    unsigned short hasil = 0, i = 2;

    unsigned char perulangan = 0, maxPerulangan = 1;
    const unsigned char BARIS = 5;

    for (unsigned char j = 1; j <= BARIS; j++)
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
