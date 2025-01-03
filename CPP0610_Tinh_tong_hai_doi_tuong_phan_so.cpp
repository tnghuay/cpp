#include <bits/stdc++.h>
using namespace std;

class PhanSo
{
    long long tu, mau;
public:
    PhanSo(long long tu, long long mau);
    friend istream& operator >> (istream&, PhanSo&);
    friend ostream& operator << (ostream&, PhanSo);
    friend PhanSo operator + (PhanSo, PhanSo);
};

PhanSo::PhanSo(long long tu, long long mau)
{
    this->tu = tu;
    this->mau = mau;
}
istream& operator >> (istream& in, PhanSo& a)
{
    in >> a.tu >> a.mau;
    return in;
}

ostream& operator << (ostream& out, PhanSo a)
{
    out << a.tu << "/" << a.mau;
    return out;
}

long long gcd(long long a, long long b)
{
    if(b==0) return a;
    return gcd(b,a%b);
}

long long lcm(long long a, long long b)
{
    return a*b/gcd(a,b);
}

PhanSo operator + (PhanSo a, PhanSo b)
{
    PhanSo tong(1,1);
    long long mc = lcm(a.mau, b.mau);
    tong.tu = mc/a.mau*a.tu + mc/b.mau*b.tu;
    tong.mau = mc;
    long long g = gcd(tong.tu, tong.mau);
    tong.tu /=g;
    tong.mau /=g;
    return tong;
}

int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}
