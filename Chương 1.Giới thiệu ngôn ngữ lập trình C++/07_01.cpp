#include <iostream>
using namespace std;
int main()
{
	float MucNuoc_nam_1 = 1.5;
	// Mảng
	int nam[] = {5, 7, 10};
	// Sử dụng vòng lặp for để tính mức nước sau các năm
	for (int i = 0; i < 3; i++)
	{
		// Tính mức nước sau số năm tương ứng
		float MucNuoc = MucNuoc_nam_1 * nam[i];
		// In kết quả
		cout << nam[i] << "  : " << MucNuoc << endl;
	}
	return 0;
}

