#include<bits/stdc++.h>
using namespace std;
int sum(int x, int y, vector <int> b)
{
    int s=0;
    for(int i=x; i<=y; i++)
    {
        s+=b[i];
    }
    return s;
}
int main()
{
    int n,x,f=0;
    cin >> n;
    vector <int> a;
    for(int i=0; i<n; i++)
    {
        cin >> x;
        a.push_back(x);
    }
    sort( a.begin(), a.end());
    for(int i=n-1; i>0; i--)
    {
        if(sum(i, n-1, a) > sum(0, i-1, a))
        {
            cout << n-i;
            f++;
            break;
        }
    }
    if(f == 0)
    {
        cout << n;
    }
}
