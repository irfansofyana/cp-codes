#include <bits/stdc++.h>

using namespace std;

int arr[]={1,3,4,5,6,7,10,20};
//vector<int> A;

int main(){
	vector<int> A(arr,arr+8);
	cout << upper_bound(A.begin(),A.end(),2)-A.begin() << '\n';	
}