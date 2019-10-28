#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n,p,x,a,i,j;
	long long sebelum[351],dicari[10];
	bool jawaban=true;
	
	for (i=0;i<=350;i++)
		sebelum[i]=0;
	for (i=0;i<=9;i++)
		dicari[i]=0;
	cin>>p>>n;
	i=1;
	j=1;
	while ((i<=n))
		{
			cin>>x;
			a=x%p;
			sebelum[a]++;
			if (sebelum[a]>=2)
				{
					dicari[j]=i;
					j++;
					i++;
				}
			else{
				sebelum[a]++;
				i++;
			}
		}
	if (dicari[1]==0)
		cout<<-1<<endl;
	else
		cout<<dicari[1];
	return 0;
}