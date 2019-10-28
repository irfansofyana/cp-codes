#include <bits/stdc++.h>
using namespace std;
int t,n,i;
int x,y,z;

int main(){
	scanf("%d",&n);
	while (n--){
		scanf("%d %d %d",&x,&y,&z);
		if ((x<=20) && (y<=20) && (z<=20)) printf("Case %d: good\n",++i);
		else printf("Case %d: bad\n",++i);
	}
	return 0;
} 
