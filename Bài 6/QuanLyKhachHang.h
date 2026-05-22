#pragma once
#include "KhachHang.h"
#include <vector>

class QuanLyKhachHang
{
private:
	std::vector<KhachHang*> DanhSachKhachHang;
	int x;
	int y;
	int z;
public:
	QuanLyKhachHang();
	~QuanLyKhachHang();
	void NhapDanhSach();
	void XuatKetQua();
	double TongTienCongTyThuDuoc();
};