#include <iostream>

using namespace std;

int main()
{
	int jumlah = 0;
	for (int i = 1; i < 10; i++)
	{
		if (i != 1)
			cout << " + ";

		cout << i;
		jumlah += i;
	}
	cout << " = " << jumlah << endl;
}
