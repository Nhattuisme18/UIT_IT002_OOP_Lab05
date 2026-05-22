#pragma once
#include <iostream>
#include <vector>

#include "cNhanVien.h"
#include "cNhanVienSX.h"
#include "cNhanVienVP.h"

class cCongTy
{
private:
	std::vector<cNhanVien*> DanhSachNhanVien;

public:
	void NhapDanhSach();
	void XuatDanhSach();

	float TinhTongLuong();

	cNhanVien* nvSXLuongThapNhat();
	cNhanVien* nvVPTuoiCaoNhat();

	~cCongTy();
};