#include "QuanLySinhVien.h"
#include "SinhVienCD.h"
#include "SinhVien.h"
#include "SinhVienDH.h"

#include <iostream>

QuanLySinhVien::QuanLySinhVien() {
}

QuanLySinhVien::~QuanLySinhVien() {
	for (SinhVien* sv : DanhSachSinhVien) {
		delete sv;
	}
	DanhSachSinhVien.clear();
}

void QuanLySinhVien::NhapDanhSachSinhVien() {
	int n;
	std::cout << "Nhap so luong sinh vien: ";
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		SinhVien*sv = nullptr;
		int loaiSV;
		std::cout << "Chon loai sinh vien(Cao Dang:1, Dai Hoc:2): ";
			std::cin >> loaiSV;
		if (loaiSV == 1) {
			sv = new SinhVienCD();
		}
		else if (loaiSV == 2) {
			sv = new SinhVienDH();
		}
		else {
			std::cout << "Loai sinh vien ko hop le, hay nhap lai!";
			i--;
			continue;
		}
		sv->Nhap();
		DanhSachSinhVien.push_back(sv);
	}
}
void QuanLySinhVien::XuatDanhSachSinhVien() {
	int k = 1;
	for (SinhVien* sv : DanhSachSinhVien) {
		std::cout << k << ".\n";
		sv->Xuat();
		k++;
	 }
}
int QuanLySinhVien::SinhVienCDkoTotNghiep() {
	int count = 0;
	for (SinhVien* sv : DanhSachSinhVien) {
		if (sv->lasvCD()) {
			if (!sv->xetTN()) {
				count++;
			}
		}
	}
	return count;
}

int QuanLySinhVien::SinhVienDHkoTotNghiep() {
	int count = 0;
	for (SinhVien* sv : DanhSachSinhVien) {
		if (sv->lasvDH()) {
			if (!sv->xetTN()) {
				count++;
			}
		}
	}
	return count;
}

SinhVien* QuanLySinhVien::SVCDdiemTBcaonhat() {
	SinhVien* max = nullptr;
	for (SinhVien* sv : DanhSachSinhVien) {
		if (sv->lasvCD()) {
			if (max == nullptr || sv->getDiemTB() > max->getDiemTB()) {
				max = sv;
			}
		}
	}
	return max;
}
SinhVien* QuanLySinhVien::SVDHdiemTBcaonhat() {
	SinhVien* max = nullptr;
	for (SinhVien* sv : DanhSachSinhVien) {
		if (sv->lasvDH()) {
			if (max == nullptr || sv->getDiemTB() > max->getDiemTB()) {
				max = sv;
			}
		}
	}
	return max;
}

void QuanLySinhVien::SinhVienDuDK() {
	bool coSVTotNghiep = false;
	for (SinhVien* sv : DanhSachSinhVien) {
		if (sv->xetTN()) {
			coSVTotNghiep = true;
			sv->Xuat();
		}
	}if (coSVTotNghiep == false) {
		std::cout << "\n*KHONG CO SINH VIEN NAO TOT NGHIEP!\n";
	}
}
void QuanLySinhVien::SinhVienKoDuDK() {
	bool coSVTRUOT = false;
	for (SinhVien* sv : DanhSachSinhVien) {
		if (!sv->xetTN()) {
			coSVTRUOT = true;
			sv->Xuat();
		}
	}if (coSVTRUOT == false) {
		std::cout << "\n*KHONG CO SINH VIEN NAO TRUOT TOT NGHIEP!\n";
	}
}


