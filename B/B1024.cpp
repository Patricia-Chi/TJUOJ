#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
// #define int long long // 不开 long long 见祖宗
//  #pragma GCC optimize(3)

using namespace std;

const double PI = 3.141592653589793;
int T;
int n, m, k;
ll ans = 1;
string s;

void solve()
{
    cin >> s;
    vector<int> a, b, c;
    int aa = 0, cc = 0;
    ll bb = 0;
    int pos = 1;
    for (; s[pos] != '!'; pos++)
    {
        a.push_back(s[pos] - '0');
    }
    pos += 2;
    for (; s[pos] != ')'; pos++)
    {
        b.push_back(s[pos] - '0');
    }
    pos += 2;
    for (; pos < s.size(); pos++)
    {
        c.push_back(s[pos] - '0');
    }
    int cnt = 1;
    for (int i = a.size() - 1; i >= 0; i--)
    {
        aa += a[i] * cnt;
        cnt *= 10;
    }
    cnt = 1;
    for (int i = b.size() - 1; i >= 0; i--)
    {
        bb += b[i] * cnt;
        cnt *= 10;
    }
    cnt = 1;
    for (int i = c.size() - 1; i >= 0; i--)
    {
        cc += c[i] * cnt;
        cnt *= 10;
    }
    // cout << aa << ' ' << bb << ' ' << cc << ' ' << endl;
    for (int i = 1; i <= aa; i++)
    {
        ans *= i;
    }
    cout << "ans: " << ans << endl;
    ans += bb;
    ans %= cc;
    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    T = 1;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}