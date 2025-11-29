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
int op[5];
int zs[5];

class students
{
public:
    bool flag;
    int score[5];
};
vector<students> stu(100007);

bool cmp(students a, students b)
{
    for (int i = 0; i < 5; i++)
    {
        if (a.score[op[i]] != b.score[op[i]])
            return a.score[op[i]] > b.score[op[i]];
    }
    return false;
}

void solve()
{
    /*for (int i = 0; i < 5; i++)
        cout << op[i];*/
    sort(stu.begin(), stu.begin() + n, cmp);
    /*for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << stu[i].score[j] << " ";
        }
        cout << endl;
    }*/
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (zs[j] != stu[i].score[j])
                break;
            if (j == 4)
            {
                cout << i + 1 << endl;
                return;
            }
        }
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
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> stu[i].score[j];
        }
    }
    for (int i = 0; i < 5; i++)
    {
        zs[i] = stu[0].score[i];
    }
    while (T--)
    {
        for (int i = 0; i < 5; i++)
        {
            cin >> op[i];
            op[i] -= 1;
        }

        solve();
    }
    // fclose(stdin);
    // fclose(stdout);
    return 0;
}