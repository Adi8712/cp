#include<bits/stdc++.h>
using namespace std;

int main()
{
    int d=1;
    string s;
    cin >> s;
    char c = s[0];
    for(int i=1; i<s.length(); i++)
    {
        if(s[i] == c)
        {
            d++;
        }
        else
        {
            c=s[i];
            d=1;
        }
        if(d == 7)
        {
            cout << "YES" << endl;
            break;
        }
    }
    if(d != 7)
    {
        cout << "NO" << endl;
    }
}
