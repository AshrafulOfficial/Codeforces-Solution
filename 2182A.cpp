#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;

        bool newYear = true;
        for(int i=0; i<s.size()-3; i++){
            if(s[i] == '2' && s[i+1] == '0' && s[i+2] == '2'){
                if(s[i+3] == '5'){
                    newYear = false;
                }
                else if(s[i+3] == '6'){
                    newYear = true;
                    break;
                }
            }
        }
        if(newYear == true){
            cout<<0<<endl;
        }
        else{
            cout<<1<<endl;
        }
    }
    return 0;
}