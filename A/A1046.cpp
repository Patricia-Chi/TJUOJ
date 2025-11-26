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

map<int, int> mp;

void solve()
{
    cin >> n;
    int a;
    while (n--)
    {
        cin >> a;
        mp[a]++;
    }
    vector<int> id;
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        if (it->second > 1)
        {
            ans++;
            id.push_back(it->first);
        }
    }
    sort(id.begin(), id.end());
    cout << ans << endl;
    for (auto tmp : id)
    {
        cout << tmp << endl;
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