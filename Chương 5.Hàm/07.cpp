#include "iostream"
using namespace std;

//Theo đề bài: hàm celsius()
	//Độ F,C
	//C = 5/9 * (F -32)
	//Hiển thị : 0 -> 20 độ F
double celsius(double Do_F)
{
	double x = (5.0 / 9.0) * (Do_F - 32);

	return x;
}

int main()
{

	for (int F = 0; F <= 20; F++)
	{
		double Do_C = celsius(F);
		cout << F << "     " << Do_C << endl;
	}

	return 0;
}