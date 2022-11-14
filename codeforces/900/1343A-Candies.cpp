#include<bits/stdc++.h>
using namespace std;
 

int main()
{
    int t;
    cin >> t;
    int c=0;
    vector < long > v(t);
    for( int i=0; i<t; i++)
    {
        cin >> v[i];
    }
    for( int i=0; i<t; i++)
    {
        long p=4;
        long x;
        do
        {
            x=v[i]/(p-1);
            if( x*(p-1)==v[i] )
            {
                cout << x << endl;
                break;
            }
            p*=2;
        } while (x>=1);
    }

}
