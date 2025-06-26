#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,r,t;
    cin>>t;
    while(t--)
    {
        cin>>l>>r;
        cout<<((r+1)/2-(l/2))/2<<endl;
    }

    return 0;
}
