#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long avs, a, b, c;
        cin>>avs>>a>>b>>c;
        long long row1 = min(a, avs);
        long long row2 = min(b, avs);

        long long rem1 = avs-row1;
        long long rem2 = avs-row2;

        long long extra = min(c, rem1+rem2);

        cout<<row1+row2+extra<<endl;
    }
    return 0;
}