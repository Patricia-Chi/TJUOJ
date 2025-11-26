#include <bits/stdc++.h>
using namespace std;

vector<int> a(30, 0), b(30, 0);

/*void add(vector<int> &a, vector<int> &b)
{
    bool flag = 0;
    vector<int> temp;
    for (int i = 0; i < 30; i++)
    {
        if (flag)
        {
            if (a[i] + b[i] + 1 >= 10)
            {
                flag = 1;
                temp[i] = a[i] + b[i] - 9;
            }
            else
            {
                temp[i] = a[i] + b[i] + 1;
                flag = 0;
            }
        }
        else
        {
            if (a[i] + b[i] >= 10)
            {
                flag = 1;
                temp[i] = a[i] + b[i] - 10;
            }
            else
            {
                flag = 0;
                temp[i] = a[i] + b[i];
            }
        }
    }
    for (int i = 0; i < 30; i++)
    {
        a[i] = b[i];
        b[i] = temp[i];
    }
    return;
}*/

int main()
{
    int n, cnt;
    b[0] = 1;
    cin >> n;
    if (n == 1)
    {
        cout << 1;
        return 0;
    }
    n--;
    while (n--)
    {
        bool flag = 0;
        vector<int> temp(30, 0);
        for (int i = 0; i < 30; i++)
        {
            if (flag)
            {
                if (a[i] + b[i] + 1 >= 10)
                {
                    flag = 1;
                    temp[i] = a[i] + b[i] - 9;
                }
                else
                {
                    temp[i] = a[i] + b[i] + 1;
                    flag = 0;
                }
            }
            else
            {
                if (a[i] + b[i] >= 10)
                {
                    flag = 1;
                    temp[i] = a[i] + b[i] - 10;
                }
                else
                {
                    flag = 0;
                    temp[i] = a[i] + b[i];
                }
            }
        }
        for (int i = 0; i < 30; i++)
        {
            a[i] = b[i];
            b[i] = temp[i];
        }
    }
    for (int i = 29; i >= 0; i--)
    {
        if (b[i])
        {
            cnt = i;
            break;
        }
    }
    for (int i = cnt; i >= 0; i--)
    {
        cout << b[i];
    }
    return 0;
}