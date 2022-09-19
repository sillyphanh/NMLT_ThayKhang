
#include "CPhanSo.h"
#include <iostream>
using namespace std;
void CPhanSo::Nhap()
{
	cout << "Nhap tu so: ";
	cin >> iTu;
	cout << "Nhap mau so: ";
	cin >> iMau;
}
int ucln(int a, int b)
{
	if (b == 0)
		return a;
	return ucln(b, a % b);
}
void CPhanSo::Xuat()
{
	cout << "Phan so da nhap la: ";
	cout << iTu << "/" << iMau;
	cout << "\nPhan so sau khi rut gon la: ";
	int c = ucln(iTu, iMau);
	iTu = iTu / c;
	iMau = iMau / c;
	cout << iTu << "/" << iMau;
}