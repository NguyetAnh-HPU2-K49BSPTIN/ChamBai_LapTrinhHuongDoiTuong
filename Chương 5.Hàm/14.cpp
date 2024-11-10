#include<iostream>
using namespace std;

//Theo đề bài: hàm 01
	//Input: SL cuộn đồng của đơn hàng
int Ham_01()
{
	int SL_CuonDong_DonHang;
	cout << "Nhap SL cuon dong can dat: ";
	cin >> SL_CuonDong_DonHang;

	return SL_CuonDong_DonHang;
}



//Theo đề bài: hàm 02
	//Input: SL cuộn đồng còn trong kho
int Ham_02()
{
	int SL_CuonDong_TrongKho;
	cout << "Nhap SL cuon dong trong kho: ";
	cin >> SL_CuonDong_TrongKho;

	return SL_CuonDong_TrongKho;
}


//Theo đề bài: hàm 03
	//Input: Phí vận chuyển và các chi phí khác nếu có
double Ham_03()
{
	double ChiPhi_BoSung;

	cout << "Nhap chi phi bo sung: ";
	cin >> ChiPhi_BoSung;

	while(ChiPhi_BoSung < 0)
	{
		cout << "Nhap lai! " << endl;
		cin >> ChiPhi_BoSung;
	}


	return ChiPhi_BoSung;
}


//Theo đề bài: hàm 04
	//Thực hiện các yêu cầu thêm của bài toán
		//01.Số lượng cuộn đồng sẵn sàng chuyển từ kho cho đơn hàng đó
		//02.Số lượng cuộn đồng còn phải chuyển sang đơn hàng sau
			//=>(trường hợp số cuộn đồng đặt hàng lớn hơn số lượng còn trong kho
		//03.Tổng tiền hàng thanh toán lần này
			//=>số lượng cuộn đồng sẵn sàng chuyển nhân với 100$
		//04.Tổng tiền vận chuyển và chi phí khác
		//05.Tổng tiền đơn hàng gồm tiền hàng và tiền vận chuyển cùng chi phí khác
void Ham_04(int SL_DatHang, int SL_TrongKho, int Gia_CuonDong, double Phi_VanChuyen, double ChiPhi_BoSung)
{
	//Bước 1: số cuộn có thể giao ngay và còn thiếu
	int SL_CoThe_Giao = min(SL_DatHang, SL_TrongKho);
	int SL_Thieu = SL_DatHang - SL_CoThe_Giao;

	//Bước 2: xử lí các chi phí khác
	double Tong_TienHang = SL_CoThe_Giao * Gia_CuonDong;
	double Tong_ChiPhi_VanChuyen = SL_CoThe_Giao * Phi_VanChuyen;
	double Tong_ChiPhi_Khac = SL_CoThe_Giao * ChiPhi_BoSung;
	double Tong_TienDonHang = Tong_TienHang + Tong_ChiPhi_VanChuyen + Tong_ChiPhi_Khac;

	//In
	cout << "SL dat hang: " << SL_DatHang << endl;
	cout << "SL co the giao: " << SL_CoThe_Giao << endl;
	cout << "Sl con thieu: "<< SL_Thieu << endl;
	cout << "Tong tien hang: "<< Tong_TienHang << endl;
	cout << "Tong chi phi van chuyen: " << Tong_ChiPhi_VanChuyen << endl;
	cout << "Tong chi phi khac: "<< Tong_ChiPhi_Khac << endl;
	cout << "Tong tien don hang: " << Tong_TienDonHang << endl;

}

int main()
{
	int Gia_CuonDong = 100;
	double ChiPhi_VanChuyen = 10;
	int SL_DatHang = Ham_01();
	int SL_Kho = Ham_02();
	double ChiPhi_Khac = Ham_03();

	Ham_04(SL_DatHang, SL_Kho, Gia_CuonDong, ChiPhi_VanChuyen, ChiPhi_Khac);
	return 0;
}