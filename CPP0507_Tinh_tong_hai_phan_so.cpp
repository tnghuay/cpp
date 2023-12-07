#include <iostream>
#include <algorithm>
using namespace std;

struct PhanSo
{
    long tu,mau;
};

void nhap(PhanSo &a)
{
    cin >> a.tu >> a.mau;
}

PhanSo tong(PhanSo a, PhanSo b)
{
    PhanSo t;
    t.mau = a.mau*b.mau;
    t.tu = a.tu*b.mau + b.tu*a.mau;
    long long g = __gcd(t.tu,t.mau);
    t.tu /= g;
    t.mau /= g;
    return t;
}

void in(PhanSo t)
{
    cout << t.tu << "/" << t.mau;
}

int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}
