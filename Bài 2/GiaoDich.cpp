#include "GiaoDich.h"


void GiaoDich::Nhap() {
    std::cout << "Nhap ma giao dich: ";
    std::cin >> MaGD;
    std::cout << "Nhap ngay giao dich(ngay thang nam): ";
    std::cin >> ngayGD >> thangGD >> namGD;
    std::cout << "Nhap don gia: ";
    std::cin >> DonGia;

    std::cout << "Nhap dien tich: ";
    std::cin >> DienTich;

}
void GiaoDich::Xuat() {
    std::cout << "Ma giao dich: " << MaGD << "\n";
    std::cout << "Ngay giao dich: " << ngayGD << "/" << thangGD << "/" << namGD << "\n";
    std::cout << "Don gia: " << DonGia << "\n";
    std::cout << "Dien tich: " << DienTich << "\n";
}