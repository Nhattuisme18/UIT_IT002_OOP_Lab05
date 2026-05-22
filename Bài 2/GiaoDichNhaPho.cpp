#include "GiaoDichNhaPho.h"

float GiaoDichNhaPho::ThanhTien() {
	if (loaiNha == 1) {
		return DienTich * DonGia;
	}
	else if (loaiNha == 2) {
		return 0.9 * DienTich * DonGia;
	}
	else return 0;
}

void GiaoDichNhaPho::Nhap() {
	GiaoDich::Nhap();
	std::cout << "Nhap loai nha(cao cap(1), thuong(2)): ";
	std::cin >> loaiNha;
	std::cout << "Nhap dia chi: ";
	std::cin.ignore();
	std::getline(std::cin, diaChi);
	std::cout << "\n";
}

void GiaoDichNhaPho::Xuat() {
	GiaoDich::Xuat();
	std::cout << "Loai nha: " << loaiNha;
	std::cout << "\nDia chi: " << diaChi<<"\n";
	std::cout << std::fixed << std::setprecision(0);
	std::cout << "Gia tien: " << ThanhTien() << " VND";
}