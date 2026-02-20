#include <bits/stdc++.h>
using namespace std;

struct Node {
    int r, c;
};
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    cin >> N;
    vector<string> R(N);
    for (int i = 0; i < N; i++) cin >> R[i];
    int CENTER = N;
    queue<Node> q;
    vector<vector<int>> dist(N);
    for (int i = 0; i < N; i++) dist[i].assign(R[i].size(), INT_MAX);

    for (int c = 0; c < (int)R[0].size(); c++) {
        if (R[0][c] == '0') {
            dist[0][c] = 1;  
            q.push({0, c});
        }
    }
    int answer = INT_MAX;
    while (!q.empty()) {
        Node cur = q.front(); q.pop();
        int r = cur.r, c = cur.c;
        int d = dist[r][c];

        if (r == N-1) {
            answer = min(answer, d); 
            continue;
        }

        int Lcur = R[r].size();

        int cw = (c + 1) % Lcur;
        if (R[r][cw] == '0' && dist[r][cw] > d + 1) {
            dist[r][cw] = d + 1;
            q.push({r, cw});
        }

        int ccw = (c - 1 + Lcur) % Lcur;
        if (R[r][ccw] == '0' && dist[r][ccw] > d + 1) {
            dist[r][ccw] = d + 1;
            q.push({r, ccw});
        }

        int Lnext = R[r+1].size();
        int c1 = (2 * c) % Lnext;
        int c2 = (2 * c + 1) % Lnext;

        if (R[r+1][c1] == '0' && dist[r+1][c1] > d + 1) {
            dist[r+1][c1] = d + 1;
            q.push({r+1, c1});
        }
        if (R[r+1][c2] == '0' && dist[r+1][c2] > d + 1) {
            dist[r+1][c2] = d + 1;
            q.push({r+1, c2});
        }
    }

    cout << answer;
    return 0;
}
