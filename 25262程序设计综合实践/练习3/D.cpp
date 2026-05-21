#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define endl '\n'
// #define int long long // 不开 long long 见祖宗
//  #pragma GCC optimize(3)

using namespace std;

using vi = vector<int>;
using vii = vector<vector<int>>;
using pii = pair<int, int>;

const double PI = 3.141592653589793;
const int mod = 998244353;
constexpr int N = -1;
int T;
int n, m, k;
ll ans;
string s;

void print_queue(queue<int> q)
{
    if (q.empty())
    {
        cout << endl;
        return;
    }
    while (!q.empty())
    {
        cout << q.front();
        q.pop();
        if (!q.empty())
        {
            cout << ' ';
        }
    }
    cout << endl;
}

void print_stack(stack<int> st)
{
    vi a;
    while (!st.empty())
    {
        a.push_back(st.top());
        st.pop();
    }
    if (a.empty())
    {
        cout << endl;
        return;
    }
    reverse(a.begin(), a.end());
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i];
        if (i + 1 < a.size())
        {
            cout << ' ';
        }
    }
    cout << endl;
}

void solve()
{
    cin >> n;
    queue<int> q;
    stack<int> st;
    bool ok1 = true, ok2 = true;
    for (int i = 1; i <= n; i++)
    {
        cin >> s;
        if (s == "push")
        {
            int x;
            cin >> x;
            if (ok1)
            {
                q.push(x);
            }
            if (ok2)
            {
                st.push(x);
            }
        }
        else
        {
            if (ok1)
            {
                if (q.empty())
                {
                    ok1 = false;
                }
                else
                {
                    q.pop();
                }
            }
            if (ok2)
            {
                if (st.empty())
                {
                    ok2 = false;
                }
                else
                {
                    st.pop();
                }
            }
        }
    }
    if (ok1)
    {
        print_queue(q);
    }
    else
    {
        cout << "error" << endl;
    }
    if (ok2)
    {
        print_stack(st);
    }
    else
    {
        cout << "error" << endl;
    }
}

int main()
{
    // freopen("test.in", "r", stdin);
    // freopen("test.out", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    cin >> T;
    while (T--)
    {
        solve();
    }
    // fclose(stdin);
    // fclose(stdout);
    return 0;
}
