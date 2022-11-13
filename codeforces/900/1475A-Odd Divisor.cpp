#include<bits/stdc++.h>
using namespace std;
 

int main()
{
    int t;
    cin >> t;
    vector <long long> v(t);
    for( int i=0; i<t; i++)
    {
        cin >> v[i];
    }
    for( int i=0; i<t; i++)
    {
        while( v[i]%2==0 )
        {
            v[i]/=2;
        }
        if( v[i]==1 )
        {
            cout << "no" << endl;
        }
        else
        {
            cout << "yes" << endl;
        }
    }
}
