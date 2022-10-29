#include<bits/stdc++.h>
using namespace std;

int main()
{
    int f=0;
    string s;
    cin >> s;
    for(int i=0; i<s.length(); i++)
    {
        if( s[i]=='H' || s[i]=='Q' || s[i]=='9' )
        {
            f++;
            cout << "YES";
            break;
        }
    }
    if( f==0 )
    {
        cout << "NO";
    }
}
