#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        vector<int>v;
        int n;
        cin>>n;
        string ans;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            if(x>=0 && x<=127){
                v.push_back(x);
            }
        }
        for(int j=0; j<v.size()-1; j++){
            int diff = abs(v[j]-v[j+1]);
            if(diff == 5 || diff == 7){
                ans="YES";
            }
            else{
                ans="NO";
                break;
            }
        }
        if(ans == "YES"){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}