#include "iostream"
#include "fstream"

using namespace std;

int main()
{
	int N_SoNguyen;
	cin >> N_SoNguyen;

	ofstream Out_File("Bai_001.txt");
	Out_File << N_SoNguyen;
	Out_File.close();
}