#include <bits/stdc++.h>
using namespace std;

struct student{
    string msv,name,grade;
    float m1,m2,m3;
};

bool cmp(student a, student b)
{
    return a.name < b.name;
}

void nhap(student &a)
{
    cin >> a.msv;
    cin.ignore();
    getline(cin,a.name);
    cin >> a.grade >> a.m1 >> a.m2 >> a.m3;
}

void in(student ds[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout << i+1 << ' ' << ds[i].msv << ' ' << ds[i].name << ' ' << ds[i].grade << ' ' << fixed << setprecision(1) << ds[i].m1 << ' ' << ds[i].m2 << ' ' << ds[i].m3 << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    student ds[t];
    for(int i=0;i<t;i++)
    {
        nhap(ds[i]);
    }
    sort(ds,ds+t,cmp);
    in(ds,t);
    return 0;
}
