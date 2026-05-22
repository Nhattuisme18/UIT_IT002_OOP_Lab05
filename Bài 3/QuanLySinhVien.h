#pragma once
#include "SinhVien.h"
#include "SinhVienCD.h"
#include "SinhVienDH.h"
#include <vector>

class QuanLySinhVien
{
private:
	std::vector <SinhVien*> DanhSachSinhVien;
public:
	QuanLySinhVien();
	~QuanLySinhVien();
	void XuatDanhSachSinhVien();
	void NhapDanhSachSinhVien();
	void SinhVienDuDK();
	void SinhVienKoDuDK();
	SinhVien* SVCDdiemTBcaonhat();
	SinhVien* SVDHdiemTBcaonhat();
	int SinhVienCDkoTotNghiep();
	int SinhVienDHkoTotNghiep();

};

