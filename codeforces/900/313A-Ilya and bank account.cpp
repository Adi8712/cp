#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    if( s[0]=='-' )
    {
        string st=s;
        if( stoi(st.replace(s.length()-1,1,"")) > stoi(s.replace(s.length()-2,1,"")) )
        {
            cout << stoi(st);
        }
        else
        {
            cout << stoi(s);
        }
    }
    else
    {
        cout << stoi(s);
    }
}
