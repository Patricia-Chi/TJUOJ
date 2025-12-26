#include<bits/stdc++.h>
using namespace std;

int countdays(int y, int m, int d)
{
	if (m < 3)	y--, m += 12;
	return 365 * y + (y >> 2) - y / 100 + y / 400 + (153 * m - 457) / 5 + d - 306;
}

int main()
{
	int y1,y2,m1,m2,d1,d2;
	cin>>y1>>m1>>d1;
	cin>>y2>>m2>>d2;
	cout<<countdays(y2,m2,d2)-countdays(y1,m1,d1);
	return 0;
}
