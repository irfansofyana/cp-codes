#include <bits/stdc++.h>
#define irfan using 
#define sofyana namespace
#define ganteng std
irfan sofyana ganteng;
int k,i,n,ada,b,idx;
string s;
int x[120];
int bil[120]
string ubah(int k){
	stringstream ss;
	ss<<k;
	return ss.str();
}
bool cek(string k){
	for (int z=0;z<k.length();z++) if (k[z]=='0') return true;
	return false;
}
int main(){
	scanf("%d",&n);
	idx=0;
	for (i=0;i<n;i++){
		scanf("%d",&x[i]);
		s=ubah(x[i]);
		if (cek(s)) {
			ada++;
			bil[idx]=x[i];
			idx++;
			//printf("u\n");
		}
	}
	if (ada<=n-1) ada++;
	printf("%d\n",ada);
	i=0; bool pertama=true; b=1;
} 
