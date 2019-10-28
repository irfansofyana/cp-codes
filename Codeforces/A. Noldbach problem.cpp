#include <bits/stdc++.h>
using namespace std;

vector<int> vi;
int bilangan[1010];
int n,i,j,k,ans;
bool prima[2020];

void sieve(){
	for (i=2;i<=1000;i++){
		if (!prima[i]){
			j=i;
			while (j*i<=1000){
				prima[j*i]=true;
				j++;
			}
		}
	}
	for (i=2;i<=1000;i++){
		if (!prima[i]){
			vi.push_back(i);
		}
	}
}
void buatbaru(){
	for (i=0;i<vi.size()-1;i++){
		bilangan[vi[i]+vi[i+1]+1]=1;
	}
}
int main(){
	memset(prima,false,sizeof(prima));
	sieve();
	buatbaru();
	scanf("%d %d",&n,&k);
	for (i=2;i<=n;i++){
		if (!prima[i] && bilangan[i]==1){
			ans++;
		}
	}
	if (ans<k) printf("NO\n");
	else printf("YES\n");
	return 0;
}
