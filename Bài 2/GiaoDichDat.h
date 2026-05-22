#pragma once
#include "GiaoDich.h"
class GiaoDichDat : public GiaoDich
{
private:
	std::string loaiDat;
public:
	GiaoDichDat():GiaoDich() {
		loaiDat = "";
}
	float ThanhTien() override;
	void Nhap() override;
	void Xuat() override;
	bool LanhaDat() override {
		return true;
	}
};

