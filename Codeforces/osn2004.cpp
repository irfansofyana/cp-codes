#include <bits/stdc++.h>
using namespace std;

int n,i;
vector<int> vi;
int jawaban[1000000];
int main(){
	cin.tie(0);
	cin>>n;
	for (i=1;i<=n;i++){
		int temp;
		cin>>temp;
		vi.push_back(temp);
	} for (i=1;i<=n;i++) cout<<vi[i]<<endl;
	for (i=1;i<=n;i++){
		jawaban[vi[i]]=i;
	}
	for (i=1;i<=n;i++) cout<<jawaban[i]<<endl;
}
