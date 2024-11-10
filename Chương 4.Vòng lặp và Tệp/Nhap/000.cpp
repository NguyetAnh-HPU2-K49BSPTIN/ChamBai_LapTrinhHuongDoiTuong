#include <fstream>
#include <iostream>
using namespace std;

int main()
{
	ofstream file("NguyetAnh.txt");
	if (!file.is_open())
	{
		cout << "Khong the tao file" << endl;
		return 1;
	}
	file << "Xin chao !" << endl;
	cout << "Xin chao ! " << endl;
	file.close();
	return 0;
}