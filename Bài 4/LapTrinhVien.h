#pragma once
#include "NhanVien.h"

class LapTrinhVien : public NhanVien
{
private:
	int soGioOvertime;

public:
	LapTrinhVien();

	void Nhap() override;
	void Xuat() override;
	double TinhLuong() override;

	bool laLapTrinhVien() override;
};