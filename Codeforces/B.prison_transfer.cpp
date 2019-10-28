#include <bits/stdc++.h>
using namespace std;

long long n,i,j,t,frek,c;
long long A[200005];
vector<pair<long long,long long> > vi;
long long ans,x,k,idx;
long long acuan,kali,banyak;
long long dp[200005];

int main(){
	scanf("%lld %lld %lld",&n,&t,&c);
	for (i=0;i<n;i++) {
		scanf("%lld",&x);
		A[i] = x;	
	}
	sort(A,A+n);
	i = 0;
	while (i<n && A[i]<=t) {
		acuan = A[i];
		frek = 1;
		j = i+1;
		while (j<n && A[j]==acuan && A[j]<=t) {
			j++;
			frek++;
		}
		vi.push_back(make_pair(acuan,frek));
		i = j;
	}
	if (i!=0) {
	acuan = vi[0].first;
	dp[0] = vi[0].second;
	i = banyak = 1;
	idx = 1; 
	//for (i=0;i<vi.size();i++)
		//cout << vi[i].first<<" "<<vi[i].second<<endl;
	i = 1;
	while (i<vi.size()){
		if (vi[i].first-acuan==1) {
			dp[idx] = dp[idx-1]*vi[i].second;
			idx++;
			banyak++;
		} 
		else {
			if (banyak>=c) {
				k = c-1;
				while (k<idx) {
					if (k==c-1) ans+=dp[k];
					else ans+=(dp[k]/dp[k-c]);
					k++;
				}
			}
			dp[0] = vi[i].second;
			banyak = idx = 1;
		}
		acuan = vi[i].first;
		i++;
	}
	if (banyak>=c) {
		k = c-1;
		while (k<idx) {
			if (k==c-1) ans+=dp[k];
			else ans+=(dp[k]/dp[k-c]);
			k++;
		}
	}
	}
	cout << ans << endl;
	return 0;
}
