#include <iostream>

using namespace std;

int main()
{
    // Switch case
    char grade;
    cout << "Inputkan grade: ";
    cin >> grade;
    switch (toupper(grade))
    {
    case 'A':
        cout << "Luar biasa!";
        break;
    case 'B':
    case 'C':
        cout << "Bagus!";
        break;
    case 'D':
        cout << "Anda lulus";
        break;
    case 'E':
    case 'F':
        cout << "Anda remidi";
        break;
    default:
        cout << "Grade salah!";
    }

    cout << endl;
}
