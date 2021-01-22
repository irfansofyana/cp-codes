#include <bits/stdc++.h>
using namespace std;

int n, m, ans;
int dx[] = {-1, 0, 0, 1};
int dy[] = {0, -1, 1, 0};
char arr[1005][1005];


void dfs(int x, int y){
    arr[x][y] = '#';
    for (int i = 0; i < 4; ++i){
        if ((x + dx[i] >= 0 && x + dx[i] < n) && (y + dy[i] >= 0 && y + dy[i] < m)){
            if (arr[x+dx[i]][y+dy[i]] == '.'){
                dfs(x + dx[i], y + dy[i]);
            }
        }
    }
}

int main(){
    cin >> n >> m;
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < m; ++j){
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < m; ++j){
            if (arr[i][j] == '.'){
                ++ans;
                dfs(i, j);
            }
        }
    }
    cout << ans << '\n';
    return 0;
}