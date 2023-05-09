#include <iostream>

using namespace std;

int main()
{
	int i = 10;
	int jumlah = 0;
	bool pertamaKali = true;

	while (--i != 0)
	{
		if (pertamaKali)
			pertamaKali = false;
		else
			cout << " + ";

		cout << i;
		jumlah += i;
	}

	cout << " = " << jumlah << endl;
}
