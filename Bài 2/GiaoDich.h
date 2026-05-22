#pragma once
#include <iostream>
#include <string>
#include <iomanip>
class GiaoDich
{
protected:
	std::string MaGD;
	int ngayGD;
	int thangGD;
	int namGD;
	float DonGia;
	float DienTich;
public:
	GiaoDich():MaGD(""),ngayGD(1),thangGD(1),namGD(1),DonGia(0),DienTich(0) {}
	virtual ~GiaoDich() {}
	virtual float ThanhTien() = 0;
	virtual void Nhap();
	virtual void Xuat();
	virtual bool LanhaDat() {
		return false;
	}
	virtual bool LanhaPho() {
		return false;
	}
	virtual bool LachungCu() {
		return false;
	}
	int getNgay() {
		return ngayGD;
	}
	int getThang() {
		return thangGD;
	}
	int getNam() {
		return namGD;
	}
};

