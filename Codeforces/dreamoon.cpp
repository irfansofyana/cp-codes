#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,m,i;
	int langkahx,langkahy;
	bool p=false;
	
	cin>>n>>m;
	i=1;
	while ((i<n) && (!p)){
		if ((n-i)%m==0)
			{
				langkahx=i;
				langkahy=n-2*langkahx;
				if (((langkahx>0) && (langkahy>0))&& (langkahx>langkahy))
					p=true;
				else
				i++;
			}
		i++;
	}
	if (p)
		printf("%d\n",langkahx+langkahy);
	else
		printf("-1\n");
}