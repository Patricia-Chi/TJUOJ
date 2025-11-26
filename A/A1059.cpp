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

void solve()
{
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m));
    vector<int> b(m), c(n, 0);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
        for (int j = 0; j < n; j++)
        {
            c[j] += a[j][i] * b[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << c[i] << endl;
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