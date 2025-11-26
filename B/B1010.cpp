#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
// #define int long long // 不开 long long 见祖宗
//  #pragma GCC optimize(3)

using namespace std;

const double PI = 3.141592653589793;
int T;
int k;
ll ans;
string s;
int n;

void solve()
{
    for (int i = 1; i <= 9; i++)
    {
        for (int j = 0; j <= 9; j++)
        {
            for (int k = 0; k <= 9; k++)
            {
                for (int l = 0; l <= 9; l++)
                {
                    if (pow(i, 4) + pow(j, 4) + pow(k, 4) + pow(l, 4) == i * 1000 + j * 100 + k * 10 + l)
                    {
                        cout << i << j << k << l << endl;
                    }
                }
            }
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