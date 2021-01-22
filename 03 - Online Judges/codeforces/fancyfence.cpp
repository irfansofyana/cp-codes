#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	int a,i;
	int x;
	
	cin>>n;
	for (i=0;i<n;i++)
		{
			cin>>x;
			if (360%(180-x)==0)
				printf("YES\n");
			else
				printf("NO\n");
		}
	return 0;
}