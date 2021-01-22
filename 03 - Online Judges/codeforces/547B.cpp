#include <bits/stdc++.h>
using namespace std;

const int MAXN = 2e5;

int n;
int arr[MAXN+5], tree[8*MAXN+5], ans[MAXN+5];
int prefiks[MAXN+5];
map<pair<int,int>,int> dp;
vector<pair<int,int> > tmp;

int left(int node){
    return (node << 1);
}

int right(int node){
    return ((node << 1) + 1);
}

void build(int node,int l,int r){
    if (l == r){
        tree[node] = arr[l];
    }else {
        int mid = (l + r) >> 1;
        build(left(node), l, mid);
        build(right(node), mid+1, r);
        tree[node] = min(tree[left(node)],tree[right(node)]);
    }
}

int query(int node, int curL,int curR, int l, int r){
    if (curL > curR || l > curR || r < curL) return -1;
    if (l <= curL && curR <= r) return tree[node];
    int mid = (curL + curR) >> 1;
    int q1 = query(left(node), curL, mid, l, r);
    int q2 = query(right(node), mid+1, curR, l, r);
    int ret;
    if (q1 == -1) ret = q2;
    else if (q2 == -1) ret = q1;
    else ret = min(q1, q2);
    return ret;
}

bool cmp(pair<int,int> a, pair<int,int> b){
    if (a.first == b.first) {
        return a.second > b.second;
    }
    return a.first > b.first;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    for (int i = 1; i <= n; ++i){
        cin >> arr[i];
    }
    build(1, 1, n);
    for (int i = 1; i <= n; ++i){
        int l = i, r = n;
        int maksR = -1;
        int far = 1;
        while (l <= r){
            int mid = (l + r) >> 1;
            if (query(1, 1, n, i, mid) == arr[i]){
                maksR = mid;
                l = mid + 1;
            }else {
                r = mid - 1;
            }
        }
        if (maksR != -1) {
            far = maksR - i + 1;
        }

        l = 1; r = i;
        int maksL = -1;
        while (l <= r){
            int mid = (l + r) >> 1;
            if (query(1, 1, n, mid, i) == arr[i]){
                maksL = (maksL == -1 ? mid : min(mid, maksL));
                r = mid - 1;
            }else {
                l = mid + 1;
            }
        }
        if (maksL != -1){
            far = max(far, maksR-maksL+1);
        }
        // cout << "xxx " << i << " " << far << " " << arr[i] << endl;
        prefiks[far] = max(prefiks[far], arr[i]);
    }
    for (int i = n; i >= 1; --i){
        if (i == n) {
            ans[i] = prefiks[i];
        }else {
            ans[i] = max(prefiks[i], ans[i+1]);
        }
    }
    for (int i = 1; i <= n; ++i){
        cout << ans[i] << (i == n ? '\n' : ' ');
    }
    return 0;
}