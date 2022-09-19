#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

class SoPhuc
{
private:
    double thuc;
    double ao;
public:
    SoPhuc operator+ (SoPhuc a);
    SoPhuc operator- (SoPhuc a);
    SoPhuc operator* (SoPhuc a);
    SoPhuc operator/ (SoPhuc a);
    friend istream& operator>>(istream &is, SoPhuc &p);
    friend ostream& operator<<(ostream &os, SoPhuc p);

};
istream& operator>>(istream &is, SoPhuc &p)
{
    cout<<"Nhap phan thuc: ";
    is>>p.thuc;
    cout<<"Nhap phan ao: ";
    is>>p.ao;
    return is;
}
ostream& operator<<(ostream &os, SoPhuc p)
{
    if (p.thuc == 0)
    {
        if (p.ao == 0)
            os<<0;
        else
            os<<p.ao<<"i";
    }
    else
    {
        if (p.ao == 0)
            os<<p.thuc;
        else
        {
            if (p.ao < 0)
                os<<p.thuc<<p.ao<<"i";
            else
                os<<p.thuc<<"+"<<p.ao<<"i";
        }
    }
    return os;
}

SoPhuc SoPhuc:: operator+ (SoPhuc a)
{
    SoPhuc s;
    s.thuc=thuc+a.thuc;
    s.ao=ao+a.ao;
    return s;
}
SoPhuc SoPhuc ::operator- (SoPhuc a)
{
    SoPhuc s;
    s.thuc=thuc-a.thuc;
    s.ao=ao-a.ao;
    return s;
}
SoPhuc SoPhuc ::operator* (SoPhuc a)
{
    SoPhuc s;
    s.thuc=thuc*a.thuc;
    s.ao=ao*a.ao;
    return s;
}
SoPhuc SoPhuc ::operator/ (SoPhuc a)
{
    SoPhuc s;
    s.thuc=(thuc * a.thuc + ao * a.ao) / (pow(a.thuc, 2) + pow(a.ao, 2));
    s.ao=(a.thuc * ao - thuc * a.ao) / (pow(a.thuc, 2) + pow(a.ao, 2));
    return s;
}
int main()
{
    SoPhuc a,b;
    cout<<"Nhap so phuc thu nhat: \n";
    cin>>a;
    cout<<"\nNhap so phuc thu hai: \n";
    cin>>b;

    cout<<"\nSo thuc a = ";
    cout<<a;
    cout<<"\nSo thuc b = ";
    cout<<b;

    SoPhuc c;
    c=a+b;
    cout<<"\na + b = ";
    cout<<c;

    c=a-b;
    cout<<"\na - b = ";
    cout<<c;

    c=a*b;
    cout<<"\na * b = ";
    cout<<c;

    c=a/b;
    cout<<"\na / b = ";
    cout<<c;

    return 0;
}