#include <iostream>
#include <algorithm>
using namespace std;

struct PhanSo{
    long long a,b;
};

void nhap(PhanSo &p)
{
    cin >> p.a >> p.b;
}

long long gcd(long long a, long long b)
{
    if(a==0) return b;
    return gcd(b%a,a);
}

void rutgon(PhanSo &p)
{
    long long x = gcd(p.a,p.b);
    p.a = p.a/x;
    p.b = p.b/x;
}

void in(PhanSo p)
{
    cout << p.a << "/" << p.b;
}

int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}
