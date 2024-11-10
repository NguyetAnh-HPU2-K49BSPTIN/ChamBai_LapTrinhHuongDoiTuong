#include <iostream>
using namespace std;

// Theo đề bài: hàm isPrime
	//Kiểm tra số nguyên số N

bool isPrime(int N_SoNguyen)
{
	if( N_SoNguyen <= 1)
	{
		return false;
	}
	if( N_SoNguyen == 2)
	{
		return true;
	}
	if(N_SoNguyen % 2 == 0)
	{
		return false;
	}

	//i < n/2 => kiểm tra xem có số nào trong đoạn đó có chia hết cho N không?
	//nếu có thì n kia không phải là số nguyên tố

	for (int i = 2; i <= N_SoNguyen / 2 ; i = i + 1)
	{
		if(N_SoNguyen % i == 0)
		{
			return false;
		}

	}
	return true;

}

int main()
{
	int N;
	cout << "Nhap N: ";
	cin >> N ;

	if (isPrime(N))
	{
		cout << N << " la so nguyen to." << endl;
	}
	else
	{
		cout << N << " khong phai la so nguyen to." << endl;
	}

	return 0;
}
