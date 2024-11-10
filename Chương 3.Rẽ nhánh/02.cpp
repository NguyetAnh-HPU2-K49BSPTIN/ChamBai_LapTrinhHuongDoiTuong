#include <iostream>
using namespace std;

int main()
{
	int N_SoTuNhien;
	cout << "Nhap N: ";
	cin >> N_SoTuNhien;

	if (N_SoTuNhien < 1 || N_SoTuNhien > 10)
	{
		cout << N_SoTuNhien << " Khong hop le" << endl;
	}
	else
	{
		switch(N_SoTuNhien)
		{
			case 1:
			{
				cout << "I" << endl;
				break;
			}

			case 2:
			{
				cout << "II" << endl;
				break;
			}

			case 3:
			{
				cout << "III" << endl;
				break;
			}

			case 4:
			{
				cout << "IV" << endl;
				break;
			}

			case 5:
			{
				cout << "V" << endl;
				break;
			}

			case 6:
			{
				cout << "VI" << endl;
				break;
			}

			case 7:
			{
				cout << "VII" << endl;
				break;
			}

			case 8:
			{
				cout << "VIII" << endl;
				break;
			}

			case 9:
			{
				cout << "IX" << endl;
				break;
			}

			case 10:
			{
				cout << "X" << endl;
				break;
			}

		}
	}
}