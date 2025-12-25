#include<bits/stdc++.h>
using namespace std;
int main(){
    int g, c, l,x;
    cin>>g>>c>>l;
    if(abs(g-c) >= 10 || abs(g-l) >= 10 || abs(c-l) >= 10){
        cout<<"check again";
    }
    else{
        if(g>=c && g<=l || g>=l && g<=c){
            x = g;
        }
        else if(c>=g && c<=l || c>=l && c<=g){
            x = c;
        }
        else if(l>=c && l<=g || l>=g && l<=c){
            x = l;
        }

        cout<<"final "<<x;
    }
    return 0;
}