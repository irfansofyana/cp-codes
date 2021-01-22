#include <bits/stdc++.h>
using namespace std;

int n;
int A[]={2,7,2,3,3,4,2,5,1,2};

int main(){
	cin.tie(0);
	cin >> n;
	cout << A[(n/10)]*A[(n%10)] << endl;
	return 0;
}