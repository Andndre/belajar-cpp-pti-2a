#include <iostream>

using namespace std;

int main()
{
	int i;
	do
	{
		cout << "Masukkan bilangan genap: ";
		cin >> i;
	} while (i % 2 != 0);
	cout << "Terimakasih, bilangan genap anda: " << i << endl;
}
