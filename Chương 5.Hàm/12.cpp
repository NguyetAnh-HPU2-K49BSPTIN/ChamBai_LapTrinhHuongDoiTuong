#include<iostream>
using namespace std;

//Theo đề bài: hàm getJudgeData
	//Nhập điểm của một giám khảo => điểm lưu vào tham chiếu
	//=> nhâpj điểm đến khi hợp lệ thì thôi
	//==> Gọi 5 lần hàm này ở hàm main <=> 5 đầu điểm
void getJudgeData(double &Diem)
{
	cout << "Nhap diem (0->10): ";
	cin >> Diem;
	while (Diem < 0 || Diem > 10)
	{
		cout << "Nhap lai: ";
		cin >> Diem;
	}
}

//Theo đề bài: hàm double findLowest
	//=> hàm này tìm giá trị nhỏ nhất của 5 điểm đầu vào
	//==> phụ trợ cho hàm void calcScore() => nên phải gọi trước
double findLowest(double Diem_01, double Diem_02, double Diem_03, double Diem_04, double Diem_05)
{
	double Diem_Min = Diem_01;
	if(Diem_02 < Diem_Min)
	{
		Diem_Min = Diem_02;
	}
	if(Diem_03 < Diem_Min)
	{
		Diem_Min = Diem_03;
	}
	if(Diem_04 < Diem_Min)
	{
		Diem_Min = Diem_04;
	}
	if(Diem_05 < Diem_Min)
	{
		Diem_Min = Diem_05;
	}
	return Diem_Min;
}

//Theo đề bài: hàm double findHighest
	//=> hàm này tìm giá trị lớn nhất của 5 điểm đầu vào
	//==> phụ trợ cho hàm void calcScore() => nên phải gọi trước
double findHighest(double Diem_01, double Diem_02, double Diem_03, double Diem_04, double Diem_05)
{
	double Diem_Max = Diem_01;
	if(Diem_02 > Diem_Max)
	{
		Diem_Max = Diem_02;
	}
	if(Diem_03 > Diem_Max)
	{
		Diem_Max = Diem_03;
	}
	if(Diem_04 > Diem_Max)
	{
		Diem_Max = Diem_04;
	}
	if(Diem_05 > Diem_Max)
	{
		Diem_Max = Diem_05;
	}
	return Diem_Max;
}
//Theo đề bài: hàm void calcScore
	//Tính và in ra điểm của 3 người sau khi loại Min và Max
	//=> được hàm main gọi 01 lần
void calcScore(double Diem_01, double Diem_02, double Diem_03, double Diem_04, double Diem_05)
{
	//Bước 1.Tìm điểm Max và Min
	double Diem_Min = findLowest(Diem_01, Diem_02, Diem_03, Diem_04, Diem_05);
	double Diem_Max = findHighest(Diem_01, Diem_02, Diem_03, Diem_04, Diem_05);

	//Bước 2.Tính tổng điểm trước và sau khi loại bỏ min và max
	double Tong_Diem = Diem_01 + Diem_02 + Diem_03 + Diem_04 + Diem_05;
	double Tong_Diem_LoaiBo_Min_Max = Tong_Diem - Diem_Max - Diem_Min;

	//Bước 3.Tính điểm trung bình 3 điểm còn lại
	double Dien_TB_3nguoi = Tong_Diem_LoaiBo_Min_Max / 3.00;
	cout << "Diem TB 3 nguoi: " << Dien_TB_3nguoi;

}

int main()
{
	double DiemSo_01, DiemSo_02, DiemSo_03, DiemSo_04, DiemSo_05;
	//Gọi hàm getJudgeData để nhập 5 đầu điểm trước đã
	getJudgeData(DiemSo_01);
	getJudgeData(DiemSo_02);
	getJudgeData(DiemSo_03);
	getJudgeData(DiemSo_04);
	getJudgeData(DiemSo_05);

	//Hiển thị điểm trung bình => 1 lần
	calcScore(DiemSo_01, DiemSo_02, DiemSo_03, DiemSo_04, DiemSo_05);
}