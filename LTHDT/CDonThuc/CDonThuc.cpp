
#include "CDonThuc.h"
#include <iostream>
using namespace std;
void CDonThuc::Nhap()
{
	cout << "Nhap he so: ";
	cin >> heso;
	cout << "Nhap so mu: ";
	cin >> somu;
}
void CDonThuc::Xuat()
{
	cout << "Don thuc da nhap la: ";
	if (heso == 0)
		cout << 0;
	else
	{
		if (somu == 0)
			cout << heso;
		else
			cout << heso << "x^" << somu;
	}
	
}