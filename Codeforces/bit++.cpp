#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,i,nilai=0;
	string s;
	
	scanf("%d",&n);
	for (i=1;i<=n;i++){
		cin>>s;
		if ((s=="++X") || (s=="X++"))
			nilai=nilai+1;
		else
			nilai=nilai-1;
	}
	printf("%d\n",nilai);
	return 0;
}