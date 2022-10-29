#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m,n,x;
    cin >> m >>n;
    vector <int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];

    }
    sort( v.begin(), v.end() );
    for (int i = 0; i <= n-2; i++)
    {
        v[i]=v[i+m-1]-v[i];
        if( n-i>n+1-m )
        {
            v.pop_back();
        }
    }
    sort( v.begin(), v.end() );
    cout << v[0];
    
}
