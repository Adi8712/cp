#include<bits/stdc++.h>
using namespace std;
 

int main()
{
    int t;
    cin >> t;
    long a[t];
    for( int i=0; i<t; i++)
    {
        cin >> a[i];
    }
    for( int i=0; i<t; i++)
    {
        int r=a[i]%2020;
        if( r<=a[i]/2020 )
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }
}
