#include <bits/stdc++.h>
using namespace std;

bool selesai;
long long a,b,c,d,e,f;
long long i,j;

int main(){
	cin.tie(0);
	cin>>a>>b>>c>>d>>e>>f;
	if (e*d+f*a)==(f*c+b*e) cout<<"YA"<<endl;
	else cout<<"TIDAK"<<endl;
	return 0;
}
