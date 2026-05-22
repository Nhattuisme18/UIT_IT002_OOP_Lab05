#include "QuanLyGiaoDich.h"
#include <iomanip>

int main() {
	QuanLyGiaoDich ql;

	ql.NhapDanhSach();

	std::cout << "*SO GIAO DICH*\n";
	std::cout << "Nha dat: " << ql.DemGiaoDichDat() << "\n";
	std::cout << "Nha pho: " << ql.DemGiaoDichPho() << "\n";
	std::cout << "Chung cu: " << ql.DemGiaoDichChungCu() << "\n";

	if (ql.DemGiaoDichChungCu() == 0) {
		std::cout << "Ko co giao dich chung cu nao!\n";
	}
	else {
		std::cout << "Trung binh thanh tien chung cu: ";
		std::cout << std::fixed << std::setprecision(0);
		std::cout << ql.TrungBinh() << "\n";
	}

	GiaoDich* maxPho = ql.GDphoMAXvalue();

	if (maxPho != nullptr) {
		std::cout << "GD nha pho gia cao nhat: \n";
		maxPho->Xuat();
		std::cout << "\n";
	}
	else {
		std::cout << "Khong co giao dich nha pho nao!\n";
	}

	ql.XuatGiaoDichThang12Nam2024();

	return 0;
}