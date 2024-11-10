#include <iostream>

int main() {
	const double calo_moi_phut = 3.6;
	std::cout << "Thoi gian (phut) | Calo da dot chay" << std::endl;
	std::cout << "-----------------|--------------------" << std::endl;


	for (int phut = 5; phut <= 30; phut += 5) {
		double calo_da_dot_chay = phut * calo_moi_phut;
		std::cout << "       " << phut << "         |        " << calo_da_dot_chay << std::endl;
	}

	return 0;
}
