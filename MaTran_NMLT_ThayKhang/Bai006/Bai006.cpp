#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <string>
using namespace std;
void Nhap(double[][500], int&, int&);
void Xuat(double[][500], int, int);

int main()
{
	double b[500][500];
	int k;
	int l;
	Nhap(b, k, l);
	cout << "Ma tran ban dau:";
	cout << "\n";
	Xuat(b, k, l);

	return 0;
}

void Nhap(double a[][500], int& m, int& n)
{
	cout << "Nhap m: ";
	cin >> m;
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
}

void Xuat(double a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(8) << setprecision(3) << a[i][j];
		cout << endl;
	}
}