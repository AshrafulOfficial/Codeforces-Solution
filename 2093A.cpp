#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int k;
        cin>>k;
        if(k>0){
        if(k==1){
            cout<<"YES"<<endl;
        }
        else{
            if(k%2==0){
                cout<<"NO"<<endl;
            }
            if(k%2!=0){
                cout<<"YES"<<endl;
            }
        }
        }
    }
    return 0;
}