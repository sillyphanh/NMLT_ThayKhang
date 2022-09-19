#include <iostream>
using namespace std;
class CTimeSpan
{
private:
    int h, m, s;
public:
    friend istream& operator>>(istream& is, CTimeSpan& t);
    friend ostream& operator<<(ostream& os, CTimeSpan t);
    friend class CTime;
};
istream& operator>>(istream& is, CTimeSpan& t)
{
    is >> t.h >> t.m >> t.s;
    return is;
}
ostream& operator<<(ostream& os, CTimeSpan t)
{
    os << t.h << " gio " << t.m << " phut " << t.s << " giay";
    return os;
}

class CTime
{
private:
    int h, m, s;
public:
    CTimeSpan operator- (CTime b);
    CTime operator+ (int);
    CTime operator+ (CTimeSpan b);
    CTime operator- (int);
    CTime operator++ (int);
    CTime operator-- (int);
    friend istream& operator>>(istream& is, CTime& t);
    friend ostream& operator<<(ostream& os, CTime& t);
  
};

istream& operator>>(istream& is, CTime& t)
{
    do
    {
        cout << "Nhap gio: ";
        is >> t.h;
        if (t.h < 0)
            cout << "Gio khong hop le. Moi nhap lai.\n";
    } while (t.h < 0);
    do
    {
        cout << "Nhap phut: ";
        is >> t.m;
        if (t.m < 0)
            cout << "Phut khong hop le. Moi nhap lai.\n";
    } while (t.m < 0);
    do
    {
        cout << "Nhap giay: ";
        is >> t.s;
        if (t.s < 0)
            cout << "Giay khong hop le. Moi nhap lai.\n";
    } while (t.s < 0);
    return is;
}
ostream& operator<<(ostream& os, CTime& t)
{
    os << t.h << " gio " << t.m << " phut " << t.s << " giay.";
    return os;
}
//Phep tru 2 thoi diem ra khoang tg
CTimeSpan CTime:: operator- (CTime b)
{
    CTimeSpan k;
    k.h = abs(h - b.h);
    k.m = abs(m - b.m);
    k.s = abs(s - b.s);
    return k;
}
//Them/Bot mot giay
CTime CTime:: operator++ (int)
{
    s++;
    return *this;
}
CTime CTime:: operator-- (int)
{
    s--;
    if (h == 1)
    {
        if (s < 1)
        {
            if (m < 1)
            {
                h -= 1;
                m = 0;
                s += 60;
            }
        }
    }
    else
    {
        if (s < 0)
        {
            if (m != 0)
            {
                m -= 1;
                s += 60;
            }
            else
            {
                h -= 1;
                m += 1;
                s += 60;
            }
        }
    }
    return *this;
}
//time + int giay 
CTime CTime:: operator + (int a)
{
    s = s + a;
    if (h > 23)
         h -= 24;
    if (m > 59)
    {
        s -= 60;
        h += 1;
    }
    if (s > 59)
    {
        s -= 60;
        m += 1;
    }
    return *this;
}
//time - int giay 
CTime CTime:: operator - (int a)
{
     s = s - a;
     if (h == 1)
     {
         if (s < 1)
         {
             if (m < 1)
             {
                 h -= 1;
                 m = 0;
                 s += 60;
             }
             else
             {
                 m -= 1;
                 s += 60;
             }
         }
     }
     else
     {
         if (s < 0)
         {
             if (m != 0)
             {
                 m -= 1;
                 s += 60;
             }
             else
             {
                 h -= 1;
                 m += 1;
                 s += 60;
             }
         }
     }
    return *this;
}
//Cong khoang thoi gian
CTime CTime::operator+(CTimeSpan b)
{
    CTime a;
    a.h = b.h + h;
    a.m = b.m + m;
    a.s = b.s + s;
    if (a.m > 59)
    {
        a.s -= 60;
        a.h += 1;
    }
    if (a.s > 59)
    {
        a.s -= 60;
        a.m += 1;
    }
    return a;
}
int main()
{
    CTime a,b,c,e,f,temp,t,tam;
    CTimeSpan k;
    cout << "Nhap thoi diem dau tien: \n";
    cin >> a;
    cout << "\nNhap thoi diem thu hai: \n";
    cin >> b;
    cout <<"\nThoi diem dau tien da nhap la : ";
    cout << a;
    cout << "\nThoi diem thu hai da nhap la: ";
    cout << b;
    cout << "\n\nKhoang thoi gian la: ";
    k = a - b;
    cout << k;
    c = a;
    temp = a;
    tam = a;
    t = b;
    a++;
    cout << "\n\nTang thoi diem thu nhat len 1 giay: ";
    cout << a;
    a = c;
    a--;
    cout << "\nGiam thoi diem thu nhat xuong 1 giay: ";
    cout << a;
    c = b;
    b++;
    cout << "\n\nTang thoi diem thu hai len 1 giay: ";
    cout << b;
    b = c;
    b--;
    cout << "\nGiam thoi diem thu hai xuong 1 giay: ";
    cout << b;

    int d;
    cout << "\n\nNhap vao them so nguyen giay: ";
    cin >> d;
    e = temp;
    a = temp + d;
    cout << "\nThoi diem thu nhat sau khi tang " << d << " giay: " << a;
    f = t;
    b = t + d;
    cout << "\nThoi diem thu hai sau khi tang mot khoang "<< d << " giay: " << b;
    temp = e;
    a = temp - d;
    cout << "\n\nThoi diem thu nhat sau khi giam " << d << " giay: " << a;
    t = f;
    b = t - d;
    cout << "\nThoi diem thu hai sau khi giam mot khoang " << d << " giay: " << b;
    CTimeSpan m;
    cout << "\n\nNhap mot khoang thoi gian muon tang them: ";
    cin >> m;

    a = tam + m;
    cout << "\nThoi diem sau khi tang mot khoang thoi gian la " << m << " la: "<<a;
   
}