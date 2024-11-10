#include "iostream"
using namespace std;

//Theo đề bài: hàm presentValue()
	//Mục tiêu : 10 năm => 10.000$
	//Số tiền phải gửi : 𝑃 = 𝐹/(1 + 𝑟)^N
		//P: số tiền dự kiến cần gửi
		//F: số dự kiến nhận được trong tương lai
		//r: lãi suất theo năm
		//N: số năm gửi tiếp kiệm
double presentValue(double F_SoTien_DuKien, double r_LaiSuat_TheoNam, int N_SoNam_Gui)
{
	double HeSo_LaiSuat_BanDau = 1.0;
	for (int i = 0; i < N_SoNam_Gui; i++)
	{
		HeSo_LaiSuat_BanDau = HeSo_LaiSuat_BanDau * (1 + r_LaiSuat_TheoNam);
	}

	// P = F / (1 + r)^N
	//   = F / HeSo_LaiSuat
	return F_SoTien_DuKien / HeSo_LaiSuat_BanDau;
}

int main()
{
	double F, r;
	int N;

	cout << "Nhap so tien nhan (F), lai suat(r), so nam du kien gui(N):  ";
	cin >> F >> r >> N;

	// Gọi hàm
	double P = presentValue(F, r, N);
	cout << "So tien can gui hien tai: " << P;
}