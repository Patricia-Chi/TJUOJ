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
int p1, p2;

void solve()
{
    cin >> s1 >> s2;
    int siz = min(s1.size(), s2.size());
    for (int i = 0; i < siz; i++)
    {
        if (s1[i] < s2[i])
        {
            p2 += 3;
            return;
        }
        else if (s1[i] > s2[i])
        {
            p1 += 3;
            return;
        }
    }
    if (s1.size() == s2.size())
    {
        p1++;
        p2++;
        return;
    }
    s1.size() < s2.size() ? p1++ : p2++;
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
    cout << p1 << ' ' << p2 << endl;
    return 0;
}