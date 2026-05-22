#include "SinhVien.h"
#include <iostream>

void SinhVien::Nhap() {
	std::cout << "Nhap mssv: ";
	std::cin >> mssv;
	std::cout << "Nhap ho ten: ";
	std::cin.ignore();
	std::getline(std::cin , hoTen);
	std::cout << "Nhap dia chi: ";
	std::getline(std::cin, diaChi);
	std::cout << "Nhap so tin chi: ";
	std::cin >> soTin;
	std::cout << "Nhap diem TB: ";
	std::cin >> diemTB;
}

void SinhVien::Xuat() {
	std::cout << "Mssv: ";
	std::cout << mssv;
	std::cout << "\nHo ten: " << hoTen;
	std::cout << "\nDia chi: " << diaChi;
	std::cout << "\nSo tin chi: " << soTin;
	std::cout << "\nDiem TB: " << diemTB<<"\n";
}