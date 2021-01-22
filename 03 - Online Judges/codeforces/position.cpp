#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,a,b,i;
	int depan,belakang,banyak=0;
	
	cin>>n>>a>>b;
	
	for (i=1;i<=n;i++){
		depan=i-1;
		belakang=n-i;
		if ((depan>=a) && (belakang<=b))
			banyak++;
	}
	printf("%d\n",banyak);\
	return 0;
}