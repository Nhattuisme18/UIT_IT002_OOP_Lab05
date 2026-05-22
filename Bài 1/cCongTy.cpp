#include "cCongTy.h"
#include <iomanip>

void cCongTy::NhapDanhSach() {
	int n;

	std::cout << "Nhap so luong nhan vien: ";
	std::cin >> n;

	for (int i = 0; i < n; i++) {
		std::cout << "\nNhap nhan vien thu " << i + 1 << ":\n";

		int loai;
		std::cout << "Loai nhan vien? (1: VP, 2: SX): ";
		std::cin >> loai;

		cNhanVien* nv = nullptr;

		if (loai == 1) {
			nv = new cNhanVienVP();
		}
		else if (loai == 2) {
			nv = new cNhanVienSX();
		}
		else {
			std::cout << "Loai nv ko hop le, hay nhap lai!\n";
			i--;
			continue;
		}

		nv->Nhap();
		DanhSachNhanVien.push_back(nv);
	}
}

void cCongTy::XuatDanhSach() {
	std::cout << "\nDANH SACH NHAN VIEN:\n";

	for (cNhanVien* nv : DanhSachNhanVien) {
		nv->Xuat();
		std::cout << "\n";
	}
}

float cCongTy::TinhTongLuong() {
	float sum = 0;

	for (cNhanVien* nv : DanhSachNhanVien) {
		sum += nv->TinhLuong();
	}

	return sum;
}

cNhanVien* cCongTy::nvSXLuongThapNhat() {
	cNhanVien* min = nullptr;

	for (cNhanVien* nv : DanhSachNhanVien) {
		if (nv->LaNhanVienSX()) {
			if (min == nullptr || nv->TinhLuong() < min->TinhLuong()) {
				min = nv;
			}
		}
	}

	return min;
}

cNhanVien* cCongTy::nvVPTuoiCaoNhat() {
	cNhanVien* maxTuoi = nullptr;

	for (cNhanVien* nv : DanhSachNhanVien) {
		if (nv->LaNhanVienVP()) {
			if (maxTuoi == nullptr || nv->getNam() < maxTuoi->getNam() ||(nv->getNam() == maxTuoi->getNam() && nv->getThang() < maxTuoi->getThang()) ||(nv->getNam() == maxTuoi->getNam() && nv->getThang() == maxTuoi->getThang() && nv->getNgay() < maxTuoi->getNgay())) {

				maxTuoi = nv;
			}
		}
	}

	return maxTuoi;
}

cCongTy::~cCongTy() {
	for (cNhanVien* nv : DanhSachNhanVien) {
		delete nv;
	}

	DanhSachNhanVien.clear();
}