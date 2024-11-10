#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ofstream Output_File("Bai_02_txt");
	if(!Output_File)
	{
		cout << "khong mo duoc file!" << endl;
		return 1;
	}
	else
	{
		cout << "Mo duoc file" << endl;
	}

	for(int i = 0; i <= 127; i++)
	{
		cout << static_cast<char>(i) << " " ;
		Output_File << static_cast<char>(i) << " " ;

		if((i + 1) % 16 == 0)
		{
			Output_File << endl;
			cout << endl;
		}
	}
	Output_File.close();
}
