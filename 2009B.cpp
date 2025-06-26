#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin >> n;
        vector<int>v;
        for(int i = 0; i < n; ++i)
        {
            string s;
            cin >> s;
            for(int j = 0; j < 4; ++j)
            {
                if(s[j] == '#')
                    v.push_back(j + 1);
            }
        }
        for(int i = v.size() - 1; i >= 0; --i)
            cout << v[i] << " ";
    }
}
