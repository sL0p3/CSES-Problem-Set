// #include <bits/stdc++.h>
// using namespace std;

// #define endl "\n"
// typedef long long ll;
// typedef vector<int> vi;
// typedef vector<long long> vll;
// typedef vector<vector<int>> vvi;
// typedef set<int> si;
// typedef set<ll> sll;
// typedef map<int, int> mii;
// typedef map<ll, ll> mll;
// typedef map<char, int> mci;
// #define FOR(a, b, c) for (int(a) = (b); (a) < (c); ++(a))
// #define FORN(a, b, c) for (int(a) = (b); (a) <= (c); ++(a))
// #define FORD(a, b, c) for (int(a) = (b); (a) >= (c); --(a))
// #define forEach(a, b) for (auto &(a) : (b))
// #define fr(i, n) FOR(i, 0, n)
// #define frn(i, n) FORN(i, 1, n)
// #define sqr(x) ((LL)(x) * (x))
// #define pb push_back
// #define pp pop_back
// #define f first
// #define s second
// #define mp make_pair
// #define all(a) (a).begin(), (a).end()
// #define alla(arr, sz) arr, arr + sz
// const int M = 1e9 + 7;

// const ll N = 1e12 + 1;
// vector<bool> isPrime(1e6, 1);
// vector<int> lp, hp;
// int binExpItr(int a, int b)
// {
//     // Time Complexity --> O(log n)
//     int ans = 1;
//     while (b)
//     {
//         if (b & 1)
//         {
//             ans = (ans * 1LL * a) % M;
//         }
//         a = (a * 1LL * a) % M;
//         b >>= 1;
//     }
//     return ans;
// }
// int main()
// {
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);

//     // Code here

//     isPrime[0] = isPrime[1] = false;
//     for (ll i = 2; i < N; ++i)
//     {
//         if (isPrime[i])
//         {
//             lp[i] = hp[i] = 0;
//             for (ll j = 2 * i; j < N; j += i)
//             {
//                 isPrime[i] = false;
//                 hp[j] = i;
//                 if (lp[i] == 0)
//                 {
//                     lp[i] = i;
//                 }
//             }
//         }
//     }
//     int n;
//     cin >> n;

//     ll sum;
//     while (n > 1)
//     {
//         int prime_factor = hp[n];
//         while (n % prime_factor == 0)
//         {
//             n /= prime_factor;
//             sum += prime_factor;
//         }
//     }
//     cout << sum << endl;

//     return 0;
// }