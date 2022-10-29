#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    int c=a[0],count=1;
    vector <int> v;
    for(int i=1; i<n; i++)
    {
        if( a[i]>=c)
        {
            count++;
        }
        else
        {
            v.push_back(count);
            count=1;
        }
        c=a[i];
    }
    v.push_back(count);
    sort(v.begin(),v.end());
    int j=v.size();
    cout << v[j-1];
}
