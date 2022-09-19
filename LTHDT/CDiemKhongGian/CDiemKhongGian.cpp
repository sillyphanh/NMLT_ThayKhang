
#include "CDiemKhongGian.h"
#include <iostream>
using namespace std;
void CDiemKhongGian::Nhap()
{
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap y: ";
	cin >> y;
	cout << "Nhap z: ";
	cin >> z;
}
void CDiemKhongGian::Xuat()
{
	cout << "x: " << x << "\ny: " << y << "\nz: " << z;
}