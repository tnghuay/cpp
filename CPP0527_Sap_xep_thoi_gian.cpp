#include <iostream>
#include <algorithm>
using namespace std;

struct Time{
    int h,m,s,total;
};

void nhap(Time ds[], int t)
{
    for(int i=0;i<t;i++)
    {
        cin >> ds[i].h >> ds[i].m >> ds[i].s;
        ds[i].total = ds[i].h*3600 + ds[i].m*60 + ds[i].s;
    }
}

void in(Time ds[], int t)
{
    for(int i=0;i<t;i++)
        cout << ds[i].h << ' ' << ds[i].m << ' ' << ds[i].s << endl;
}

bool cmp(Time a, Time b)
{
    return a.total < b.total;
}

int main()
{
    int n;
    cin >> n;
    Time ds[n];
    nhap(ds,n);
    sort(ds,ds+n,cmp);
    in(ds,n);
    return 0;
}

