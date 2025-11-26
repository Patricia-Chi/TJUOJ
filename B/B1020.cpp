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
    int x[4], y[4];
    for (int i = 1; i <= 3; i++)
    {
        cin >> x[i] >> y[i];
    }
    if ((x[1] == x[2] and x[2] == x[3]) or (y[1] == y[2] and y[2] == y[3]))
    {
        return void(cout << "No");
    }
    int a[4];
    a[1] = pow((x[1] - x[2]), 2) + pow((y[1] - y[2]), 2);
    a[2] = pow((x[2] - x[3]), 2) + pow((y[2] - y[3]), 2);
    a[3] = pow((x[3] - x[1]), 2) + pow((y[3] - y[1]), 2);
    sort(a + 1, a + 4);
    /*for (auto b : a)
    {
        cout << b << ' ';
    }*/
    if (a[1] + a[2] == a[3])
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
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