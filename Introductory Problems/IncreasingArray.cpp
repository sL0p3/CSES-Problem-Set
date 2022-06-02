#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    // Code here
    long long n,prev , curr;
    long long ans=0;
    cin>> n>>prev;
    for(int i = 0 ;i<n-1;i++){
        cin>>curr;
        if (prev>curr){
            ans+= (prev-curr);
        }
        else{
            prev = curr;
        }
    }
    cout<<ans<<endl;
}