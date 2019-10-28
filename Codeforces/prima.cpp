#include <bits/stdc++.h>
using namespace std;
int main(){
	for (int i=2;i<=1000;i++){
		bool cek=true;
		for (int j=2;j<=int(sqrt(i));j++){
		if (i%j==0) {
			cek=false; break;
			} 
		}
		if (cek) {
			if (i==997) cout<<i<<endl;
			else cout<<i<<",";
		}
	}
	return 0;
}
