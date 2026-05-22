#pragma once
#include "NhanVien.h"
#include <vector>

class QuanLyNhanVien
{
private:
	std::vector<NhanVien*> DanhSachNhanVien;

public:
	QuanLyNhanVien();
	~QuanLyNhanVien();

	void NhapDanhSach();
	void XuatDanhSach();

	double LuongTrungBinh();
	void XuatNhanVienLuongThapHonTrungBinh();

	NhanVien* NhanVienLuongCaoNhat();
	NhanVien* NhanVienLuongThapNhat();

	NhanVien* LapTrinhVienLuongCaoNhat();
	NhanVien* KiemChungVienLuongThapNhat();
};