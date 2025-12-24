#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        int s[4];
        for(int i=0; i<4; i++){
            cin>>s[i];
        }

        if(s[0] == s[1] && s[2] == s[3] && s[0] == s[2] && s[1] == s[3]){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}