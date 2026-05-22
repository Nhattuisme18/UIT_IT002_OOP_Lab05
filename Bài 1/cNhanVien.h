#pragma once
#include <iostream>
#include <string>

class cNhanVien
{
protected:
	std::string HoTen;
	int ngay;
	int thang;
	int nam;
	float Luong;

public:
	cNhanVien() : HoTen(""), ngay(0), thang(0), nam(0), Luong(0) {}

	virtual void Nhap();
	virtual void Xuat();

	virtual float TinhLuong() = 0;

	virtual bool LaNhanVienSX() {
		return false;
	}

	virtual bool LaNhanVienVP() {
		return false;
	}

	int getNgay() {
		return ngay;
	}

	int getThang() {
		return thang;
	}

	int getNam() {
		return nam;
	}

	float getLuong() {
		return Luong;
	}

	virtual ~cNhanVien() {}
};