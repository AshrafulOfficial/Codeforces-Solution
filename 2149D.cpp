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

        if(n==1 || n==2){
            cout<<0<<endl;
        }
        else{
            int count = 0;
            if(n % 2 == 0){
                for(int i=1; i<n-1; i++){
                    for(int j=2; j<n; j++){
                        if(s[i] != s[j]){
                            swap(s[i], s[j]);
                            count++;
                        }
                        break;
                    }
                }
                cout<<count<<endl;
            }
            else{
                for(int i=1; i <= n/2; i=i+2){
                    for(int j=n-1; j > n / 2; j=j-2){
                        if(s[i] != s[j]){
                            swap(s[i], s[j]);
                            count++;
                        }
                    }
                }
                cout<<count<<endl;
            }
        }
    }
    return 0;
}
