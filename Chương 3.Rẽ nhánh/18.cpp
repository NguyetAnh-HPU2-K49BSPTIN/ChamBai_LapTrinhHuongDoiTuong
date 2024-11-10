#include<iostream>
using namespace std;

int main()
{
	double Tong_Calo, Gram_ChatBeo, Calo_ChatBeo, TL_ChatBeo;
	cout << "Nhap Calo & ChatBeo: ";
	cin >> Tong_Calo >> Gram_ChatBeo;

	// Vì yêu cầu đề bài là: Đảm bảo số lượng calo và gram chất béo không nhỏ hơn 0
	if(Tong_Calo <= 0 || Gram_ChatBeo <= 0)
	{
		cout << "Loi !" << endl;
	}

	//Theo đề bài : lượng calo trong số fram chất béo = số gram chất béo * 9
	Calo_ChatBeo = Gram_ChatBeo * 9 ;

	if(Calo_ChatBeo > Tong_Calo)
	{
		cout << "Loi!" << endl;
		return 1;
	}

	//Theo đề bài : tỷ lệ calo có trong thực phẩm = Lượng calo trong số gram chất béo / tổng lượng calo
	TL_ChatBeo = (Calo_ChatBeo / Tong_Calo) * 100;
	cout << "TL calo tu chat beo : "<< TL_ChatBeo << endl;


	//Theo đề bài: nếu lượng calo có trong chất béo ít hơn 30% tổng lượng calo của thưch phẩm thì hiển thị thông báo cho biết thực phâpr đó ít chất béo
	if(TL_ChatBeo < 30)
	{
		cout << " Thuc pham nay con it" ;
	}

	return 0;

}