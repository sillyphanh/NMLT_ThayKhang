#include "CThoiGian.h"
#include <iostream>
using namespace std;
void CThoiGian::Nhap()
{
	cout << "Nhap gio: ";
	cin >> Gio;
	cout << "Nhap phut: ";
	cin >> Phut;
	cout << "Nhap giay: ";
	cin >> Giay;
}
void CThoiGian::Xuat()
{
	cout << "\nGio: " << Gio;
	cout << "\nPhut: " << Phut;
	cout << "\nGiay: " << Giay;
}
