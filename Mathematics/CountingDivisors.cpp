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

const int N = 1e6 + 1;
vi sum(N, 0);
void solve()
{
    // Code here
    int n;
    cin >> n;
    cout << sum[n] + 1 << endl;

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
    for (int i = 2; i < N; i++)
    {
        for (int j = i; j < N; j += i)
        {
            sum[j] += 1;
        }
    }
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}