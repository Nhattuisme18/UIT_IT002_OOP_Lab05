#include "KiemChungVien.h"
#include <iostream>

KiemChungVien::KiemChungVien() {
	soLoiPhatHien = 0;
}

void KiemChungVien::Nhap() {
	NhanVien::Nhap();

	std::cout << "Nhap so loi phat hien: ";
	std::cin >> soLoiPhatHien;
}

void KiemChungVien::Xuat() {
	NhanVien::Xuat();

	std::cout << "\nSo loi phat hien: " << soLoiPhatHien;
	std::cout << "\nLuong: " << TinhLuong() << "\n";
}

double KiemChungVien::TinhLuong() {
	return luongCoBan + soLoiPhatHien * 50000;
}

bool KiemChungVien::laKiemChungVien() {
	return true;
}