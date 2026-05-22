#include "SinhVienDH.h"
#include <iostream>

void SinhVienDH::Nhap() {
	SinhVien::Nhap();
	std::cout << "Nhap ten luan van: ";
	std::cin.ignore();
	std::getline(std::cin, tenLuanvan);
	std::cout << "Nhap diem luan van: ";
	std::cin >> diemLuanvan;
}

void SinhVienDH :: Xuat() {
	SinhVien::Xuat();
	std::cout << "Ten luan van: " << tenLuanvan;
	std::cout << "\nDiem luan van: " << diemLuanvan<<"\n";
}

bool SinhVienDH::xetTN() {
	return (soTin >= 170 && diemTB >= 5 && diemLuanvan >= 5);
}