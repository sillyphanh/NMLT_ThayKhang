
#include "CSoPhuc.h"
#include <iostream>
using namespace std;
void CSoPhuc::Nhap()
{
	cout << "Nhap phan thuc: ";
	cin >> iThuc;
	cout << "\nNhap phan ao: ";
	cin >> iAo;
}
void CSoPhuc::Xuat()
{
	cout << "So phuc da nhap la: ";
	if (iThuc == 0)
	{
		if (iAo == 0)
			cout << 0;
		else
			cout << iAo << "i";
	}
	else
	{
		if (iAo == 0)
			cout << iThuc;
		else
			cout << iThuc << "+" << iAo << "i";
	}
}