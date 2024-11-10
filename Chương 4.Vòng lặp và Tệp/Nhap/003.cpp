#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	fstream Na;

	Na.open(".cpp");

	if(!Na.is_open())
	{
		return 1;
	}

	string Name;
	int a;


	getline(Na,Name);
	Na >> a;

	cout << "Name: " << Name << endl;
	cout << "a= " << a;
	return 0;

}