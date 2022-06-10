#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vi;
typedef vector<long long> vll;
typedef vector<vector<ll>> vvi;
typedef vector<bool> vb;
#define sqr(x) ((LL)(x) * (x))
#define endl "\n"
#define pb push_back
#define pp pop_back
#define fi first
#define se second
#define mp make_pair
#define all(a) (a).begin(), (a).end()
#define alla(arr, sz) arr, arr + sz
const ll M = 1e9 + 7;

// ll binMultiply(ll a, ll b, ll m)
// {
//     int ans = 0;
//     while (b)
//     {
//         if (b & 1)
//         {
//             ans = (ans + a) % m;
//         }
//         a = (a + a) % m;
//         b >>= 1;
//     }
//     return ans;
// }

ll binExp(ll a, ll b, ll m)
{
    a %= m;
    ll ans = 1;
    while (b)
    {
        if (b & 1)
            // ans = binMultiply(ans, a, m);
            ans = (ans * a) % m;
        // a = binMultiply(a, a, m);
        a = (a * a) % m;
        b = b >> 1;
    }
    return ans;
}

void solve()
{
    // Code here
    ll x, m, n;
    cin >> x >> m >> n;
    m = m % (n - 1);
    ll num = binExp(x, m + 1, n) - 1;
    ll den = binExp(x - 1, n - 2, n);
    cout << ((num * den) % n) << endl;

    return;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}