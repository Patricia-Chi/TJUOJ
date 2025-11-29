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

vector<pair<int, int>> stu(107);

bool cmp(pair<int, int> a, pair<int, int> b)
{
    return a.first != b.first ? a.first < b.first : a.second < b.second;
}
void solve()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> stu[i].first >> stu[i].second;
    }
    sort(stu.begin(), stu.begin() + n, cmp);
    for (int i = 0; i < n; i++)
    {
        cout << stu[i].first << " " << stu[i].second << endl;
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
    while (T--)
    {
        solve();
    }
    // fclose(stdin);
    // fclose(stdout);
    return 0;
}