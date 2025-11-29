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
int weight = 0;
int op[5];
vector<pair<int, int>> w = {{0, 0}, {0, 1}, {0, 2}, {0, 3}, {0, 4}};

class students
{
public:
    string name;
    int score[5];
    double avg;
};
vector<students> stu(10007);

bool cmp(students a, students b)
{
    if (a.avg != b.avg)
        return a.avg > b.avg;
    else
    {
        for (int i = 0; i < 5; i++)
        {
            if (a.score[op[i]] != b.score[op[i]])
                return a.score[op[i]] > b.score[op[i]];
        }
    }
    return a.name < b.name;
}

bool cmp1(pair<int, int> a, pair<int, int> b)
{
    return a.first > b.first;
}

void solve()
{
    for (int i = 0; i < 5; i++)
    {
        cin >> w[i].first;
        weight += w[i].first;
    }
    sort(w.begin(), w.end(), cmp1);
    for (int i = 0; i < 5; i++)
    {
        op[i] = w[i].second;
    }
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> stu[i].name;
        double sum = 0;
        for (int j = 0; j < 5; j++)
        {
            cin >> stu[i].score[j];
            sum += stu[i].score[j] * w[j].first;
        }
        stu[i].avg = sum / double(weight);
    }
    sort(stu.begin(), stu.begin() + n, cmp);
    for (int i = 0; i < n; i++)
    {
        cout << stu[i].name << " ";
        cout << fixed << setprecision(2) << stu[i].avg << endl;
    }
}

int main()
{
    // freopen("test.in", "r", stdin);
    // freopen("test.out", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    T = 1;
    while (T--)
    {
        solve();
    }
    // fclose(stdin);
    // fclose(stdout);
    return 0;
}