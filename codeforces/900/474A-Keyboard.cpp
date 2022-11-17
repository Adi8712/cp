#include<bits/stdc++.h>
using namespace std;
 

int main()
{
    char ch;
    cin >> ch;
    string s,str="",a="qwertyuiopasdfghjkl;zxcvbnm,./";
    cin >> s;

    if( ch=='R' )
    {
        for( int i=0; i<s.length(); i++)
        {
            for( int j=0; j<30; j++)
            {
                if( s[i]==a[j] && j%10!=0 )
                {
                    str+=a[j-1];
                    break;
                }
            }
        }
    }
    else
    {
        for( int i=0; i<s.length(); i++)
        {
            for( int j=0; j<30; j++)
            {
                if( s[i]==a[j] && (j+1)%10!=0 )
                {
                    str+=a[j+1];
                    break;
                }
            }
        }
    }
    cout << str << endl;    
}