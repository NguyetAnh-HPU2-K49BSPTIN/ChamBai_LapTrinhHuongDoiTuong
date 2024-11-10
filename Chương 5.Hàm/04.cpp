#include "iostream"
using namespace std;

//Theo đề bài: hàm getNamAccidents()
	//Kiểu; int
	//Input: tên khu vực
	// <0 thì nhập lại

	//Trong hàm main():  mỗi khu vực trong thành phố phải gọi hàm này 1 lần
int getNamAccidents()
{
	int SL_VuTaiNan;
	cout << "So vu tai nan: ";
	cin >> SL_VuTaiNan;

	//Kiem tra
	while(SL_VuTaiNan < 0)
	{
		cout <<"Nhap lai! ";
		cin >> SL_VuTaiNan;
	}
	return SL_VuTaiNan;
}

//Theo đề bài: hàm findLowest()
	//Kiểu: void
	//Input: số vụ tai nạn của lần lượt 5 khu vực:
		//Đông
		//Nam
		//Tây
		//Bắc
		//Trung tâm
	//Output:
		//Tên khu vực
		//Số vụ tai nạn của khu vực có ít nhất vụ tai nạn
void findLowest(int SL_TaiNan[], int ViTri)
{
	int Min_TaiNan = SL_TaiNan[0];
	string Ten_KhuVuc_Min = "Dong";
	string Ten_KhuVuc[] = {"Dong", "Nam", "Tay", "Bac", "Trung tam"};

	for(int i = 1; i < ViTri; i++)
	{
		if(SL_TaiNan[i] < Min_TaiNan)
		{
			Min_TaiNan = SL_TaiNan[i];
			Ten_KhuVuc_Min = Ten_KhuVuc[i];
		}
	}

	cout << "Khu vuc co it vu tai nan la : " << Ten_KhuVuc_Min << endl;
	cout << "SL:  " << Min_TaiNan << endl;
}
int main()
{
	int SL_TaiNan[5];
	string Ten_KhuVuc[] = {"Dong", "Nam", "Tay", "Bac", "Trung tam"};

	cout << "Nhap so vu tai nan cho cac khu vuc:" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << "Khu vuc " << Ten_KhuVuc[i] << ":" << endl;
		SL_TaiNan[i] = getNamAccidents();
		cout <<"---------------------------------------------" << endl;
	}

	findLowest(SL_TaiNan, 5);

	return 0;
}
