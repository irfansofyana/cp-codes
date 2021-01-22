#include <bits/stdc++.h>
using namespace std;

int n;
priority_queue<int,vector<int>, greater<int> > pq;

int main(){
	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		int tmp;
		scanf("%d", &tmp);
		pq.push(tmp);
	}
	int K = 1;
	while (!pq.empty()){
		int tp = pq.top();
		pq.pop();
		if (tp < K) continue;
		else K++;
	}
	printf("%d\n", K-1);
	return 0;
}