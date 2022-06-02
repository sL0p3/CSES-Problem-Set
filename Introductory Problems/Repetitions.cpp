#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    // Code here
    string s ;
    cin>>s ;
    int count = 1 , ans = 1;
    for(int i = 1 ;i<s.length();i++){
        if (s[i-1] == s[i]) count++;
        else count = 1;
        ans = max(ans,count);
    }
    cout<<ans;
    return 0;
}