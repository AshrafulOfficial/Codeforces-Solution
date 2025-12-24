#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        int t;
        cin>>t;
        vector<int>a(t);
        for(int i=0; i<t; i++){
            cin>>a[i];
        }

        int max = a[0];
        int op = 0;

        for(int i=1; i<t; i++){
            if(a[i] < max){
                op++;
            }
            else{
                max = a[i];
            }
        }
        cout<<op<<endl;
    }
    return 0;
}