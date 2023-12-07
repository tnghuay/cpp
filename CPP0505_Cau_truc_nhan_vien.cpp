#include <bits/stdc++.h>
using namespace std;

struct nhanvien{
    string msv = "00001", name, gender, dob, add, tax, contract;
};

void nhap(nhanvien &a)
{
    getline(cin, a.name);
    cin.ignore();
    cin >> a.gender >> a.dob;
    cin.ignore();
    getline(cin, a.add);
    cin.ignore();
    cin >> a.tax >> a.contract;
}

void in(nhanvien a)
{
    cout << a.msv << " " << a.name << " " << a.dob << " " << a.add << " ";
    cout << a.tax << " " << a.contract;
}
int main()
{
    struct nhanvien a;
    nhap(a);
    in(a);
    return 0;
}
