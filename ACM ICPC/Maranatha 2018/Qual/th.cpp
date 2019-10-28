#include <bits/stdc++.h>
using namespace std;

//Define Lists
#define fi first
#define se second
#define pb push_back
#define sz(x) (int)x.size() 
#define all(x) (x).begin(), (x).end()
#define OPTIMATION ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define inp() freopen("in.txt", "r", stdin);
#define out() freopen("out.txt", "w", stdout);
#define IO inp() out()

//typedef Lists
typedef long long LL;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<pair<int,int> > vii;

//constant values
const double pi = acos(-1);
const LL MODPRIMA = (LL)1e9 + 7;
const LL MAXX = (LL)1e18;
const LL MINN = -(LL)1e18;
const double EPS = -1e9;

//declare variables here
int T, N, k;
char c1, c2, tmp;
bool prec[13][4];

int conv(char x){
    if(x == 'S')return 0;
    else if(x == 'H')return 1;
    else if(x == 'D')return 2;
    else if(x == 'C')return 3;
}

void masukin(char c1, char c2){
	if(c1 == '1' and c2 == '0'){
        if(!prec[9][conv(c2)])k++;
        prec[9][conv(c2)] = true;
    } else if(c1 == 'A'){
        if(!prec[0][conv(c2)])k++;
        prec[0][conv(c2)] = true;
    } else if(c1 == 'J'){
        if(!prec[10][conv(c2)])k++;
        prec[10][conv(c2)] = true;
    } else if(c1 == 'Q'){
        if(!prec[11][conv(c2)])k++;
        prec[11][conv(c2)] = true;
    } else if(c1 == 'K'){
        if(!prec[12][conv(c2)])k++;
        prec[12][conv(c2)] = true;
    } else {
        if(!prec[c1-'1'][conv(c2)])k++;
        prec[c1-'1'][conv(c2)] = true;
    }
}

int main(){
  OPTIMATION
  #ifndef ONLINE_JUDGE
    IO
  #endif
  cin >> T;
  while (T--) {
  	cin >> N;
  	k = 0;
  	for (int i = 0 ; i < N; i++){
  		cin >> c1 >> c2;
  		masukin(c1, c2);
  	}
  	if (k < 52) cout << "INCOMPLETE\n";
  	else cout<<"FULLHOUSE "<<(N-52)<<'\n';
  	for(int i = 0; i < 13; i++)
  		for(int j = 0; j < 4; j++)
  			prec[i][j] = false;
  }
  return 0;
}