#include "QuanLyNhanVien.h"
#include <iostream>
#include <iomanip>

int main() {
	QuanLyNhanVien ql;

	std::cout << std::fixed << std::setprecision(0);

	ql.NhapDanhSach();

	std::cout << "\n===== DANH SACH NHAN VIEN =====\n";
	ql.XuatDanhSach();

	std::cout << "\n===== NHAN VIEN CO LUONG THAP HON LUONG TRUNG BINH =====\n";
	ql.XuatNhanVienLuongThapHonTrungBinh();

	std::cout << "\n===== NHAN VIEN CO LUONG CAO NHAT =====\n";
	NhanVien* nvLuongCaoNhat = ql.NhanVienLuongCaoNhat();

	if (nvLuongCaoNhat != nullptr) {
		nvLuongCaoNhat->Xuat();
	}
	else {
		std::cout << "Khong co nhan vien nao!\n";
	}

	std::cout << "\n===== NHAN VIEN CO LUONG THAP NHAT =====\n";
	NhanVien* nvLuongThapNhat = ql.NhanVienLuongThapNhat();

	if (nvLuongThapNhat != nullptr) {
		nvLuongThapNhat->Xuat();
	}
	else {
		std::cout << "Khong co nhan vien nao!\n";
	}

	std::cout << "\n===== LAP TRINH VIEN CO LUONG CAO NHAT =====\n";
	NhanVien* ltvLuongCaoNhat = ql.LapTrinhVienLuongCaoNhat();

	if (ltvLuongCaoNhat != nullptr) {
		ltvLuongCaoNhat->Xuat();
	}
	else {
		std::cout << "Khong co lap trinh vien nao!\n";
	}

	std::cout << "\n===== KIEM CHUNG VIEN CO LUONG THAP NHAT =====\n";
	NhanVien* kcvLuongThapNhat = ql.KiemChungVienLuongThapNhat();

	if (kcvLuongThapNhat != nullptr) {
		kcvLuongThapNhat->Xuat();
	}
	else {
		std::cout << "Khong co kiem chung vien nao!\n";
	}

	return 0;
}