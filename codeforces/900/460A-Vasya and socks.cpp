#include<bits/stdc++.h>
using namespace std;
 

int main()
{
    int n,m,s;
    cin >> n >> m;
    s=n;
    while(true)
    {
        s=n+s/m;
        if( n+s/m==s )
        {
            cout << n+s/m;
            break;
        }
    }
}
