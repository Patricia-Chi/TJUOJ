#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
// #define int long long // 不开 long long 见祖宗
//  #pragma GCC optimize(3)

using namespace std;

const double PI = 3.141592653589793;
int T;
int k;
ll ans;
string s;
int n;

void solve()
{
    cin >> s;
    string t = s;
    int temp = 0;
    vector<int> a;
    int i = 1;
    for (auto b : s)
    {
        if (b != '-' and i != 10)
        {
            temp += (b - '0') * i;
            i++;
            temp %= 11;
            // cout << b << ' ' << temp << ' ' << i << endl;
        }
    }
    // cout << temp << endl;
    if (temp == 10)
    {
        t[12] = 'X';
    }
    else
    {
        t[12] = char(temp + '0');
    }
    if (t[12] == s[12])
    {
        cout << "Right";
    }
    else
    {
        cout << t;
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