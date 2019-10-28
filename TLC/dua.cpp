#include <bits/stdc++.h>
#define irfan using
#define sofyana namespace
#define ganteng std
irfan sofyana ganteng;

int n,a,b;
int i,j;
int jum;
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);
	cin>>n>>a>>b;
	jum=0;
	for (i=1;i<=n;i++){
		if (a>=b){
			jum+=a;
			a-=1;
			b++;
		}
		else if (b>a){
			jum+=b;
			a++;
			b--;
		}
	}
	cout<<jum<<endl;
}
