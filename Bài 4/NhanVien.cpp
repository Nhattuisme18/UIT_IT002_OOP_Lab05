#include "NhanVien.h"
#include <iostream>

NhanVien::NhanVien() {
	maNhanVien = "";
	hoTen = "";
	tuoi = 0;
	soDienThoai = "";
	email = "";
	luongCoBan = 0;
}

NhanVien::~NhanVien() {
}

void NhanVien::Nhap() {
	std::cin.ignore();

	std::cout << "Nhap ma nhan vien: ";
	std::getline(std::cin, maNhanVien);

	std::cout << "Nhap ho ten: ";
	std::getline(std::cin, hoTen);

	std::cout << "Nhap tuoi: ";
	std::cin >> tuoi;

	std::cin.ignore();

	std::cout << "Nhap so dien thoai: ";
	std::getline(std::cin, soDienThoai);

	std::cout << "Nhap email: ";
	std::getline(std::cin, email);

	std::cout << "Nhap luong co ban: ";
	std::cin >> luongCoBan;
}

void NhanVien::Xuat() {
	std::cout << "Ma nhan vien: " << maNhanVien;
	std::cout << "\nHo ten: " << hoTen;
	std::cout << "\nTuoi: " << tuoi;
	std::cout << "\nSo dien thoai: " << soDienThoai;
	std::cout << "\nEmail: " << email;
	std::cout << "\nLuong co ban: " << luongCoBan;
}

bool NhanVien::laLapTrinhVien() {
	return false;
}

bool NhanVien::laKiemChungVien() {
	return false;
}