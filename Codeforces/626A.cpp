// Irfan Sofyana Putra's Template //
//**********Cokguzel48***********//
#include <bits/stdc++.h>
#include <cstdio>
#include <cmath>
#include <iostream>
#include <string>
#include <fstream>
#include <cstring>
#include <iomanip>
#include <algorithm>
#include <queue>
#include <stack>
#include <deque>
#include <vector>
#include <map>

#define irfan using
#define sofyana namespace
#define putra std
#define OPTIMASI ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MOD 1000000007
#define ALL(v) v.begin(),v.end()
#define UNIQUE(v) v.resize(unique(ALL(v))-v.begin())
#define pb push_back
#define mp make_pair
#define INF 2000000000 
#define EPS 1e-15

irfan sofyana putra;

typedef pair<int,int> pi;
typedef vector<int> vi;
typedef long long ll;

bool DECREASING(int a,int b){
	return a>b;
}

string int_to_string(int k){
	stringstream ss;
	ss << k;
	return ss.str();
}

int string_to_int(string s){
	stringstream ss(s);
	int res ;
	return ss >> res ? res : 0;
}

bool cek_prima(int k){
	if (k==1) return false;
	for (int z = 2 ; z <= (int)(sqrt(k)); z++){
		if (k%z==0) return false;
	}
	return true;
}

int n,i,j;
string s,temp;

bool cekk(string s){
	pi x;
	x = mp(0,0);
	for (int z = 0 ; z < s.size(); z++){
		int t1,t2;
		t1 = x.first; t2 = x.second;
		if (s[z]=='U') {
			x = make_pair(t1-1,t2);
		}
		else if (s[z]=='L' ) {
			x = make_pair(t1,t2-1);
		}
		else if (s[z]=='R') {
			x = make_pair(t1,t2+1);
		}
		else if (s[z]=='D') {
			x = make_pair(t1+1,t2);
		}
	}
	if (x.first==0 && x.second==0) return true;
	return false;
}

int main(){
	OPTIMASI
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	cin >> n >> s;
	int ans = 0;
	for (i = 0 ; i < (int)s.size()-1; i++) {
		for (j = i+1 ; j < (int)s.size(); j++){
			temp = s.substr(i,j-i+1);
			if (cekk(temp)) ans++;
		}
	}
	cout << ans << '\n';
	return 0;
}