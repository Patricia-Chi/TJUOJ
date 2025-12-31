#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define endl '\n'
// #define int long long // 不开 long long 见祖宗
//  #pragma GCC optimize(3)

using namespace std;

const double PI = 3.141592653589793;
int T;
int n, m, k;
ll ans;
string s;

void solve(vector<vector<int>> &a)
{
    int op, i, x, t;
    cin >> op;
    if (op == 0)
    {
        cin >> i >> x;
        a[i].push_back(x);
    }
    else if (op == 1)
    {
        cin >> t;
        for (auto c : a[t])
        {
            cout << c << " ";
        }
        cout << endl;
    }
    else
    {
        cin >> t;
        a[t].clear();
    }
}

int main()
{
    // freopen("test.in", "r", stdin);
    // freopen("test.out", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    T = 1;
    cin >> n >> T;
    vector<vector<int>> a(n);
    while (T--)
    {
        solve(a);
    }
    // fclose(stdin);
    // fclose(stdout);
    return 0;
}