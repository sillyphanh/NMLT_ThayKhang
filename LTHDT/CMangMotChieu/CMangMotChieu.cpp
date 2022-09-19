
#include "CMangMotChieu.h"
#include <iostream>
using namespace std;
void CMangMotChieu::Nhap()
{
	cout << "Nhap ma so: ";
	cin >> ms;
	cin.ignore();
	cout << "Nhap ho ten: ";
	cin.getline (name,100);
	cout << "Nhap tuoi: ";
	cin >> age;
}
void CMangMotChieu::Xuat()
{
	cout << "Ma so:\tHo ten:\tTuoi:\n";
	cout << ms << "\t" << name << "\t" << age;
}
void NhapDS(CMangMotChieu*& a, int& n)
{
	cout << "Nhap so luong: ";
	cin >> n;
	a = new CMangMotChieu[n];
	for (int i = 0; i < n; i++)
	{
		a[i].Nhap();
	}
}
void XuatDS(CMangMotChieu* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		a[i].Xuat();
	}
}