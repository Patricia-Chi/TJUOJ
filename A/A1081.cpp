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
    getline(cin, s);
    vector<int> a(5, 0);
    for (auto &ch : s)
    {
        if (ch == 'a')
        {
            a[0]++;
        }
        else if (ch == 'e')
        {
            a[1]++;
        }
        else if (ch == 'i')
        {
            a[2]++;
        }
        else if (ch == 'o')
        {
            a[3]++;
        }
        else if (ch == 'u')
        {
            a[4]++;
        }
    }
    cout << "a:" << a[0] << endl;
    cout << "e:" << a[1] << endl;
    cout << "i:" << a[2] << endl;
    cout << "o:" << a[3] << endl;
    cout << "u:" << a[4] << endl;
    cout << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    T = 1;
    cin >> T;
    cin.ignore();
    while (T--)
    {
        solve();
    }
    return 0;
}