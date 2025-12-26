#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<char>c(n);
        for(int i=0; i<n; i++){
            cin>>c[i];
        }
        int count = 0;

        for(int i=0; i<n; i++){
            if(c[i] == '0'){
                c[i] = '1';
                for(int j=0; j<n; j++){
                    if(c[j] == '1'){
                        count++;
                    }
                }
                c[i] = '0';
            }
            else if(c[i] == '1'){
                c[i] = 0;
                for(int j=0; j<n; j++){
                    if(c[j] == '1'){
                        count++;
                    }
                }
                c[i] = '1';
            }
        }
        cout<<count<<endl;
    }
    return 0;
}