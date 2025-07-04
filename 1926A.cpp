#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int count1 = count(s.begin(), s.end(), 'A');
        int count2 = count(s.begin(), s.end(), 'B');

        if(count1 > count2) cout<<"A"<<endl;
        else cout<<"B"<<endl;
    }
    return 0;
}