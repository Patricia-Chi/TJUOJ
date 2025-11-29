#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
// #define int long long // 不开 long long 见祖宗
//  #pragma GCC optimize(3)

using namespace std;

const double PI = 3.141592653589793;
const int INF = 0x3f3f3f3f;
int T;
int n, m, k;
ll ans;
string s;

void solve()
{
    m = INF;
    int flag = 0;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (m > a[i])
        {
            m = a[i];
            flag = i;
        }
    }
    swap(a[0], a[flag]);
    for (auto b : a)
    {
        cout << b << ' ';
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
        cin >> n;
        if (n == 0)
        {
            return 0;
        }
        solve();
    }
    return 0;
}