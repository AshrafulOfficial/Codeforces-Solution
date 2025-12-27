#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;

        int count = 0;
        for(int i=0; i<s.size(); i++){
            if(s[i] == 'N'){
                count++;
            }
        }
        if(count >= 2){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}