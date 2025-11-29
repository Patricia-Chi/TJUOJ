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
string s1, s2;

void solve()
{
    ans = 0;
    bool flag = 0;
    cin >> s1 >> s2;
    size_t pos = s1.find_first_not_of('0');
    s1 = s1.substr(pos);
    pos = s2.find_first_not_of('0');
    s2 = s2.substr(pos);
    reverse(s1.begin(), s1.end());
    reverse(s2.begin(), s2.end());
    int l = min(s1.size(), s2.size()), a = 0;
    for (int i = 0; i < l; i++)
    {
        a += s1[i] - '0' + s2[i] - '0';
        if (a > 9)
        {
            ans++;
            a = 1;
        }
        else
        {
            a = 0;
        }
    }
    // cout << ans << endl;
    // cout << a << endl;
    if (s1.size() > s2.size())
    {
        flag = 1;
        for (int i = l; i < s1.size(); i++)
        {
            a += s1[i] - '0';
            if (a > 9)
            {
                ans++;
                a = 1;
            }
            else
            {
                a = 0;
            }
        }
    }
    else if (s2.size() > s1.size())
    {
        flag = 1;
        for (int i = l; i < s2.size(); i++)
        {
            a += s2[i] - '0';
            if (a > 9)
            {
                ans++;
                a = 1;
            }
            else
            {
                a = 0;
            }
        }
    }
    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    T = 1;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}
// 进位写不明白，昏倒了。代码太丑。