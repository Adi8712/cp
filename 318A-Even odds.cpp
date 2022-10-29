#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,k;
    cin >> n >> k;
    if( k<=n && k>=1)
    {
        if( k<=(n+1)/2 )
        {
            cout << 2*k-1;
        }
        else
        {
            cout << 2*(k-(long long int)(n+1)/2);
        }
    }
}
