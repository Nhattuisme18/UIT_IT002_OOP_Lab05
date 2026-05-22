#pragma once
#include "cNhanVien.h"

class cNhanVienVP : public cNhanVien
{
private:
	int SoNgayLam;

public:
	void Nhap() override;
	void Xuat() override;
	float TinhLuong() override;

	bool LaNhanVienVP() override {
		return true;
	}
};