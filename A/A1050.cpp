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

void solve()
{
    cin >> s;
    // cout << s.size() << endl;
    for (int i = 0; i < s.size() - 1; i++)
    {
        if (s[i] < s[i + 1])
        {
            swap(s[i], s[i + 1]);
            size_t pos = s.find_first_not_of('0');
            s = s.substr(pos);
            return void(cout << s);
        }
    }
    for (int i = 0; i < s.size() - 1; i++)
    {
        if (s[i] == s[i + 1])
        {
            return void(cout << s);
        }
    }
    swap(s[s.size() - 2], s[s.size() - 1]);
    size_t pos = s.find_first_not_of('0');
    s = s.substr(pos);
    return void(cout << s);
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