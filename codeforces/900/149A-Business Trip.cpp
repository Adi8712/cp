#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k,s=0;
    cin >> k;
    vector <int> v(12);
    for( int i=0; i<12; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    for( int i=11; i>=0; i--)
    {
        s+=v[i];
        if( k==0 )
        {
            cout << "0" << endl;
            break;
        }
        else if( s>=k )
        {
            cout << abs(i-12) << endl;
            break;
        }
    }
    if( s<k )
    {
        cout << "-1" << endl;
    }
}