#include <bits/stdc++.h>
using namespace std;
int n,i,jum;
bool cek;
int main(){
	cin.tie(0);
	cek=true; i=1;
	while (cek){
		jum+=i*i;
		if (jum%1000==0){
			cout<<i<<endl;
			cek=false;
		}
		else i++;
	}
}
