#include <bits/stdc++.h>
using namespace std;

int sum,i;

int main(){
	for (i=1;i<=999;i++) {
		if (i%3==0 || i%5==0) sum+=i;
	}
	printf("%d\n",sum);
	return 0;
}
