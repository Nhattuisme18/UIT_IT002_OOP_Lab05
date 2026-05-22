#pragma once
#include <string>

class NhanVien
{
protected:
	std::string maNhanVien;
	std::string hoTen;
	int tuoi;
	std::string soDienThoai;
	std::string email;
	double luongCoBan;

public:
	NhanVien();
	virtual ~NhanVien();

	virtual void Nhap();
	virtual void Xuat();

	virtual double TinhLuong() = 0;

	virtual bool laLapTrinhVien();
	virtual bool laKiemChungVien();
};