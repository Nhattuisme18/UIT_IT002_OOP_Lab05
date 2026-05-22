#include "cNhanVien.h"

void cNhanVien::Nhap() {
	std::cin.ignore();
	std::cout << "Nhap ho ten nv: ";
	std::getline(std::cin, HoTen);

	std::cout << "Nhap ngay sinh (ngay thang nam): ";
	std::cin >> ngay >> thang >> nam;
}

void cNhanVien::Xuat() {
	std::cout << "Ho ten: " << HoTen << "\n";
	std::cout << "Ngay sinh: " << ngay << "/" << thang << "/" << nam << "\n";
}