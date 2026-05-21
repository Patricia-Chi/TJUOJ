// tjuoj讨论区的答案，不是我写的
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool isS(int n) // 判断int n是否素数
{
    if (n <= 1) return false;
    if (n == 2) return true;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0) return false;
    return true;
}

void printV(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++) cout << arr[i] << " ";
    cout << endl;
}

vector<vector<int>> res; // 答案存储数组的数组

void dfs(vector<int>& arr,  int depth)
{
    if (depth == arr.size())
    {
        if (isS(arr[0] + arr[depth-1]))
            res.push_back(arr);
        return;
    }

    if (depth == 0) // 确保第一个数字为1
    {
        arr[0] = 1;
        dfs(arr, 1);
        return;
    }

    int cp = arr[depth - 1];
    for (int i = depth; i < arr.size(); i++)
    {
        int x = arr[i];
        if (isS(x + cp))
        {
            swap(arr[i], arr[depth]);
            dfs(arr, depth + 1);
            swap(arr[i], arr[depth]);
        }
    }
}

int main()
{
    int n;
    int cnt = 1;
    while (cin >> n)
    {
        res.clear();
        vector<int> arr(n);
        for (int i = 0; i < n; i++) arr[i] = i + 1;

        cout << "Case " << cnt++ << ":" << endl;
        dfs(arr, 0);
        sort(res.begin(), res.end());
		if(n==1) ;
        else
        for (int i = 0; i < res.size(); i++)
            printV(res[i]);
        cout << endl;
    }
    return 0;
}


