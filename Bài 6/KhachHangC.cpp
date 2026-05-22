#include "KhachHangC.h"

double KhachHangC::TinhTien() {
	double tienHang = soLuongHang * donGiaHang * 0.5;
	double thueVAT = tienHang * 0.1;

	return tienHang + thueVAT;
}