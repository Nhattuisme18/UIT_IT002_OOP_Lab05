#pragma once
#include "GiaoDich.h"
class GiaoDichChungCu: public GiaoDich
{
private:
	std::string maCan;
	int viTritang;
public:
	GiaoDichChungCu(): GiaoDich(){
		maCan = "";
		viTritang = 0;
	}
	float ThanhTien() override;
	void Nhap() override;
	void Xuat() override;
	bool LachungCu() override {
		return true;
	}
};

