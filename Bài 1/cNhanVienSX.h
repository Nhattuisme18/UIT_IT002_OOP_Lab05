#pragma once
#include "cNhanVien.h"

class cNhanVienSX : public cNhanVien
{
private:
	float LuongCanBan;
	int sosanpham;

public:
	void Nhap() override;
	void Xuat() override;
	float TinhLuong() override;

	bool LaNhanVienSX() override {
		return true;
	}
};