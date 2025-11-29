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
    vector<int> a(m + n);
    for (auto &c : a)
    {
        cin >> c;
    }
    sort(a.begin(), a.end());
    cout << a[0] << ' ';
    for (int i = 1; i < m + n; i++)
    {
        if (a[i] == a[i - 1])
        {
            continue;
        }
        cout << a[i] << ' ';
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