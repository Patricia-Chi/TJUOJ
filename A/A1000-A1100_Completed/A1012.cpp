#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
// #define int long long // 不开 long long 见祖宗
//  #pragma GCC optimize(3)

using namespace std;

const double PI = 3.141592653589793;
int T;
int n, m;
int ans;
string s;
map<int, string> mp;

void solve()
{
    mp[1] = "huan ying ben ke xin sheng ru xue";
    mp[2] = "huan ying hui xiao";
    mp[3] = "huan ying yan jiu sheng xin sheng ru xue";
    mp[4] = "huan ying hui xiao";
    int a;
    cin >> a;
    cout << mp[a];
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