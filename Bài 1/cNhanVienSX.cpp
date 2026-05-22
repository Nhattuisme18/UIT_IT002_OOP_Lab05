#include "cNhanVienSX.h"
#include <iomanip>

void cNhanVienSX::Nhap() {
	cNhanVien::Nhap();

	std::cout << "Nhap luong can ban: ";
	std::cin >> LuongCanBan;

	std::cout << "Nhap so san pham: ";
	std::cin >> sosanpham;
}

void cNhanVienSX::Xuat() {
	cNhanVien::Xuat();

	std::cout << "Luong can ban: ";
	std::cout << std::fixed << std::setprecision(0) << LuongCanBan;

	std::cout << "\nSo san pham: ";
	std::cout << sosanpham;

	std::cout << "\nTong luong: ";
	std::cout << std::fixed << std::setprecision(0) << TinhLuong() << "\n";
}

float cNhanVienSX::TinhLuong() {
	Luong = LuongCanBan + sosanpham * 5000;
	return Luong;
}