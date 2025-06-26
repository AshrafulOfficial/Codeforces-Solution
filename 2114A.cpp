#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string n;
        cin>>n;
        if(n.length() == 4){
            int num = stoi(n);
            double m = sqrt(num);
            int a, b;
            if(floor(m) == m){
                for(int i=0; i<=m; i++){
                    for(int j=0; j<=m; j++){
                        if(i+j == m){
                            a = i;
                            b = j;
                        }
                    }
                }
                cout<<a<<" "<<b<<endl;
            }
            else{
                cout<<"-1"<<endl;
            }
        }
    }
    return 0;
}