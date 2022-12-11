#include<bits/stdc++.h>
using namespace std;
 

int main()
{
    int n,c=0;
    cin >> n;
    string s;
    map <int,string> m;
    cin >> s;
    for( int i=0; i<n-1; i++)
    {
        string str=s.substr(i,2);
        for( int j=i; j<n-1; j++)
        {
            string st=s.substr(j,2);
            if( st==str )
            {
                c++;
            }
        }
        m.insert({c,str});
        c=0;
    }
    cout << m.rbegin()->second << endl;
}