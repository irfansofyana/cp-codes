#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int n,m,i,j;
vector<int> A;
int arr[250010];
map<int,int> freq;

int fpb(int a,int b){
	return (b==0 ? a:fpb(b,a%b));
}

bool comp(int a,int b){
	return a>b;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	for (i = 0 ; i < n*n; i++)
		cin >> arr[i];
	sort(arr,arr+n*n,comp);
	i = 0;
	while (i < n*n && (int)A.size()<n) {
		int frek = 1;
		j = i+1;
		while (j < n*n && arr[j]==arr[i]) {
			frek++;
			j++;
		}
		int tot = 2*freq[arr[i]];;
		int ada = 0;
		for (int z = 0 ; z < A.size(); z++){
			if (fpb(A[z],arr[i])==arr[i]) ada++;
		}
		ada *= 2;
		tot -= frek;
		int temp = (ll)sqrt(ada*ada-4*tot);
		int tmp = (ll)sqrt(ada*ada-4*tot);
		temp -= ada; temp/=2;
		tmp = -1*ada-tmp; tmp /= 2;
		if (temp >=0 ) {}
		else temp = tmp;
		for (int z = 0 ; z < A.size(); z++)
			freq[fpb(A[z],arr[i])] += temp; 
		for (int z = 0 ; z < temp ; z++)
			A.push_back(arr[i]);
		freq[arr[i]] = frek;
		i = j;
	}
	for (i = 0 ; i < A.size(); i++)
		cout << A[i] << " "; cout << '\n';
	return 0;
}