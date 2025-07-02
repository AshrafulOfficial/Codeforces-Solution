#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int n;
        cin>>n;
        cin>>s;
        int count1 = 0;
        int count2 = 0;
        count1 = count(s.begin(), s.end(), '+');
        count2 = count(s.begin(), s.end(), '-');
        cout<<abs(count1-count2)<<endl;
    }
    return 0;
}