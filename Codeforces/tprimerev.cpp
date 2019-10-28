#include <bits/stdc++.h>
using namespace std;

bool prima(int a)
{
	int j; 
	bool p=false;
	if (a<=1)
		return false;
	else{
		j=2;
		while (j<=int(sqrt(a)) && (!p)){
			if (a%j==0)
				p==true;
			else
			j++;
		}
		if (p)
			return false;
		else
			return true;
	}
}
int main(){
	int n,i,k;
	int  x;
	
	scanf("%d",&n);
	for (i=1;i<=n;i++){
		scanf("%d",&x);
		k=int(sqrt(x));
		if (prima(k))
			{
				if ((k*k)==x)
					printf("YES\n");
				else
					printf("NO\n");
			}
		else
			printf("NO\n");
	}
	return 0;
}