#include "KhachHangA.h"

double KhachHangA::TinhTien() {
	double tienHang = soLuongHang * donGiaHang;
	double thueVAT = tienHang * 0.1;

	return tienHang + thueVAT;
}