#include <bits/stdc++.h>
using namespace std;
int n,m,i,j,idx;
int bilangan[2000010];

int main(){
	cin.tie(0); ios_base::sync_with_stdio(0);
	cin>>i>>j;
	cin>>n; idx=0;
	for (int z=0;z<i;z++) {
		cin>>bilangan[idx];
		idx++;
	}
	for (int z=0;z<j;z++){
		cin>>bilangan[idx];
		idx++;
	}
	sort(bilangan,bilangan+idx);
	cout<<bilangan[n-1]<<endl;
}
