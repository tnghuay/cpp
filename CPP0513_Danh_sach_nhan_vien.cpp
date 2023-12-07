#include <bits/stdc++.h>
using namespace std;

struct SinhVien{
    string msv,name,grade,dob;
    float gpa;
};

string dob_check(string s)
{
    if(s[1]=='/') s = "0"+s;
    if(s[4]=='/') s.insert(3,"0");
    return s;
}

void nhap(SinhVien ds[], int N)
{
    cin.ignore();
    for(int i=0;i<N;i++)
    {
        getline(cin,ds[i].name);
        cin >> ds[i].grade >> ds[i].dob >> ds[i].gpa;
        cin.ignore();
    }
}

void in(SinhVien ds[], int N)
{
    for(int i=0;i<N;i++)
    {
        if(i<9) ds[i].msv = "B20DCCN00" + to_string(i+1);
        else if(i>=9) ds[i].msv = "B20DCCN0" + to_string(i+1);
        ds[i].dob = dob_check(ds[i].dob);
        cout << ds[i].msv << ' ' << ds[i].name << ' ' << ds[i].grade << ' ' << ds[i].dob << ' ' << fixed << setprecision(2) << ds[i].gpa << endl;
    }
}

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}
