#include <bits/stdc++.h>
using namespace std;

int n,k,ans;
int temp;

int main(){
	scanf("%d %d",&n,&k);
	while (n--) {
		scanf("%d",&temp);
		if (temp%k==0) ans++;	
	}
	printf("%d\n",ans);
	return 0;
}
