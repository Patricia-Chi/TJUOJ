// PREPEND BEGIN
#include <iostream>
using namespace std;
// PREPEND END

// TEMPLATE BEGIN
void Print(const char *p1, const char *p2)
{
    // 在此处补充你的代码
    while (p1 != p2)
    {
        cout << *p1;
        p1++;
    }
}
// TEMPLATE END

// APPEND BEGIN
int main()
{
    const char *s = "Tianjin University123";
    Print(s, s + 7);
    cout << endl;
    Print(s, s + 18);
    cout << endl;
    return 0;
}
// APPEND END