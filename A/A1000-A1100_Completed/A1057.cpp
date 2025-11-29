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
vector<int> a;

bool cmp(ll a, ll b)
{
    return a > b;
}

void solve()
{
    vector<vector<int>> a(m, vector<int>(m));
    vector<ll> b(m * 2 + 2, 0);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            if (i == j)
            {
                b[m * 2] += a[i][j];
            }
            if (i + j == m - 1)
            {
                b[m * 2 + 1] += a[i][j];
            }
            b[i] += a[i][j];
            b[j + m] += a[i][j];
        }
    }
    sort(b.begin(), b.end(), cmp);
    for (auto c : b)
    {
        cout << c << ' ';
    }
    cout << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    T = 1;
    // cin >> T;
    while (cin >> m)
    {
        solve();
    }
    return 0;
}