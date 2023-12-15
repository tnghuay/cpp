#include <iostream>
#include <fstream>
#include <map>
using namespace std;

int main()
{
    ifstream file;
    file.open("DATA.in");
    map<int,int> mp;
    int n;
    while(file>>n)
    {
        mp[n]++;
    }
    file.close();
    for(pair<int,int>x:mp)
    {
        cout  << x.first << ' ' << x.second << endl;
    }
}
