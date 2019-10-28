#include <bits/stdc++.h>
using namespace std;

long long bil,a,b,c,i;
long long jum;
vector<long long> vi;
long long sqr(long long x){
	return x*x;
}
long long pangkat(long long a,long long b){
	if (b==0) return 1;
	else if (b==1) return a;
	else if (b%2==0) return sqr(pangkat(a,b/2));
	else if (b%2==1) return a*sqr(pangkat(a,(b-1)/2));
}
string ubah(long long k){
	stringstream ss;
	ss<<k;
	return ss.str();
}
int main(){
	cin >> a >> b >> c;
	for (i=1;i<=81;i++){
		bil=b*pangkat(i,a)+c;
		if (bil>0 && bil<1000000000){
		jum=0;
		string temp=ubah(bil);
		for (int j=0;j<temp.size();j++){
			jum+=(int)temp[j]-'0';
		}
		if (jum==i) vi.push_back(bil);
		}
	}
	cout<<vi.size()<<endl;
	for (i=0;i<vi.size();i++){
		if (i==0) cout<<vi[i];
		else cout<<" "<<vi[i];
	}
	if (vi.size()!=0) cout<<endl;
	return 0;
}
