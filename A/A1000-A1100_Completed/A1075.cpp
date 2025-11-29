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

bool check(int x)
{
    int sum = 0;
    for (int i = 1; i <= x / 2; i++)
    {
        if (x % i == 0)
        {
            sum += i;
        }
    }
    return sum == x;
}

void solve()
{
    cin >> m >> n;
    ans = 0;
    for (int i = m; i <= n; i++)
    {
        ans += check(i);
    }
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