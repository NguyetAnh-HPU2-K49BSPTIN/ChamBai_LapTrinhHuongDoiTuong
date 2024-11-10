#include "iostream"
#include "fstream"
using namespace std;

int main()
{
	ofstream Write;
	Write.open("write.txt");

	Write << ("Hello") << endl;

	int N;
	cout << "Nhap N: ";
	cin >> N;

	for(int i = 0; i <= N; i++)
	{
		Write << i << " ";
		cout << i << " ";
	}
	Write.close();

	ifstream Read;
	Read.open("write.txt");
	if(Read.is_open())
	{
		cout << "\n ok" << endl;

		string VachKe;
		while (getline(Read, VachKe))
		{
			cout << VachKe;
		}
		Write.close();
	}
	else
	{
		cout << "Khong the mo file de doc." << endl;
	}

	return 0;


}
