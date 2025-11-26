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
    vector<double> sbj(m, 0), stu(n, 0);
    vector<vector<int>> c(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> c[i][j];
            sbj[j] += c[i][j];
            stu[i] += c[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        stu[i] /= double(m);
        cout << fixed << setprecision(2) << stu[i] << ' ';
    }
    cout << endl;
    for (int i = 0; i < m; i++)
    {
        sbj[i] /= double(n);
        cout << fixed << setprecision(2) << sbj[i] << ' ';
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        bool flag = 1;
        for (int j = 0; j < m; j++)
        {
            if (c[i][j] < sbj[j])
            {
                flag = 0;
            }
        }
        if (flag == 1)
        {
            ans++;
        }
    }
    cout << ans;
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