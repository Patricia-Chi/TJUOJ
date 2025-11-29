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

vector<pair<int, string>> mice(107);

bool cmp(pair<int, string> a, pair<int, string> b)
{
    return a.first > b.first;
}
void solve()
{
    for (int i = 0; i < n; i++)
    {
        cin >> mice[i].first >> mice[i].second;
    }
    sort(mice.begin(), mice.begin() + n, cmp);

    for (int i = 0; i < n; i++)
    {
        cout << mice[i].second << endl;
    }
}

int main()
{
    // freopen("test.in", "r", stdin);
    // freopen("test.out", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    T = 1;
    // cin >> T;
    while (cin >> n)
    {
        solve();
    }
    // fclose(stdin);
    // fclose(stdout);
    return 0;
}