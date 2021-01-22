#include <bits/stdc++.h>
#define mod 1073741824
using namespace std;

bool bilangan[1000005];
long long n,i,j,temp,res,a,b,c,k,ans;
long long banyak_faktor[1000005];
vector<long long> prima;

void generate(){
	memset(bilangan,true,sizeof bilangan);
	for (i=2;i<=1000000;i++) {
		if (bilangan[i]) {
			prima.push_back(i);
			j = i;
			while (i*j<=1000000) {
				bilangan[i*j] = false;
				j++;
			}
		}
	}
	banyak_faktor[1] = 1;
	for (i=2;i<=1000000;i++) {
		if (bilangan[i]) banyak_faktor[i] = 2;
		else {
			j = i; res = 1;
			for (k=0;k<prima.size() && j>1;k++) {
				if (j%prima[k]==0) {
					temp = 0;
					while (j%prima[k]==0) {
						temp++;
						j/=prima[k];
					}	
					res = res*(temp+1);
					if (j==1) {
						banyak_faktor[i] = res;
						break;
					}
				}
				else if (bilangan[j]) {
					res = (2*res)%mod;
					break;
				}
			}
			banyak_faktor[i] = res;
		}
	}
}

int main(){
	generate();
	scanf("%I64d %I64d %I64d", &a, &b , &c);
	for (i=1;i<=a;i++){
		for (j=1;j<=b;j++){
			for (k=1;k<=c;k++) {
				ans += banyak_faktor[i*j*k];
				ans %= mod;
			}
		}
	}
	cout << ans << endl;
}
