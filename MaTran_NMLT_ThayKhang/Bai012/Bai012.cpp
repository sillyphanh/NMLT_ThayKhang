#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <string>
using namespace std;

string getInputFileName(int);
void Nhap(int[][500], int&, int&, string);
void Xuat(int[][500], int, int);
void LietKe(int[][500], int, int);
bool SoNguyenTo(int);
int main()
{
	int b[500][500];
	int k;
	int l;
	for (int i = 1; i <= 1; i++)
	{
		string FileName = getInputFileName(i);
		Nhap(b, k, l, FileName);

		cout << "\n" << FileName << endl;
		Xuat(b, k, l);

		cout << "\nCac so nguyen to trong ma tran la: ";
		LietKe(b, k, l);
	}
	return 0;
}

void Nhap(int a[][500], int& m, int& n, string filename)
{
	ifstream fi(filename);
	fi >> m;
	fi >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			fi >> a[i][j];
}

string getInputFileName(int n)
{
	string fileName = string("intmatrandata");
	if (n < 10)
		fileName += "0" + to_string(n) + ".inp";
	else
		fileName += to_string(n) + ".inp";
	return fileName;
}

void Xuat(int a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(8) << a[i][j];
		cout << "\n";
	}
}

void LietKe(int a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (SoNguyenTo(a[i][j]) == 1)
				cout << setw(8) << a[i][j];
}

bool SoNguyenTo(int n)
{
	int flag = 1;
	if (n < 0 || n == 0 || n == 1)
		flag = 0;
	for (int i = 2; i < n; i++)
		if (n % i == 0)
			flag = 0;
	return flag;
}