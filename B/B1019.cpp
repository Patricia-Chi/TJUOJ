#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
// #define int long long // 不开 long long 见祖宗
//  #pragma GCC optimize(3)

using namespace std;

const double PI = 3.141592653589793;
int T;
int n, m, k;
ll ans;
string s;

bool cmp(pair<ll, int> p1, pair<ll, int> p2)
{
    if (p1.second == p2.second)
    {
        return p1.first < p2.first;
    }
    else
    {
        return p1.second > p2.second;
    }
}

void solve()
{
    cin >> n;
    vector<pair<ll, int>> pi;
    ll a;
    int b;
    for (int i = 1; i <= n; i++)
    {
        cin >> a >> b;
        pi.push_back({a, b});
    }
    sort(pi.begin(), pi.end(), cmp);
    for (auto [u, v] : pi)
    {
        cout << u << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    T = 1;
    // cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}