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
    int b, m, e;
    cin >> b >> m >> e;
    rotate(a.begin() + b, a.begin() + m, a.begin() + e);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    cin >> n;
    int tmp;
    while (n--)
    {
        cin >> tmp;
        a.push_back(tmp);
    }
    T = 1;
    cin >> T;
    while (T--)
    {
        solve();
    }
    for (auto d : a)
    {
        cout << d << ' ';
    }
    return 0;
}