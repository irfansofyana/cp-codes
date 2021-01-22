#include <bits/stdc++.h>
using namespace std;

int n,x,i;
int l[100],r[100];
int jawaban=0;
int main(){
	int awal;
	cin>>n>>x;
	for (i=1;i<=n;i++) {
		cin>>l[i]>>r[i];
	}
	awal=1;
	i=1;
	while (i<=n){
		if (awal+x>l[i]){
			jawaban+=r[i]-awal+1;
			awal=r[i]+1;
			i++;
		}
		else if (awal+x<l[i]){
			jawaban+=0;
			awal=awal+x;
		}
		else if (awal+x==l[i]){
			jawaban+=r[i]-l[i]+1;
			awal=r[i]+1;
			i++;
		}
	}
	cout<<jawaban<<endl;
}
