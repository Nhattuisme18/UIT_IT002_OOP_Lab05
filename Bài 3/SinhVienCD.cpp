#include "SinhVienCD.h"
#include <iostream>

void SinhVienCD::Nhap() {
	SinhVien::Nhap();
	std::cout << "Nhap diem TN: ";
	std::cin >> diemTN;
}
void SinhVienCD::Xuat() {
	SinhVien::Xuat();
	std::cout << "Diem TN: " << diemTN<<"\n";
}
bool SinhVienCD::xetTN() {
	return (soTin >= 150 && diemTN >= 5 && diemTB >= 5);
}
