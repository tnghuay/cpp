#include <iostream>
#include <fstream>
#include <map>
#include <set>
using namespace std;

int main()
{
    ifstream file;
    file.open("DATA.in");
    map<int,int> mp;
    set<int> s;
    int n,m,k;
    file >> n;
    file >> m;
    while(n--)
    {
        file >> k;
        mp[k]++;
    }
    while(m--)
    {
        file>>k;
        if(mp[k]) s.insert(k);
    }
    for(int i:s) cout << i << ' ';
    file.close();
}
