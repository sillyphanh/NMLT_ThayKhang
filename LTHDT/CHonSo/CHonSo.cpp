
#include "CHonSo.h"
#include <iostream>
using namespace std;
void CHonSo::Nhap()
{
	cout << "Nhap phan nguyen: ";
	cin >> iNguyen;
	cout << "\nNhap phan tu: ";
	cin >> iTu;
	cout << "\nNhap phan mau: ";
	cin >> iMau;
}
void CHonSo::Xuat()
{
	cout << "Hon so da nhap la: ";
	cout << iNguyen << " " << iTu << "/" << iMau;
}