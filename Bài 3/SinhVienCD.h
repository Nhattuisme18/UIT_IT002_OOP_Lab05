#pragma once
#include "SinhVien.h"

class SinhVienCD:public SinhVien
{
private:
	double diemTN;
public:
	SinhVienCD() {
		diemTN = 0;
	}
	void Nhap() override;
	void Xuat() override;
	bool xetTN() override;	 
	bool lasvCD() override {
		return true;
	}

};

