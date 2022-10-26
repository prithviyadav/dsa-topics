#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define int long long

#define IOS                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0)
const int logN = 32;
const int N = 2e5 + 10;
const int mod = 1e9 + 7;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> h(n);
    for (int i = 0; i < n; i++)
    {
        cin >> h[i];
    }
    vector<int> dp(n);
    dp[0] = 0;
    for (int i = 1; i < n; i++)
    {
        int j = 1;
        int ans = INT_MAX;
        while (i - j >= 0 && j <= k)
        {
            ans = min(ans, dp[i - j] + abs(h[i] - h[i - j]));
            i++;
        }
        dp[i] = ans;
    }
    cout << dp[n - 1];
}

signed main()
{
    IOS;
    int t;
    cin >> t;
    while (t--)
        solve();
}