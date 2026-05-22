#pragma once
#include "NhanVien.h"

class KiemChungVien : public NhanVien
{
private:
	int soLoiPhatHien;

public:
	KiemChungVien();

	void Nhap() override;
	void Xuat() override;
	double TinhLuong() override;

	bool laKiemChungVien() override;
};