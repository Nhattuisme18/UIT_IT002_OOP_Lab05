#include "KhachHangB.h"
#include <iostream>

KhachHangB::KhachHangB() {
	soNamThanThiet = 0;
}

void KhachHangB::Nhap() {
	KhachHang::Nhap();

	std::cout << "Nhap so nam than thiet: ";
	std::cin >> soNamThanThiet;
}

double KhachHangB::TinhTien() {
	double tienHang = soLuongHang * donGiaHang;

	double phanTramKhuyenMai = soNamThanThiet * 0.05;

	if (phanTramKhuyenMai < 0.5) {
		phanTramKhuyenMai = 0.5;
	}

	double tienSauKhuyenMai = tienHang * (1 - phanTramKhuyenMai);
	double thueVAT = tienSauKhuyenMai * 0.1;

	return tienSauKhuyenMai + thueVAT;
}