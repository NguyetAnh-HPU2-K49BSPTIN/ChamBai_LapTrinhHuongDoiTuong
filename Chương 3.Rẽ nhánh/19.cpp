#include<iostream>
using namespace std;

int main()
{
	double BuocSong;
	cout << "Nhap buoc song cua 1 song dien tu : ";
	cin >> BuocSong;

	if(BuocSong >= 1/(10*10))
	{
		cout << "Song radio" << endl;
	}
	else if(BuocSong >= 1/(10*10*10) && BuocSong <= 1/(10*10))
	{
		cout << "Song cua lo vi song" << endl;
	}
	else if(BuocSong >= 7*(1/(10*10*10*10*10*10*10)) && BuocSong <= 1/(10*10))
	{
		cout << "Song hong ngoai " << endl;
	}
	else if(BuocSong >= 4*(1/(10*10*10*10*10*10*10)) && BuocSong <= 7*(1/(10*10*10*10*10*10*10)))
	{
		cout << "Song tu ngoai" << endl;
	}
	else if(BuocSong >= 1*(1/(10*10*10*10*10*10*10*10)) && BuocSong <= 1*(1/(10*10*10*10*10*10*10*10)) )
	{
		cout << "Tia X Quang" << endl;
	}
	else if(BuocSong < 1*(1/(10*10*10*10*10*10*10*10*10*10)))
	{
		cout << "Tia gamma " << endl;
	}
}
