#include <iostream>
using namespace std;

// Hàm 01: cho nó tự sinh ra số từ 1 đến 3 (1: búa, 2: giấy, 3: kéo)
int Ham_RamDom()
{
	return rand() % 3 + 1;
}

// Hàm 02: nhập lựa chọn từ 1 => 3 (1: búa, 2: giấy, 3: kéo)
int Ham_LuaChon()
{
	int LuaChon;
	cout << "Chon " << endl;
	cout << " 1: Bua \n 2: Giay \n 3: Keo " << endl;
	cin >> LuaChon;
	return LuaChon;
}

// Hàm 03: máy chọn
void Ham_MayChon(int MayChon)
{
	if (MayChon == 1)
	{
		cout << "Bua";
	}
	else if (MayChon == 2)
	{
		cout << "Giay";
	}
	else
	{
		cout << "Keo";
	}
}

// Hàm 04: Người thắng cuộc
void KQ(int NguoiChoi, int MayTinh)
{
	if (NguoiChoi == MayTinh)
	{
		cout << "Hoa!";
	}
	else if ((NguoiChoi == 1 & MayTinh == 3) || (NguoiChoi ==  2 & MayTinh == 1) || (NguoiChoi == 3 & MayTinh == 2))
	{
		cout << "win";
	}
	else
	{
		cout << "lose";
	}
}

int main()
{
	int MayTinh_Chon = Ham_RamDom();
	int NguoiChoi_Chon = Ham_LuaChon();

	cout << "May tinh chon: ";
	Ham_MayChon(MayTinh_Chon);
	cout << endl;


	cout << "Ban chon: ";
	Ham_MayChon(NguoiChoi_Chon);
	cout << endl;
	cout <<"-----------------------" << endl;


	KQ(NguoiChoi_Chon, MayTinh_Chon);
	return 0;
}
