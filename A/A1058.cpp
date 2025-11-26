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
    int a[5][5][11] = {0};
    cin >> k;
    int f, r, v;
    while (k--)
    {
        cin >> m >> f >> r >> v;
        if (m < 1 or m > 4 or f < 1 or f > 3 or r < 1 or r > 10)
        {
            continue;
        }
        a[m][f][r] += v;
    }
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            for (int l = 1; l <= 10; l++)
            {
                cout << ' ' << a[i][j][l]; // 坑死了，cph检查不出来，之前把空格放在后面来着
            }
            cout << endl;
        }
        if (i != 4)
        {
            cout << "####################" << endl;
        }
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