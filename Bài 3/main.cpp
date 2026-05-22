#include <iostream>
#include "QuanLySinhVien.h"

int main() {
	QuanLySinhVien ql;
	std::cout << "\n---NHAP DANH SACH SINH VIEN---\n";
	ql.NhapDanhSachSinhVien();
	std::cout << "\n---DANH SACH SINH VIEN---\n";
	ql.XuatDanhSachSinhVien();
	std::cout << "\n---DANH SACH SINH VIEN DU DIEU KIEN TN---\n";
	ql.SinhVienDuDK();
	std::cout << "\n---DANH SACH SINH VIEN KO DU DIEU KIEN TN---\n";
	ql.SinhVienKoDuDK();
	SinhVien* svDHMax = ql.SVDHdiemTBcaonhat();
	if (svDHMax != nullptr) {
		std::cout << "\n*SINH VIEN DAI HOC CO DIEM TB CAO NHAT:\n";
		svDHMax->Xuat();
	}
	else {
		std::cout << "\nKHONG CO SINH VIEN DAI HOC NAO!\n";
	}
	SinhVien* svCDMax = ql.SVCDdiemTBcaonhat();
	if (svCDMax != nullptr) {
		std::cout << "\n*SINH VIEN CAO DANG CO DIEM TB CAO NHAT:\n";
		svCDMax->Xuat();
	}
	else {
		std::cout << "\nKHONG CO SINH VIEN CAO DANG NAO!\n";
	}

	std::cout << "\n---SO THI SINH KHONG DU DIEU KIEN TOT NGHIEP---\n";
	std::cout << "Sinh vien dai hoc: " << ql.SinhVienDHkoTotNghiep();
	std::cout << "\nSinh vien cao dang: " << ql.SinhVienCDkoTotNghiep();
	return 0;
}