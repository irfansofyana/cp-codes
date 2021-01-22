#include <bits/stdc++.h>
using namespace std;

int n,m,ans;

int main(){
	scanf("%d %d",&n,&m);
	if (m+n<3) printf("0\n");
	else  {
		while (m>0 && n>0 && m+n>=3) {
			if (m>=n && m>=2) {
				m-=2;
				n--;
				ans++;
			}  
			else if (m<n && n>=2) {
				n-=2;
				m--;
				ans++;
			}
		}
		printf("%d\n",ans);
	}
}

