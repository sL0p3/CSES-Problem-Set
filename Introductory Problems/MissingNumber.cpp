#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    // Code here
    int n ;
    cin>>n;
    vector<int> v;
    for (int i = 0 ;i<n-1;i++){
        int x ;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    for(int i = 1 ;i<=n;i++){
        if (v[i-1] != i){
            cout<<i;
            return 0 ;
        }
    }
    cout<<n;

    return 0;
}