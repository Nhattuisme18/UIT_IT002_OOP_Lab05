#pragma once
#include "SinhVien.h"

class SinhVienDH : public SinhVien
{
private:
	std::string tenLuanvan;
	double diemLuanvan;
public:
	SinhVienDH() {
		tenLuanvan = "";
		diemLuanvan = 0;
	}
	void Nhap() override;
	void Xuat() override;
	bool xetTN() override;
	bool lasvDH() override {
		return true;
	}
};

