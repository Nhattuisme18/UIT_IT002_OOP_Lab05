#include "QuanLyKhachHang.h"
#include "KhachHangA.h"
#include "KhachHangB.h"
#include "KhachHangC.h"

#include <iostream>
#include <iomanip>

QuanLyKhachHang::QuanLyKhachHang() {
	x = 0;
	y = 0;
	z = 0;
}

QuanLyKhachHang::~QuanLyKhachHang() {
	for (KhachHang* kh : DanhSachKhachHang) {
		delete kh;
	}

	DanhSachKhachHang.clear();
}

void QuanLyKhachHang::NhapDanhSach() {
	std::cout << "Nhap so luong khach hang loai A: ";
	std::cin >> x;

	std::cout << "Nhap so luong khach hang loai B: ";
	std::cin >> y;

	std::cout << "Nhap so luong khach hang loai C: ";
	std::cin >> z;

	for (int i = 0; i < x; i++) {
		std::cout << "\nNhap khach hang loai A thu " << i + 1 << ":\n";

		KhachHang* kh = new KhachHangA();
		kh->Nhap();

		DanhSachKhachHang.push_back(kh);
	}

	for (int i = 0; i < y; i++) {
		std::cout << "\nNhap khach hang loai B thu " << i + 1 << ":\n";

		KhachHang* kh = new KhachHangB();
		kh->Nhap();

		DanhSachKhachHang.push_back(kh);
	}

	for (int i = 0; i < z; i++) {
		std::cout << "\nNhap khach hang loai C thu " << i + 1 << ":\n";

		KhachHang* kh = new KhachHangC();
		kh->Nhap();

		DanhSachKhachHang.push_back(kh);
	}
}

double QuanLyKhachHang::TongTienCongTyThuDuoc() {
	double tong = 0;

	for (KhachHang* kh : DanhSachKhachHang) {
		tong += kh->TinhTien();
	}

	return tong;
}

void QuanLyKhachHang::XuatKetQua() {
	std::cout << std::fixed << std::setprecision(0);

	std::cout << "\n===== KET QUA =====\n";

	for (KhachHang* kh : DanhSachKhachHang) {
		kh->Xuat();
		std::cout << "\n";
	}

	std::cout << "Tong so tien cong ty thu duoc: " << TongTienCongTyThuDuoc() << "\n";
}