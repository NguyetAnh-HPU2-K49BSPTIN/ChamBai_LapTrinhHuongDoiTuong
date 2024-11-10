#include<iostream>
#include "fstream"
using namespace std;

int main()
{
	int A, B;
	A = rand();
	B = rand();
	cout << A << " & " << B << endl;
	ofstream Options("Bai_08.txt");

	int LuaChon = 0;
	while (LuaChon != 5)
	{
		cout << "Lua chon phep toan: "<< endl;
		cout << "1. Cong" << endl;
		cout << "2. Tru" << endl;
		cout << "3. Nhan" << endl;
		cout << "4. Chia" << endl;
		cout << "5. Thoat" << endl;
		cout << "Nhap lua chon chua ban: ";
		cin >> LuaChon;

		switch (LuaChon)
		{
			case 1:
				cout << "A + B = " << A + B << endl;
				Options << "A + B = " << A + B << endl;
				break;
			case 2:
				cout << "A - B = " << A - B << endl;
				Options << "A - B = " << A - B << endl;
				break;
			case 3:
				cout << "A x B = " << A * B << endl;
				Options << "A x B = " << A * B << endl;
				break;
			case 4:
				cout << "A : B = " << A / B << endl;
				Options << "A : B = " << A / B << endl;
				break;
			default:
				cout << "Thoat! " << endl;
				break;
		}
	}
	Options.close();
	return 0;
}