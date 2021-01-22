#include <bits/stdc++.h>
using namespace std;

struct gabungan{
	long long rumah,pendapatan;
};
bool comp(gabungan a,gabungan b){
	if(a.pendapatan > b.pendapatan)return true;
	else return false;
}
long long n,m,i,j;
long long maks;
long long x,y,temp;
gabungan data[100000];

int main(){
	ios_base::sync_with_stdio(0);
	scanf("%lld %lld",&n,&m);
	for (i=0;i<n;i++){
		scanf("%lld",&temp);
		data[i+1].rumah = i+1;
		data[i+1].pendapatan = temp;	
	}
	for (i=1;i<=m;i++){
		scanf("%lld %lld",&x,&y);
		sort(data,data+y+1,comp);
		cout<<data[x].pendapatan-data[y].pendapatan<<endl;
	}
}
