#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;
	int n,i,j,k;
	char p[100];
	
	cin>>s;
	j=0;
	for (i=0;i<=s.length()-1;i++)
		{
			if (i%2==0){
				p[j]=s[i];
				j++;
			}
		}
	sort(p,p+j);
	k=0;
	for (i=0;i<=s.length()-1;i++)
		{
			if (i%2==0){
				cout<<p[k];
				k++;
			}
			else
				cout<<"+";
		}
	cout<<endl;
	return 0;
}