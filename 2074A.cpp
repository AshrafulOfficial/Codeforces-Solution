#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int l,r,d,u;
    cin>>l>>r>>d>>u;

    double lu, ur, rd, dl, lr, du;
    if(l>0 && r>0 && d>0 && u> 0){
        lu = pow(l, 2)+pow(u, 2);
        lu = sqrt(lu);
        ur = pow(u, 2)+pow(r, 2);
        ur = sqrt(ur);
        rd = pow(r, 2)+pow(d, 2);
        rd = sqrt(rd);
        dl = pow(d, 2)+pow(l, 2);
        dl = sqrt(dl);

        lr = pow(l, 2)+pow(r, 2);
        lr = sqrt(lr);
        du = pow(d, 2)+pow(u, 2);
        du = sqrt(du);
    }
    if(lu == ur && ur == rd && rd == dl && lr == du){
            cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    cout<<endl;
    }
    return 0;
}