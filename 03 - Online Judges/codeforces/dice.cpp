#include <bits/stdc++.h>
using namespace std;
int main(){
	int a,b,x;
	int ma=0,s=0,mb=0;
	
	cin>>a>>b;
	for (x=1;x<=6;x++)
		{
			if (abs(a-x)<abs(b-x))
				ma++;
			else if (abs(a-x)==abs(b-x))
				s++;
			else if (abs(a-x)>abs(b-x))
				mb++;
		}
	printf("%d %d %d\n",ma,s,mb);
	return 0;
}