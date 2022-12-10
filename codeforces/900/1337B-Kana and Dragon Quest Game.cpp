#include<bits/stdc++.h>
using namespace std;
 

int main()
{
    int t;
    cin >> t;
    vector <string> m(t);
    while( t>0 )
    {
        int s,a,b,c=0;
        cin >> s >> a >> b;
        for( int i=0; i<a+b; i++)
        {
            
            if( i<a && s>=20)
            {
                s=s/2+10;
            }
            else if( i>=a && c<b )
            {
                s-=10;
                c++;
            }
            if( s<=0 )
            {
                m[t-1]="yes";
                break;
            }
        }
        if( s>0 )
        {
            m[t-1]="no";
        }
        t--;
    }
    for( int i=m.size()-1; i>=0; i--)
    {
        cout << m[i] << endl;
    }
}