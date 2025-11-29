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
struct Student
{
    ll id;
    string name;
    int score;
};
Student students[1005];
map<ll, pair<string, int>> mp;

void solve()
{
    ll id;
    cin >> id;
    cout << mp[id].first << ' ' << mp[id].second << endl;
}

int main()
{
    // freopen("test.in", "r", stdin);
    // freopen("test.out", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> students[i].id >> students[i].name >> students[i].score;
        mp[students[i].id] = {students[i].name, students[i].score};
    }
    T = 1;
    cin >> T;
    while (T--)
    {
        solve();
    }
    // fclose(stdin);
    // fclose(stdout);
    return 0;
}