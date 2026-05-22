#include "QuanLyNhanVien.h"
#include "LapTrinhVien.h"
#include "KiemChungVien.h"
#include <iostream>

QuanLyNhanVien::QuanLyNhanVien() {
}

QuanLyNhanVien::~QuanLyNhanVien() {
	for (NhanVien* nv : DanhSachNhanVien) {
		delete nv;
	}

	DanhSachNhanVien.clear();
}

void QuanLyNhanVien::NhapDanhSach() {
	int n;
	std::cout << "Nhap so luong nhan vien: ";
	std::cin >> n;

	for (int i = 0; i < n; i++) {
		NhanVien* nv = nullptr;
		int loai;

		std::cout << "\nNhap nhan vien thu " << i + 1 << "\n";
		std::cout << "Chon loai nhan vien (Lap trinh vien: 1, Kiem chung vien: 2): ";
		std::cin >> loai;

		if (loai == 1) {
			nv = new LapTrinhVien();
		}
		else if (loai == 2) {
			nv = new KiemChungVien();
		}
		else {
			std::cout << "Loai nhan vien khong hop le, hay nhap lai!\n";
			i--;
			continue;
		}

		nv->Nhap();
		DanhSachNhanVien.push_back(nv);
	}
}

void QuanLyNhanVien::XuatDanhSach() {
	if (DanhSachNhanVien.empty()) {
		std::cout << "Danh sach nhan vien rong!\n";
		return;
	}

	int k = 1;

	for (NhanVien* nv : DanhSachNhanVien) {
		std::cout << "\nNhan vien thu " << k << ":\n";
		nv->Xuat();
		k++;
	}
}

double QuanLyNhanVien::LuongTrungBinh() {
	if (DanhSachNhanVien.empty()) {
		return 0;
	}

	double tong = 0;

	for (NhanVien* nv : DanhSachNhanVien) {
		tong += nv->TinhLuong();
	}

	return tong / DanhSachNhanVien.size();
}

void QuanLyNhanVien::XuatNhanVienLuongThapHonTrungBinh() {
	if (DanhSachNhanVien.empty()) {
		std::cout << "Danh sach nhan vien rong!\n";
		return;
	}

	double luongTB = LuongTrungBinh();
	bool coNhanVien = false;

	std::cout << "\nLuong trung binh cua cong ty: " << luongTB << "\n";

	for (NhanVien* nv : DanhSachNhanVien) {
		if (nv->TinhLuong() < luongTB) {
			coNhanVien = true;
			nv->Xuat();
		}
	}

	if (coNhanVien == false) {
		std::cout << "Khong co nhan vien nao co luong thap hon luong trung binh!\n";
	}
}

NhanVien* QuanLyNhanVien::NhanVienLuongCaoNhat() {
	NhanVien* max = nullptr;

	for (NhanVien* nv : DanhSachNhanVien) {
		if (max == nullptr || nv->TinhLuong() > max->TinhLuong()) {
			max = nv;
		}
	}

	return max;
}

NhanVien* QuanLyNhanVien::NhanVienLuongThapNhat() {
	NhanVien* min = nullptr;

	for (NhanVien* nv : DanhSachNhanVien) {
		if (min == nullptr || nv->TinhLuong() < min->TinhLuong()) {
			min = nv;
		}
	}

	return min;
}

NhanVien* QuanLyNhanVien::LapTrinhVienLuongCaoNhat() {
	NhanVien* max = nullptr;

	for (NhanVien* nv : DanhSachNhanVien) {
		if (nv->laLapTrinhVien()) {
			if (max == nullptr || nv->TinhLuong() > max->TinhLuong()) {
				max = nv;
			}
		}
	}

	return max;
}

NhanVien* QuanLyNhanVien::KiemChungVienLuongThapNhat() {
	NhanVien* min = nullptr;

	for (NhanVien* nv : DanhSachNhanVien) {
		if (nv->laKiemChungVien()) {
			if (min == nullptr || nv->TinhLuong() < min->TinhLuong()) {
				min = nv;
			}
		}
	}

	return min;
}