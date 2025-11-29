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
    int sum = 0;
    for (auto a : s)
    {
        sum += a - '0';
    }
    cout << sum << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    T = 1;
    // cin >> T;
    while (T)
    {
        cin >> s;
        if (s == "0")
        {
            return 0;
        }
        solve();
    }
    return 0;
}