#include <bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c,d;
	int i;
	
	cin>>a>>b>>c>>d;
	while (((a!=0)&&(b!=0))&&((c!=0)&&(d!=0))){
		if ((a==c) && (b==d))
			cout<<0<<endl;
		else if ((c-a)==(b-d))
			cout<<1<<endl;
		else	
			cout<<2<<endl;
		cin>>a>>b>>c>>d;
	}
	return 0;
}