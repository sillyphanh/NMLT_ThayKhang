
#include "CNgay.h"
#include <iostream>
using namespace std;
void CNgay::Nhap()
{
	cout << "Nhap ngay: ";
	cin >> Ngay;
	cout << "Nhap thang: ";
	cin >> Thang;
	cout << "Nhap nam: ";
	cin >> Nam;	
}
void CNgay::Xuat()
{
	cout << "Ngay/Thang/Nam: " << Ngay << "/" << Thang << "/"<<Nam;
	
}