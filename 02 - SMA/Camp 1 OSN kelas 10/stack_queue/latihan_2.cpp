#include <bits/stdc++.h>
using namespace std;
int main(){
	int x,n,i,j;
	queue<int> q;
	
	cin>>n;
	for (i=0;i<n;i++){
		cin>>x;
		q.push(x);
	}
	int c=q.front();
	cout<<c<<endl;
	q.pop();
	n=q.size();
	for (i=0;i<n;i++){
		int c=q.front();
		cout<<c<<" ";
		q.pop();
	}
	cout<<endl;
}
