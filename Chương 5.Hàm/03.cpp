#include<iostream>
using namespace std;

//Theo đề bài: double getSales()
	//Nhiệm vụ:
		//Hàm hỏi người dùng doanh số bán hàng trong quý
		//Kiểm tra tính hợp lệ của đầu vào nếu được thì thôi => while
		//Trả về giá trị người dùng nhập vào => return
double getSales()
{
	double DoanhSo;
	cin >> DoanhSo;

	while (DoanhSo < 0)
	{
		cout << "Nhap lai! Doanh so phai KHONG am: ";
		cin >> DoanhSo;
	}

	return DoanhSo;
}

//Theo đề bài: void findHighest()
	//Nhiệm vụ:
		//Sử dụng 4 tham số đầu vào: Đông Bắc, Đông Nam, Tây Bắc và Tây Nam
			//=> In ra doanh đơn vị có:
				//doanh số lớn nhất + doanh số của nó
//Doanh số => DS
//Đông bắc => DB
//Đông nam => DN
//Tây bắc => TB
//Tây nam => TN
void findHighest(double DoanhSo[], int ViTri)
{
	double DS_CaoNhat = DoanhSo[0];
	string Ten_DS_CaoNhat = "Dong bac";
	string Ten_DS_CongTy[]= {"Dong Bac", "Dong Nam", "Tay Bac", "Tay Nam"};

	for(int i = 1; i < ViTri; i++)
	{
		if(DoanhSo[i] > DS_CaoNhat)
		{
			DS_CaoNhat = DoanhSo[i];
			Ten_DS_CaoNhat = Ten_DS_CongTy[i];
		}
	}

	cout << "Ten: " << Ten_DS_CaoNhat << endl ;
	cout <<"Doanh so: " << DS_CaoNhat << endl;
}
int main()
{
	cout << "Nhap doanh so cua DB, DN, TB, TN: " << endl;

	double DoanhSo[4];
	for(int i = 1; i <= 4; i++)
	{
		DoanhSo[i] = getSales();
	}

	findHighest(DoanhSo, 4);
	return 0;

}