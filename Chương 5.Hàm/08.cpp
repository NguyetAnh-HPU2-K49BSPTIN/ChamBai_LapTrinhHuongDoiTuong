#include<iostream>
using namespace std;


//Theo đều bài: hàm coinToss()
	//Bài toán : minh họa tung đồng xu
	//Sinh ngẫu nhiên: 1 VS 2
	//        <=> heads VS tails
	//Input: số lần tung đồng xu
	//Output: in ra caác lần tung và chữ đi kèm với nó (heads OR tails)
		//=> SD : string
string coinToss(int KetQua)
{
	//Ket qua tra ve :"heads OR tails"
	if (KetQua == 1)
	{
		return "heads";
	}
	else
	{
		return "tails";
	}
}
int main()
{
	int SoLan_Tung;
	int SoLan_heads = 0, SoLan_tails = 0;
	cout << "Nhap so lan tung: ";
	cin >> SoLan_Tung;

	for(int i = 0; i < SoLan_Tung; i++)
	{
		int KQ_Nhap;
		cout << "Nhap KQ (1_heads, 2_tails): ";
		cin >> KQ_Nhap;

		while (KQ_Nhap < 1 || KQ_Nhap > 2)
		{
			cout << "Nhap lai! "<< endl;
			cin >> KQ_Nhap;
		}

		cout << "Tung lan " << (i + 1) << ": " << coinToss(KQ_Nhap) << endl;
		if(KQ_Nhap ==1)
		{
			SoLan_tails++;

		}
		else
		{
			SoLan_heads++;
		}
	}

	cout << "Tong heads: " << SoLan_heads << endl;
	cout << "Tong tails: " << SoLan_tails << endl;


}