
#include <iostream>
#include <string>
using namespace std;
struct HocSinh
{
	int mahs;
	string ten;
	int tuoi;
	float d15, d45, dgk, dck;
	float dtb;
};

void Nhap1HS(HocSinh* a)
{
	cout << "\nNhap ma so: ";
	cin >> a->mahs;
	cin.ignore();
	cout << "Nhap ho ten: ";
	cin >> a->ten;
	cout << "Nhap tuoi: ";
	cin >> a->tuoi;
}
void NhapDSHS(HocSinh*&a, int& n)
{
	cin >> n;
	a = new HocSinh[n];
	for (int i = 0; i < n; i++)
	{
		Nhap1HS(&a[i]);
	}
}
void XuatHS(HocSinh* a, int n)
{
	cout << "Ma so: \tHo ten: \tTuoi: \n";
	for (int i = 0; i < n; i++)
	{
		cout << a[i].mahs << "\t" << a[i].ten << "\t" << a[i].tuoi << endl;
	}
}
void NhapDiem15phut(HocSinh* a)
{
	cout << "Nhap diem 15': ";
	cin >> a->d15;	
}
void NhapDiem45phut(HocSinh* a)
{
	cout << "Nhap diem 45': ";
	cin >> a->d45;
}
void NhapDiemGiuaKy(HocSinh* a)
{
	cout << "Nhap diem giua ky: ";
	cin >> a->dgk;
}
void NhapDiemCuoiKy(HocSinh* a)
{
	cout << "Nhap diem cuoi ky: ";
	cin >> a->dck;
}

void NhapDSDiem(HocSinh*& a, int &n)
{
	a = new HocSinh[n];
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap diem HS thu " << i + 1 << endl;
		for (int j = 0; j < 3; j++)
		{
			NhapDiem15phut(&a[j]);
		}
		for (int j = 0; j < 2; j++)
		{
			NhapDiem45phut(&a[j]);
		}
		for (int j = 0; j < 2; j++)
		{
			NhapDiemGiuaKy(&a[j]);
		}
		for (int j = 0; j < 1; j++)
		{
			NhapDiemCuoiKy(&a[j]);
		}
	}
}


void XuatDiem(HocSinh* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\nDiem kiem tra 15: " << a[i].d15;
		cout << "\nDiem kiem tra 45: " << a[i].d45;
		cout << "\nDiem kiem tra giua ky: " << a[i].dgk;
		cout << "\nDiem kiem tra cuoi ky: " << a[i].dck;
	}
}
int main()
{
	HocSinh *a;
	int n;
	NhapDSHS(a, n);
	XuatHS(a, n);
	cout << endl;
	NhapDSDiem(a, n);
	XuatDiem(a, n);
}