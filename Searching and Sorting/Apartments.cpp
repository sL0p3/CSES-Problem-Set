#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<vector<int>> vvi;
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
    int n, m, k;
    vi app, apr;
    for (int i = 0; i < n; i++)
    {
        cin >> app[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> apr[i];
    }
    sort(all(app));
    sort(all(apr));

    int i = 0, j = 0, ans = 0;

    while (i < n)
    {
        while (j < m && apr[i] < app[i] - k)
        {
            j++;
            if (abs(apr[i] - app[i]) <= k)
            {
                ans++;
                i++;
                j++;
            }
            else
            {
                i++;
            }
        }
    }

    cout << ans << endl;

    return 0;
}