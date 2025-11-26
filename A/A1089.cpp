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
string s, t;
string op;

void solve()
{
    cin >> op;
    if (op == "replace")
    {
        cin >> m >> n;
        cin >> t;
        s.replace(m, n, t);
        // cout << s << endl;
    }
    else if (op == "reverse")
    {
        cin >> m >> n;
        reverse(s.begin() + m, s.begin() + n + 1);
        // cout << s << endl;
    }
    else if (op == "print")
    {
        cin >> m >> n;
        cout << s.substr(m, n - m + 1) << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    T = 1;
    cin >> s;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}