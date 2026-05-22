#include "GiaoDichChungCu.h"

float GiaoDichChungCu::ThanhTien() {
	if (viTritang == 1) {
		return DienTich * DonGia * 2;
	}
	else if (viTritang >= 15) {
		return DienTich * DonGia * 1.2;
	}
	else if (viTritang < 15 && viTritang>1) {
		return DienTich * DonGia;
	}
	else return 0;
}

void GiaoDichChungCu::Nhap() {
	GiaoDich::Nhap();
	std::cout << "Nhap ma can: ";
	std::cin >> maCan;
	std::cout << "Nhap vi tri(Tang): ";
	std::cin >> viTritang;
	std::cout << "\n";

}
void GiaoDichChungCu::Xuat() {
	GiaoDich::Xuat();
	std::cout << "Ma can: " << maCan;
	std::cout << "\nVi tri: " << "tang " << viTritang<<"\n";
	std::cout << std::fixed << std::setprecision(0);
	std::cout << "Gia tien: " << ThanhTien() << " VND"<<"\n";
}