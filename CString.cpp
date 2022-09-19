#include <iostream>
#include <string>
using namespace std;
class cstring
{
private:
    string s;
public:
    cstring()
    {

    }
    ~cstring()
    {

    }
    friend istream& operator>>(istream &is, cstring &a);
    friend ostream& operator<<(ostream &os, cstring a);
    cstring operator +(cstring a);
    void operator= (cstring a);
    bool operator < (cstring a);
    bool operator <= (cstring a);
    bool operator > (cstring a);
    bool operator >= (cstring a);
    bool operator == (cstring a);
    bool operator != (cstring a);
};
istream& operator>>(istream &is, cstring &a)
{
    getline (is, a.s);
    return is;
}
ostream& operator<<(ostream &os, cstring a)
{
   os << a.s;
   return os;
}
void cstring::operator=(cstring a)
{
    s = a.s;
}
cstring cstring ::operator+ (cstring a)
{
    cstring st;
    st.s = s + a.s;
    return st;
}
bool cstring::operator< (cstring a)
{
    if (s < a.s)
        return 1;
    return 0;
}
bool cstring::operator<= (cstring a)
{
    if (s <= a.s)
        return 1;
    return 0;
}
bool cstring::operator> (cstring a)
{
    if (s > a.s)
        return 1;
    return 0;
}
bool cstring::operator>= (cstring a)
{
    if (s >= a.s)
        return 1;
    return 0;
}
bool cstring::operator== (cstring a)
{
    if (s == a.s)
        return 1;
    return 0;
}
bool cstring::operator!= (cstring a)
{
    if (s != a.s)
        return 1;
    return 0;
}
int main ()
{
    cstring s, st;
    cin>>s>>st;
    cstring temp;
    cout << "\nSo sanh hai chuoi: ";
    if (s == st)
        cout << "Hai chuoi bang nhau";
    else
        cout << "Hai chuoi khong bang nhau";

    cout<<"\nPhep cong hai chuoi: "<<s+st;
}


