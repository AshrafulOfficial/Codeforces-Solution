#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    if(t>=1 && t<=55){
        while(t--){
            int a,b;
            vector<int>v;
            cin>>a>>b;
            if(a>=1 && a<=10 && b>=1 && b<=10){
                for(int c=a; c<=b; c++){
                    v.push_back((c-a)+(b-c));
                }
            }
            int val = *min_element(v.begin(), v.end());
            cout<<val<<endl;
        }
    }
    return 0;
}