#include <iostream>
using namespace std;

class MyString
{
private:
    char *str;
    int len;
public:
    MyString(const char *s)
    {
        len = 0;
        while (s[len] != '\0')
            len++;
        str = new char[len + 1];
        for (int i = 0; i <= len; i++)
            str[i] = s[i];
    }
    int length()
    {
        return len;
    }
    int find(const char *find_str)
    {
        int flen = 0;
        while (find_str[flen] != '\0')
            flen++;
        for (int i = 0; i <= len - flen; i++)
        {
            bool match = true;
            for (int j = 0; j < flen; j++)
            {
                if (str[i + j] != find_str[j])
                {
                    match = false;
                    break;
                }
            }
            if (match)
                return i;
        }
        return -1;
    }
};

int main()
{
    char s[1005];
    cin >> s;
    MyString ms(s);
    int n;
    cin >> n;
    while (n--)
    {
        int op;
        cin >> op;
        if (op == 1)
            cout << ms.length() << endl;
        else
        {
            char fs[1005];
            cin >> fs;
            cout << ms.find(fs) << endl;
        }
    }
    return 0;
}