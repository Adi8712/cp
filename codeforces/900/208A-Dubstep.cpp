#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,f="WUB",str="";
    cin >> s;
    for(int i=0; i<s.length(); i++)
    {
        if( s.substr(i,3)==f )
        {
            if( s[i-1]==' ' )
            {
                s.replace(i,3,"");
                i=i-1;
            }
            else
            {
                s.replace(i,3," ");
                i=i-1;
            }
            
        }
        if( s[0]==' ' )
        {
            s.replace(0,1,"");
            i=-1;
        }
    }
    for(int i=s.length()-1; i>=0; i--)
    {
        if( s[i]!=' ' )
        {
            break;
        }
        else
        {
            s.replace(s.length()-1,1,"");
            i=s.length();
        }
    }
    cout << s;
}
