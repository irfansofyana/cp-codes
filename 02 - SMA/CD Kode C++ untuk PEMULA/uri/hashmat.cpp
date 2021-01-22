#include <bits/stdc++.h>
using namespace std;
int main(){
	long long a,b;
	long long selisih;
	
	cin>>a>>b;
	while (cin){
		if (b>=a)
			selisih=b-a;
		else
			selisih=a-b;
		cout<<selisih<<endl;
		cin>>a>>b;
	}
	return 0;
}