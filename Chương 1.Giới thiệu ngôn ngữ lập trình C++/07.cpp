#include <iostream>
using namespace std;
int main()
{
	float MucNuoc_nam_1 = 1.5;

	// Tính mức nước sau 5, 7, và 10 năm
	float MucNuoc_nam_5 = MucNuoc_nam_1 * 5.0;
	float MucNuoc_nam_7 = MucNuoc_nam_1 * 7.0;
	float MucNuoc_nam_10 = MucNuoc_nam_1 * 10.0;
	// In kết quả
	cout << MucNuoc_nam_5 << endl;
	cout << MucNuoc_nam_7 << endl;
	cout << MucNuoc_nam_10 << endl;
	return 0;
}
