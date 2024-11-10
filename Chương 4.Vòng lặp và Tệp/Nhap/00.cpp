#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream file("Open_file.txt");
	if(!file.is_open())
	{
		cout << "Khong the mo file!" << endl;
		return 1;
	}

	string line;
	while (getline(file, line))
	{
		cout << line << endl;
	}

	file.close();
	return 0;
}