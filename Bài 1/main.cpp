#include "cCongTy.h"
#include <iostream>
#include <iomanip>

int main() {
	cCongTy congty;
	congty.NhapDanhSach();
	congty.XuatDanhSach();

	std::cout << "\nTong luong cua cac nhan vien: ";
	std::cout << std::fixed << std::setprecision(0) << congty.TinhTongLuong() << "\n";

	cNhanVien* nvSXMin = congty.nvSXLuongThapNhat();

	if (nvSXMin == nullptr) {
		std::cout << "\nKhong co nhan vien san xuat nao!\n";
	}
	else {
		std::cout << "\nNhan vien san xuat co luong thap nhat:\n";
		nvSXMin->Xuat();
	}

	cNhanVien* nvVPTuoiMax = congty.nvVPTuoiCaoNhat();

	if (nvVPTuoiMax == nullptr) {
		std::cout << "\nKhong co nhan vien van phong nao!\n";
	}
	else {
		std::cout << "\nNhan vien van phong co tuoi cao nhat:\n";
		nvVPTuoiMax->Xuat();
	}

	return 0;
}