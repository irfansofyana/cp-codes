#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	long long n,i,k,banyak;
	long long d,jumlah=0;
	
	cin>>n>>d;
	int A[n];
	for (i=0;i<n;i++)
		{
			cin>>A[i];
			jumlah+=A[i];
		}
	jumlah=jumlah+10*(n-1);
	if (jumlah>d)
		banyak=-1;
	else if (jumlah<=d)
		{
			banyak=2*(n-1)+((d-jumlah)/5);
		}
	cout<<banyak<<endl;
	return 0;
}