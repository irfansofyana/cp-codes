#include <bits/stdc++.h>
using namespace std;

int tukar(int p){
	if (p<=11)
		return p;
	else{
		return tukar(p/2)+tukar(p/3)+tukar(p/4);
	}
}
int main(){
	int n,i,j;
	
	cin>>n;
	cout<<tukar(n)<<endl;
}
