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

void solve()
{
    cin >> n;
    vector<int> a(n);
    for (auto &b : a)
    {
        cin >> b;
    }
    int q;
    cin >> q;
    while (q--)
    {
        cin >> m >> k;
        reverse(a.begin() + m, a.begin() + k);
    }
    for (auto b : a)
    {
        cout << b << ' ';
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