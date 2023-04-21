#include <iostream>

using namespace std;

int main()
{
    int hasil = 0, perulangan = 0, i = 2;

    cout << i;

    while (++perulangan < 10)
    {
        hasil += i;
        i += 2;
        cout << " + " << i;
    }

    hasil += i;
    cout << " = " << hasil << endl;
}
