#include <iostream>
#include <fstream>
#include <set>
#include <cstring>
using namespace std;

string low(string &s)
{
    for(int i=0;i<s.size();i++)
    {
        s[i] = tolower(s[i]);
    }
    return s;
}

int main()
{
    ifstream file;
    file.open("VANBAN.in");
    set<string> s;
    string ss;
    while(file>>ss)
    {
        s.insert(low(ss));
    }
    file.close();
    for(string i:s) cout << i << endl;
}
