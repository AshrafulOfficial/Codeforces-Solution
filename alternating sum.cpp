#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,c,a;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>c;

        int sum=0;
        for(j=1; j<=c; j++)
        {
            cin>>a;
            if(j%2 != 0)
                sum=sum+a;
            else
                sum=sum-a;
        }
        cout<<sum<<endl;
    }
}
