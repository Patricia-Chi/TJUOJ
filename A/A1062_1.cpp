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
ll a, b;

ll _gcd(ll c, ll d)// 递归会WA
{
    if (d == 0)
    {
        return c;
    }
    return _gcd(d, c % d);
}

void solve()
{

    cout << (a > b) ? _gcd(a, b) : _gcd(b, a) << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    T = 1;
    // cin >> T;
    while (T)
    {
        cin >> a >> b;
        if (a == 0 and b == 0)
        {
            return 0;
        }
        solve();
    }
    return 0;
}