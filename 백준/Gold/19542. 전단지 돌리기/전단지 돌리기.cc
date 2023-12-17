#include <iostream>
#include <vector>
using namespace std;
 
int N, S, D;
int ans = 0;
vector<vector<int>> adj;
vector<int> dept;
vector<int> Mdept;
 
int dfs(int here) {
    int ret = dept[here];
    for(int i = 0; i<adj[here].size(); ++i) {
        int there = adj[here][i];
        if(!dept[there]) {
            dept[there] = dept[here] + 1;
            ret = max(ret, dfs(there));
        }
    }
    Mdept[here] = ret;
    if(Mdept[here] - dept[here] >= D)
        ans += 2;
    return ret;
}
 
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0);
    cin >> N >> S >> D;
    adj = vector<vector<int>>(N+1);
    Mdept = dept = vector<int>(N+1, 0);
    int u, v;
    for(int i = 0; i<N-1; ++i) {
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dept[S] = 1;
    dfs(S);
    cout << (ans - 2 >= 0 ? ans-2 : 0);
}
