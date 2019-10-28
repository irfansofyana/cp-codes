#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	long long n,s,i,punya;
	long long d,c,harga,k,lebih=0;
	long long max=0;
	
	cin>>n>>s;
	s=100*s;
	for (i=1;i<=n;i++)
		{
			cin>>d>>c;
			harga=100*d+c;
			if (s>=harga){
				k=s-harga;
				if ((k%100)>max)
					max=(k%100);			
			}
			if (harga>s)
				lebih++;
		}
	if (lebih==n)
		cout<<-1<<endl;
	else
		cout<<max<<endl;
	return 0;
}