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

bool check(int a)
{
    for (int i = 2; i <= sqrt(a); i++)
    {
        if (a % i == 0)
        {
            return false;
        }
    }
    int b[20];
    int cnt = 0;
    while (a)
    {
        b[cnt++] = a % 10;
        a /= 10;
    }
    for (int i = 0; i < cnt / 2; i++)
    {
        if (b[i] != b[cnt - 1 - i])
        {
            return false;
        }
    }
    return true;
}

void solve()
{
    for (int i = n; i <= m; i++)
    {
        if (check(i))
        {
            cout << i << endl;
        }
    }
    cout << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    T = 1;
    // cin >> T;
    while (T)
    {
        cin >> n >> m;
        if (n == 0 and m == 0)
        {
            return 0;
        }
        solve();
    }
    return 0;
}