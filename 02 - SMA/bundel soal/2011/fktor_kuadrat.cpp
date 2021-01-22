#include <bits/stdc++.h>
#define mod  1000000009
using namespace std;

long long n,i,j,ans;
bool isprime[100005];
vector <long long> prima;
long long faktor[100005];

void generate(){
	memset(isprime,true,sizeof isprime);
	for (i=2;i<=100000;i++) {
		if (isprime[i]) {
			prima.push_back(i);
			j = i;
			while (i*j<=100000) {
				isprime[i*j] = false;
				j++;
			}
		}
	}
}

void cari_faktor(long long bil){
	long long it,temp;
	for (it=0;it<prima.size() && bil>1;it++) {
		if (bil%prima[it]==0) {
			temp = 0;
			while (bil%prima[it]==0) {
				temp++;
				bil/=prima[it];
			}
			faktor[prima[it]] += temp;
			if (bil==1) break;
		}
		else if (isprime[bil]) {
			faktor[bil]++;
			break;
		}
	}
}

int main(){
	generate();
	scanf("%lld", &n);
	for (i=2;i<=n;i++) {
		cari_faktor(i);
	}
	ans = 1;
	for (i=2;i<=n;i++) {
		ans = ((ans*(((faktor[i]/2)+1)%mod))%mod);
	}
	printf("%lld\n", ans);
	return 0;
}
