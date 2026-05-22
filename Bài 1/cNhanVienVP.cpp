#include "cNhanVienVP.h"
#include <iomanip>

void cNhanVienVP::Nhap() {
	cNhanVien::Nhap();

	std::cout << "Nhap so ngay lam: ";
	std::cin >> SoNgayLam;
}

void cNhanVienVP::Xuat() {
	cNhanVien::Xuat();

	std::cout << "So ngay lam: ";
	std::cout << SoNgayLam;

	std::cout << "\nTong luong: ";
	std::cout << std::fixed << std::setprecision(0) << TinhLuong() << "\n";
}

float cNhanVienVP::TinhLuong() {
	Luong = SoNgayLam * 100000;
	return Luong;
}