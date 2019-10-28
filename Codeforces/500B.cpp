#include <bits/stdc++.h>
#define fi first
#define se second
using namespace std;

typedef vector<int> vi;

int n,i,j,idx,x,indeks;
vector<int> arr[305];
vector<int> A;
char ch;
vector<int> vec[100005];

void tukar(int a,int b){
	int c = A[a];
	A[a] = A[b];
	A[b] = c;
}

inline void jelajah(int idx){
	if (idx == n) {
		vec[indeks++] = A;
	}
	else {
		for (int z = 0 ; z < arr[idx].size(); z++) {
			//swap A[idx] dengan A[arr[idx][z]]
			int tz = idx;
			int ttz = arr[idx][z];
			tukar(tz,ttz);
			jelajah(idx + 1);
			tukar(tz,ttz);
		}
	}
}

int main(){
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	for (i = 0 ; i < n ; i++) {
		cin >> x;
		A.push_back(x);
	}
	for (i = 0 ; i < n ; i++) {
		for (j = 0 ; j < n ; j++) {
			cin >> ch;
			if (ch == '1') arr[i].push_back(j);
		}
	}
	jelajah(0);
	cout << indeks << '\n';
	sort(vec,vec + indeks);
	for (i = 0 ; i < vec[0].size(); i++) {
		cout << vec[0][i] ;
		cout << (i == vec[0].size()-1 ? '\n' : ' ');
	}
	return 0;
}
