#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <string>
using namespace std;

void Nhap(float[][500], int&, int&);
void Xuat(float[][500], int, int);
void Xuat(float[][500], int, int, string);

int main()
{
	float b[500][500];
	int k;
	int l;

	Nhap(b, k, l);
	cout << "Ma tran ban dau:";
	cout << "\n";
	Xuat(b, k, l);

	Xuat(b, k, l, "data06.inp");
	return 0;
}

void Nhap(float  a[][500], int& m, int& n)
{
	cout << "Nhap m: ";
	cin >> m;
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			a[i][j] = -100.0
			+ (rand() / (RAND_MAX / (100.0 - (-100.0))));
}

void Xuat(float a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << setw(8);
			cout << setprecision(3);
			cout << a[i][j];
		}
		cout << "\n";
	}
}

void Xuat(float a[][500], int m, int n, string filename)
{
	ofstream fo(filename);
	fo << setw(8) << n;
	fo << setw(8) << m;
	fo << "\n";
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			fo << setw(8) << setprecision(5) << a[i][j];
		fo << "\n";
	}
}