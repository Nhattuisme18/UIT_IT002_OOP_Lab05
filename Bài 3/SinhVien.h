#pragma once
#include <string>

class SinhVien
{
protected:
	int mssv;
	std::string hoTen;
	std::string diaChi;
	int soTin;
	double diemTB;
public:
	SinhVien() {
		mssv = 0;
		hoTen = "";
		diaChi = "";
		soTin = 0;
		diemTB = 0;
	}
	virtual ~SinhVien() {}
	virtual void Nhap();
	virtual void Xuat();
	virtual bool xetTN() {
		return false;
	}
	virtual bool lasvCD() {
		return false;
	}
	virtual bool lasvDH() {
		return false;
	}
	double getDiemTB() {
		return diemTB;
	}
};

