#pragma once
#include "GiaoDich.h"

class GiaoDichNhaPho:public GiaoDich
{
private:
	int loaiNha;
	std::string diaChi;
public:
	GiaoDichNhaPho() : GiaoDich() {
		loaiNha = 0;
		diaChi = "";
	}
	float ThanhTien() override;
	void Nhap() override;
	void Xuat() override;
	bool LanhaPho()override {
		return true;
	}
};

