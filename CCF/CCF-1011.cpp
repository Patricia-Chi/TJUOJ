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
int dp[9][2] = {{0, 0}, {-2, 1}, {-1, 2}, {1, 2}, {2, 1}, {2, -1}, {1, -2}, {-1, -2}, {-2, -1}};
ll f[30][30];
int bx, by, mx, my;
bool flag[30][30];

void solve()
{
    cin >> bx >> by >> mx >> my;
    bx++;
    by++;
    mx++;
    my++;
    f[1][1] = 1;
    for (int i = 0; i < 9; i++)
    {
        flag[mx + dp[i][0]][my + dp[i][1]] = true;
    }
    for (int i = 1; i <= bx; i++)
    {
        for (int j = 1; j <= by; j++)
        {
            if (!flag[i][j] && (i != 1 or j != 1))
                f[i][j] = f[i - 1][j] + f[i][j - 1];
        }
    }
    cout << f[bx][by];
}

int main()
{
    // freopen("test.in", "r", stdin);
    // freopen("test.out", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    T = 1;
    // cin >> T;
    while (T--)
    {
        solve();
    }
    // fclose(stdin);
    // fclose(stdout);
    return 0;
}
