#include<bits/stdc++.h>
using namespace std;
 

int main()
{
    int t;
    cin >> t;
    vector <long> n(t);
    for( int i=0; i<t; i++)
    {
        cin >> n[i];
    }
    for( int i=0; i<t; i++)
    {    
        int c=0;
        while(true)
        {
            if( n[i]==1 )
            {
                cout << c << endl;
                break;
            }
            else
            {
                if( n[i]%6==0 )
                {
                    n[i]/=6;
                    c++;
                }
                else if( n[i]%3==0 )
                {
                    n[i]/=3;
                    c+=2;
                }
                else
                {
                    cout << "-1" << endl;
                    break;
                }
            }
        }
    }
}
