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
/*
本题还包含其他字符，如小写字母。小写字母无需转换，直接输出即可。
*/
void solve()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'A' and s[i] <= 'D')
        {
            s[i] = s[i] + 22;
        }
        else if (s[i] >= 'E' and s[i] <= 'Z')
        {
            s[i] = s[i] - 4;
        }
        cout << s[i];
    }
    cout << endl;
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
        getline(cin, s);
        solve();
    }
    // fclose(stdin);
    // fclose(stdout);
    return 0;
}