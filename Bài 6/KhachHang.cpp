#include "KhachHang.h"
#include <iostream>
#include <iomanip>

KhachHang::KhachHang() {
	tenKhachHang = "";
	soLuongHang = 0;
	donGiaHang = 0;
}

KhachHang::~KhachHang() {
}

void KhachHang::Nhap() {
	std::cin.ignore();

	std::cout << "Nhap ten khach hang: ";
	std::getline(std::cin, tenKhachHang);

	std::cout << "Nhap so luong hang: ";
	std::cin >> soLuongHang;

	std::cout << "Nhap don gia hang: ";
	std::cin >> donGiaHang;
}

void KhachHang::Xuat() {
	std::cout << "Ten khach hang: " << tenKhachHang;
	std::cout << "\nSo tien phai tra: " << std::fixed << std::setprecision(0) << TinhTien() << "\n";
}