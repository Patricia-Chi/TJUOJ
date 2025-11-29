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
    cin >> n;
    vector<int> a(n);
    for (int &x : a)
    {
        cin >> x;
    }
    cin >> m;
    int mid;
    for (int l = 0, r = n - 1; l <= r;)
    {
        mid = (l + r) / 2;
        if (a[mid] == m)
        {
            return void(cout << "YES" << endl);
        }
        a[mid] < m ? r = mid - 1 : l = mid + 1;
    }
    cout << "NO" << endl;
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