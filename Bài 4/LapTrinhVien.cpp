#include "LapTrinhVien.h"
#include <iostream>

LapTrinhVien::LapTrinhVien() {
	soGioOvertime = 0;
}

void LapTrinhVien::Nhap() {
	NhanVien::Nhap();

	std::cout << "Nhap so gio overtime: ";
	std::cin >> soGioOvertime;
}

void LapTrinhVien::Xuat() {
	NhanVien::Xuat();

	std::cout << "\nSo gio overtime: " << soGioOvertime;
	std::cout << "\nLuong: " << TinhLuong() << "\n";
}

double LapTrinhVien::TinhLuong() {
	return luongCoBan + soGioOvertime * 200000;
}

bool LapTrinhVien::laLapTrinhVien() {
	return true;
}