#include <bits/stdc++.h>
using namespace std;

int N, arr[100005];

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> N;
    for (int i = 0; i < N; ++i){
        cin >> arr[i];
    }
    cout << arr[N-1];
    for (int i = 0; i < N-1; ++i){
        cout << " " << arr[i];
    }
    cout << '\n';
    return 0;
}
