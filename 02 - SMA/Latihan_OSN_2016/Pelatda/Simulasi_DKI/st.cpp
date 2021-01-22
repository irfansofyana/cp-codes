#include<bits/stdc++.h>
#define NMAX 100010
using namespace std;
 
typedef long long  ll;
 
ll pos[NMAX];
ll energy[NMAX];
ll gold[NMAX];
ll increase[NMAX];
 
pair<ll,pair<int,int> > det[NMAX*2];
int N,M;
int st;
ll mgold;
int i;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> N;
    for(i = 0 ; i < N; ++i){
		cin >> pos[i] >> gold[i] >> energy[i];
        increase[i] = i ? energy[i]+pos[i-1]-pos[i] : energy[i] ;
        increase[i] += i ? increase[i-1] : 0;
        gold[i] += i ? gold[i-1] : 0;
        det[M++] = make_pair(increase[i],make_pair(1,i));
        det[M++] = make_pair(increase[i]-energy[i],make_pair(0,i));
    }
    st = N;
    mgold = 0;
    sort(det,det+M);
    for(i = 0; i < M; ++i){
        if(!det[i].second.first){
            st = min(st,det[i].second.second);
            continue;
        }
        if(st > det[i].second.second) continue;
        mgold = max(mgold,gold[det[i].second.second]-(st ? gold[st-1] : 0));
        //cout<<mgold<<endl;
    }
	cout << mgold << '\n';
}