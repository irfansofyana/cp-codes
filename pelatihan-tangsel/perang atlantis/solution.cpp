#include<bits/stdc++.h>
#define mp make_pair
using namespace std;

int n, m, c, v[100002], w[100002], team[100005];
vector <int> edge[100002];
priority_queue <pair<int,int> > pq[100002];
void area(){
	memset(team, -1, sizeof team);
	
	int idx = 0;
	for(int start=1; start<=n; start++){
		if(team[start]==-1){
			team[start] = idx;
			int par = v[start];
			pq[idx].push(mp(w[start],start));
			
			queue <int> q;
			q.push(start);
			while(!q.empty()){
				int awal = q.front();
				q.pop();
				for(int i=0; i<edge[awal].size(); i++){
					int city = edge[awal][i];
					if(v[city]==par && team[city]==-1){
						team[city] = idx;
						q.push(city);
						pq[idx].push(mp(w[city],city));
					}
				}
			}
			idx++;
		}
	}
	/*for(int i=1; i<=n; i++) cout<<team[i]<<" ";
	cout<<endl;*/
}
int main(){
	// string sub; cin >> sub;
    ios_base::sync_with_stdio(0); cin.tie(0);
	cin>>n>>m>>c;
	for(int i=1; i<=n; i++) cin>>v[i];
	for(int i=1; i<=n; i++) cin>>w[i];
	for(int i=0; i<m; i++){
		int a, b; cin>>a>>b;
		edge[a].push_back(b);
		edge[b].push_back(a);
	}
	area();
	
	int q; cin>>q;
	while(q--){
		int a; cin>>a;
		if(a==1){
			cin>>a;
			bool found = false;
			while(!found){
				int tmp = pq[team[a]].top().first;
				int idx = pq[team[a]].top().second;
				if(w[idx]==tmp){
					found = 1;
					cout<<tmp<<endl;	
				} else pq[team[a]].pop();
			}
		} else {
			int x, y; cin>>x>>y;
			w[x] = y;
			pq[team[x]].push(mp(y,x));
		}
	}
}