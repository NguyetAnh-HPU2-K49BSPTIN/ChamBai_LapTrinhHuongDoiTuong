#include<iostream>
using namespace std;

int main()
{
	int Tong_s ,s_SoGiay, m_SoPhut, h_SoGio, d_SoNgay;
	cout << "Nhap vao so giay (s): ";
	cin >> Tong_s;

	d_SoNgay = Tong_s / ( 24 * 60 * 60);
	Tong_s = Tong_s % (24 * 60 * 60);

	h_SoGio = d_SoNgay / (60 * 60);
	Tong_s = Tong_s % (60 * 60);

	s_SoGiay = Tong_s / 60;
	Tong_s = Tong_s % 60;


	if(d_SoNgay > 0)
	{
		cout << d_SoNgay << " ngay ";
	}
	if(h_SoGio > 0)
	{
		cout << h_SoGio << " giơ";
	}
	if(s_SoGiay > 0)
	{
		cout << s_SoGiay << " phut ";
	}
	if(Tong_s > 0)
	{
		cout << Tong_s << " s";
	}

	cout << endl;


}