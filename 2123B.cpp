#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,j,k;
        cin>>n>>j>>k;

        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int target = arr[j-1];
        sort(arr, arr+n);

        if(k == 1){
            if(target == arr[n-1]){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}