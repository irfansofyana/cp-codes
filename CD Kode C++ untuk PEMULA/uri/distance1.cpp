#include <bits/stdc++.h>
using namespace std;

int main()
{
	int x1,x2,y1,y2;
	double jarak;
	
	cin>>x1>>y1;
	cin>>x2>>y2;
	jarak=sqrt(static_cast<int>(pow((x2-x1),2))+static_cast<int>(pow((y2-y1),2)));
	cout<<fixed<<showpoint;
	cout<<setprecision(4);
	cout<<jarak<<endl;
	return 0;
}