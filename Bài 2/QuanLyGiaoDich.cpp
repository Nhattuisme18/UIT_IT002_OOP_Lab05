#include "QuanLyGiaoDich.h"

QuanLyGiaoDich::QuanLyGiaoDich() {};

QuanLyGiaoDich::~QuanLyGiaoDich() {
	for (GiaoDich* gd : DanhSachGiaoDich) {
		delete gd;
	}
	DanhSachGiaoDich.clear();
}
void QuanLyGiaoDich::NhapDanhSach() {
	int soGD;
	std::cout << "Nhap so giao dich: ";
	std::cin >> soGD;
	GiaoDich* gd = nullptr;
	for (int i = 0; i < soGD; i++) {
		int loaiGD;
		std::cout << "Nhap loai giao dich nha(Dat:1 | Pho:2| Chung cu:3): ";
		std::cin >> loaiGD;
		if (loaiGD == 1) {
			gd = new GiaoDichDat();
		}
		else if (loaiGD == 2) {
			gd = new GiaoDichNhaPho();
		}
		else if (loaiGD == 3) {
			gd = new GiaoDichChungCu();
		}
		else {
			std::cout << "Loai giao dich ko hop le, hay nhap lai!";
			i--;
			continue;
		}
		gd->Nhap();
		DanhSachGiaoDich.push_back(gd);
	}
}
int QuanLyGiaoDich::DemGiaoDichDat() {
	int dem = 0;
	for (GiaoDich* gd : DanhSachGiaoDich) {
		if (gd->LanhaDat()) {
			dem++;
		}
	
	}
	return dem;
}
int QuanLyGiaoDich::DemGiaoDichPho() {
	int dem = 0;
	for (GiaoDich* gd : DanhSachGiaoDich) {
		if (gd->LanhaPho()) {
			dem++;
		}

	}
	return dem;
}
int QuanLyGiaoDich::DemGiaoDichChungCu() {
	int dem = 0;
	for (GiaoDich* gd : DanhSachGiaoDich) {
		if (gd->LachungCu()) {
			dem++;
		}

	}
	return dem;
}
double QuanLyGiaoDich::TrungBinh() {
	double TongTien = 0;
	int dem = DemGiaoDichChungCu();
	if (dem == 0) return 0;
	for (GiaoDich* gd : DanhSachGiaoDich) {
		if (gd->LachungCu()) {
			TongTien += gd->ThanhTien();
		}
	}
	return TongTien / dem;
}
GiaoDich* QuanLyGiaoDich::GDphoMAXvalue() {
	GiaoDich* MAXgd = nullptr;
	double MAX = 0;
	for (GiaoDich* gd: DanhSachGiaoDich){
		if (gd->LanhaPho()) {
			if (MAXgd == nullptr || gd->ThanhTien() > MAX) {
				MAXgd = gd;
				MAX = gd->ThanhTien();
		    }		
		}
	}
	return MAXgd;
}

int QuanLyGiaoDich::XuatGiaoDichThang12Nam2024() {
	std::cout << "\n*DANH SACH GIAO DICH THANG 12 NAM 2024*\n";

	int dem = 0;
	for (GiaoDich* gd : DanhSachGiaoDich) {
		if (gd->getThang() == 12 && gd->getNam() == 2024) {
			std::cout << dem + 1 << ".\n";
			gd->Xuat();
			dem++;
			std::cout << "\n----------\n";
		}
	}

	if (dem == 0) {
		std::cout << "Ko co giao dich nao vao thang 12 nam 2024!\n";
	}
	return dem;
}