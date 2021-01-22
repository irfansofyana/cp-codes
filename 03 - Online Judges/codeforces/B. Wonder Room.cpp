#include <bits/stdc++.h>
using namespace std;
long long n,a,b,c,j,i,l;
bool cek;
int main(){
	cin.tie(0); ios_base::sync_with_stdio(0);
	cin>>n>>a>>b;
	if (a*b>=6*n){
		printf("%I64d\n",a*b);
		printf("%I64d %I64d\n",a,b);
	}
	else {
		cek=false;
		j=6*n;
		while (!cek){
			for (i=1;i<=static_cast<long long>(sqrt(j));i++){
				if (j%i==0){
					l=j/i;
					if ((i-a>=0 && l-b>=0) || (i-b>=0 && l-a>=0)) {
						cek=true;
						break;
					}
				}
			}
			if (!cek) j++;
		}
		printf("%I64d\n",j);
		if (a>b) printf("%I64d %I64d\n",max(i,l),min(i,l));
		else printf("%I64d %I64d\n",i,l);
	}
}
