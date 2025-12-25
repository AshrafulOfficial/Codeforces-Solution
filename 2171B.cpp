#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        vector<int>p(n-1);

        int i = 0;

        for(i=0; i<n; i++){
            cin>>v[i];
        }

        if(v[0] == -1 && v[n-1] >= 0){
            v[0] = v[n-1];
        }
        else if(v[0] >= 0 && v[n-1] == -1){
            v[n-1] = v[0];
        }
        else if(v[0] == -1 && v[n-1] == -1){
            v[0] = 0;
            v[n-1] = 0;
        }
        for(i=1; i<n-1; i++){
            if(v[i] == -1){
                v[i] = 0;
            }
        }

        int sum = 0;

        for(int i=0; i<n; i++){
            if(i + 1 == n){
                break;
            }
            p[i] = v[i+1] - v[i];

            sum = sum + p[i];
        }
        cout<<abs(sum)<<endl;

        for(int i=0; i<n; i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}