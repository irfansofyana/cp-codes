#include <bits/stdc++.h>
using namespace std;
int t;
int main(){
	cin.tie(0); ios_base::sync_with_stdio(0);
	cin>>t; int idx=1;
	while (t--){
		int n;
		cin>>n; int sum1=0,sum2=0;
		for (int i=1;i<=n;i++){
			int temp;
			cin>>temp;
			sum1+=((temp/30)+1)*10;
			sum2+=((temp/60)+1)*15;
		}
		if (sum1<sum2) cout<<"Case "<<idx<<": Mile "<<sum1<<endl;
		else if (sum2<sum1) cout<<"Case "<<idx<<": Juice "<<sum2<<endl;
		else cout<<"Case "<<idx<<": Mile Juice " <<sum1<<endl;
		idx++;
	}
	return 0;
}
