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
vector<pair<string, string>> date(57);
bool cmp(pair<string, string> a, pair<string, string> b)
{
    map<string, int> mon;
    mon["Jan"] = 1;
    mon["Feb"] = 2;
    mon["Mar"] = 3;
    mon["Apr"] = 4;
    mon["May"] = 5;
    mon["Jun"] = 6;
    mon["Jul"] = 7;
    mon["Aug"] = 8;
    mon["Sept"] = 9;
    mon["Oct"] = 10;
    mon["Nov"] = 11;
    mon["Dec"] = 12;
    int montha = mon[a.first];
    int monthb = mon[b.first];
    int daya = 0, dayb = 0;
    for (char c : a.second)
    {
        if (c >= '0' && c <= '9')
        {
            daya = daya * 10 + (c - '0');
        }
    }
    for (char c : b.second)
    {
        if (c >= '0' && c <= '9')
        {
            dayb = dayb * 10 + (c - '0');
        }
    }
    if (montha != monthb)
    {
        return montha < monthb;
    }
    else
    {
        return daya < dayb;
    }
}
void solve()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> date[i].first >> date[i].second;
    }
    cin >> date[0].first >> date[0].second;
    sort(date.begin() + 1, date.begin() + n + 1, cmp);
    for (int i = 1; i <= n; i++)
    {
        if (cmp(date[0], date[i]))
        {
            cout << "Case #" << m << ": " << date[i].first << " " << date[i].second << endl;
            return;
        }
    }
    cout << "Case #" << m << ": See you next year" << endl;
}

int main()
{
    freopen("ke.in", "r", stdin);
    freopen("ke.out", "w", stdout);
    // ios::sync_with_stdio(false);
    // cin.tie(0), cout.tie(0);
    T = 1;
    cin >> T;
    for (m = 1; m <= T; m++)
    {
        solve();
    }
    fclose(stdin);
    fclose(stdout);
    return 0;
}