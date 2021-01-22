#include <bits/stdc++.h>
using namespace std;
int main(){
	vector<int> vi;
	int n,temp,i;
	
	cin>>n;
	for (i=0;i<n;i++){
		cin>>temp;
		vi.push_back(temp);
	}
	for (i=0;i<n;i++) cout<<vi[i]<<endl;
}
