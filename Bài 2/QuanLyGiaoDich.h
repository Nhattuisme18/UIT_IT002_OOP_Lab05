#pragma once
#include "GiaoDich.h"
#include "GiaoDichDat.h"
#include "GiaoDichChungCu.h"
#include "GiaoDichNhaPho.h"
#include <vector>

class QuanLyGiaoDich
{
private:
	std::vector<GiaoDich*> DanhSachGiaoDich;

public: 
	QuanLyGiaoDich();
	~QuanLyGiaoDich();

	void NhapDanhSach();
	int DemGiaoDichDat();
	int DemGiaoDichPho();
	int DemGiaoDichChungCu();
	double TrungBinh();
	GiaoDich* GDphoMAXvalue();
	int XuatGiaoDichThang12Nam2024();
};

