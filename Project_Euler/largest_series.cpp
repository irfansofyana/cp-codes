#include <bits/stdc++.h>
using namespace std;

char s[10010];
long long i,ans,temp;

int main() {
	scanf("%s",&s);
	temp = 1;
	for (i=0;i<13;i++) 
		temp = temp*(int(s[i])-'0');
	i = 12;
	while (i<strlen(s)) {
		if (i==12) ans = temp;
		else {
			temp = (temp*(int(s[i])-'0'))/(int(s[i-13])-'0');
			if (temp>ans) ans = temp;
		}
		i++;
	}
	printf("%lld\n",ans);
}
