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
    int tmp = x, cnt = 0;
    while (x)
    {
        cnt += pow(x % 10, 3);
        x /= 10;
    }
    return tmp == cnt;
}

void solve()
{
    bool flag=0;
    for (int i = m; i <= n; i++)
    {
        if (check(i))
        {
            cout << i << ' ';
            flag=1;
        }
    }
    flag || cout << "no";
    cout << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    T = 1;
    // cin >> T;
    while (cin >> m >> n)
    {
        solve();
    }
    return 0;
}