#include<iostream>
using namespace std;

int main()
{
	char Goi_ABC;
	int PhutGoi;

	double Cuoc = 0.00;

	cout << "Chon goi cuoc A or B or C && so phut su dung: ";
	cin >> Goi_ABC >> PhutGoi;

	switch (Goi_ABC)
	{
		case 'A':
		{
			Cuoc = 39.99;
			if (PhutGoi > 450)
			{
				Cuoc = Cuoc + (PhutGoi - 450) * 0.45;
			}
			break;
		}

		case 'B':
		{
			Cuoc = 59.99;
			if (PhutGoi > 900)
			{
				Cuoc = Cuoc + (PhutGoi - 900) * 0.40;
			}
			break;
		}

		case 'C':
		{
			Cuoc = 69.99;
			break;
		}

	}

	cout << Cuoc << endl;

	return 0;
}
