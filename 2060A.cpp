#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        vector<int>v;
        int w;
        for(int i=0; i<4; i++){
            cin>>w;
            if(w>=1 && w<=100){
            v.push_back(w);
            }
        }
        int k = v[0] + v[1];
        if(v[0] + v[1] == k && k + v[2] == v[3]){
            v.insert(v.begin()+2, k);
        }
        else{
            v.insert(v.begin()+2, v[2]-v[1]);
        }
        int count=0;
        for(int p=0; p<5; p++){
            if(v[p] + v[p+1] == v[p+2]){
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}