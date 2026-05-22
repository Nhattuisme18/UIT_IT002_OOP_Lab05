#pragma once
#include "KhachHang.h"

class KhachHangB : public KhachHang
{
private:
	int soNamThanThiet;

public:
	KhachHangB();

	void Nhap() override;
	double TinhTien() override;
};