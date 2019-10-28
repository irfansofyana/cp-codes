#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,i,x;	
	int bisep=0,back=0,chest=0,maks;
	
	cin>>n;
	for (i=1;i<=n;i++)
		{
			cin>>x;
			if (i%3==0)
				back+=x;
			else if (i%3==1)
				chest+=x;
			else if (i%3==2)
				bisep+=x;
		}
	if (back>chest)
		maks=back;
	else if (chest>back)
		maks=chest;
	
	if (maks>bisep)
		{
			if (maks==back)
				printf("back\n");
			else if (maks==chest)
				printf("chest\n");
		}
	else if (bisep>maks)
		printf("biceps\n");
	return 0;
}