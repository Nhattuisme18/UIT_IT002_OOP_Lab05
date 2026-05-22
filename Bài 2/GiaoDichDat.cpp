#include "GiaoDichDat.h"

float GiaoDichDat::ThanhTien() {
	if (loaiDat == "B" || loaiDat == "C") {
		return DienTich * DonGia;
	}
	else if (loaiDat == "A") {
		return DienTich * DonGia * 1.5;
	}
	else return 0;
}
void GiaoDichDat::Nhap() {
	GiaoDich::Nhap();
	std::cout << "Nhap loai dat(A,B,C): ";
	std::cin >> loaiDat;
	std::cout << "\n";

}
void GiaoDichDat::Xuat() {
	GiaoDich::Xuat();
	std::cout << "Loai dat: ";
	std::cout << loaiDat;
	std::cout << "\nGia tien: ";
	std::cout << std::fixed << std::setprecision(0);
	std::cout << ThanhTien()<<" VND"<< "\n";
}