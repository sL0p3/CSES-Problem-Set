#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<vector<int>> vvi;
typedef set<int> si;
typedef set<ll> sll;
typedef map<int, int> mii;
typedef map<ll, ll> mll;
typedef map<char, int> mci;
#define FOR(a, b, c) for (int(a) = (b); (a) < (c); ++(a))
#define FORN(a, b, c) for (int(a) = (b); (a) <= (c); ++(a))
#define FORD(a, b, c) for (int(a) = (b); (a) >= (c); --(a))
#define forEach(a, b) for (auto &(a) : (b))
#define fr(i, n) FOR(i, 0, n)
#define frn(i, n) FORN(i, 1, n)
#define sqr(x) ((LL)(x) * (x))
#define pb push_back
#define pp pop_back
#define f first
#define s second
#define mp make_pair
#define all(a) (a).begin(), (a).end()
#define alla(arr, sz) arr, arr + sz
const int M = 1e9 + 7;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // Code here
    ll n;
    cin>>n;
    ll nn = (n*(n+1))/2; 
    if(nn%2) cout<<"NO"<<endl;
    else{
        cout<<"YES"<<endl;
        ll mid = nn/2;
        vll v1,v2;
        for(int i= n;i>0;i--){
            if(i<= mid){
                v1.pb(i);
                mid = mid-i;
            }
            else v2.pb(i);
        }
        cout<<v1.size()<<endl;
        fr(i,v1.size()){
            cout<<v1[i]<<" ";
        }cout<<endl;
        cout<<v2.size()<<endl;
        fr(i,v2.size()){
            cout<<v2[i]<<" ";
        }cout<<endl;
        
    }

    return 0;
}