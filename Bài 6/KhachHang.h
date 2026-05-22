#pragma once
#include <string>

class KhachHang
{
protected:
	std::string tenKhachHang;
	int soLuongHang;
	double donGiaHang;

public:
	KhachHang();
	virtual ~KhachHang();

	virtual void Nhap();
	virtual void Xuat();

	virtual double TinhTien() = 0;
};