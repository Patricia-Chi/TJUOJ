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
vector<ll> a{0, 1, 1};

void pre(vector<ll> &a)
{
    for (int i = 3; i <= 60; i++)
    {
        a.push_back(a[i - 2] + a[i - 1]);
    }
}

void solve()
{
    cin >> n;
    cout << a[n] << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    T = 1;
    cin >> T;
    pre(a);
    /*for (auto b : a)
        cout << b << ' ';
    cout << endl;*/
    while (T--)
    {
        solve();
    }
    return 0;
}