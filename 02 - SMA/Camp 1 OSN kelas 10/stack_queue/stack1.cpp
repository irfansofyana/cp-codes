#include <bits/stdc++.h>
using namespace std;
int main(){
	queue<int> que;
	int n,temp;
	
	cin>>temp;
	que.push(temp);
	cin>>n;
	que.push(n);
	cout<<que.front()<<endl;
}
