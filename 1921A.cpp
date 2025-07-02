#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x1, y1;
        cin>>x1>>y1;
        int x2, y2;
        cin>>x2>>y2;
        int x3, y3;
        cin>>x3>>y3;
        int x4, y4;
        cin>>x4>>y4;
        int a;
        
        if(x1 == x2){
            a = pow((x1-x2), 2) + pow((y1-y2), 2);
        }
        else if(x2 == x3){
            a = pow((x2-x3), 2) + pow((y2-y3), 2);
        }
        else if(x3 == x4){
            a = pow((x3-x4), 2) + pow((y3-y4), 2);
        }
        else if(x4 == x1){
            a = pow((x1-x4), 2) + pow((y1-y4), 2);
        }
        else if(x1 == x3){
            a = pow((x1-x3), 2) + pow((y1-y3), 2);
        }
        else if(x2 == x4){
            a = pow((x2-x4), 2) + pow((y2-y4), 2);
        }
        cout<<a<<endl;
    }
    return 0;
}