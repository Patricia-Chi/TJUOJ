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
    int cnt1 = 0, cnt2 = 0, cnt3 = 0;
    float a;
    for (int i = 1; i <= n; i++)
    {
        cin >> a;
        if (a < 0)
        {
            cnt1++;
        }
        else if (a == 0)
        {
            cnt2++;
        }
        else
        {
            cnt3++;
        }
    }
    cout << cnt1 << ' ' << cnt2 << ' ' << cnt3 << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    T = 1;
    // cin >> T;
    while (T)
    {
        cin >> n;
        if (n == 0)
        {
            return 0;
        }
        solve();
    }
    return 0;
}