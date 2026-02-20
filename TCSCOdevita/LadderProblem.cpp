#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <string>
using namespace std;

struct State {
    int r, c, orientation, steps;
};

int solve() {
    int M, N;
    cin >> M >> N;

    vector<string> grid(M);
    for (int i = 0; i < M; i++) cin >> grid[i];

    vector<pair<int,int>> startCells, endCells;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            if (grid[i][j] == 'I') startCells.push_back({i, j});
            if (grid[i][j] == 'L') endCells.push_back({i, j});
        }
    }

    int L = startCells.size();
    if (L == 0) return -1;

    sort(startCells.begin(), startCells.end());
    sort(endCells.begin(), endCells.end());

    State start;
    start.r = startCells[0].first;
    start.c = startCells[0].second;
    start.steps = 0;

    if (L > 1 && startCells[0].first != startCells[1].first) start.orientation = 1;
    else start.orientation = 0;

    int finalR = endCells[0].first;
    int finalC = endCells[0].second;

    int finalOrientation = 0;
    if (L > 1 && endCells[0].first != endCells[1].first) finalOrientation = 1;

    vector<vector<vector<bool>>> visited(M, vector<vector<bool>>(N, vector<bool>(2, false)));
    queue<State> q;

    q.push(start);
    visited[start.r][start.c][start.orientation] = true;

    int dr[] = {-1, 1, 0, 0};
    int dc[] = {0, 0, -1, 1};

    while (!q.empty()) {
        State cur = q.front();
        q.pop();

        if (cur.r == finalR && cur.c == finalC && cur.orientation == finalOrientation)
            return cur.steps;

        for (int i = 0; i < 4; i++) {
            int nr = cur.r + dr[i];
            int nc = cur.c + dc[i];
            bool ok = true;

            if (cur.orientation == 0) {
                if (nr < 0 || nr >= M || nc < 0 || nc + L - 1 >= N) ok = false;
                else {
                    for (int j = 0; j < L; j++)
                        if (grid[nr][nc + j] == 'B') ok = false;
                }
            } else {
                if (nr < 0 || nr + L - 1 >= M || nc < 0 || nc >= N) ok = false;
                else {
                    for (int j = 0; j < L; j++)
                        if (grid[nr + j][nc] == 'B') ok = false;
                }
            }

            if (ok && !visited[nr][nc][cur.orientation]) {
                visited[nr][nc][cur.orientation] = true;
                q.push({nr, nc, cur.orientation, cur.steps + 1});
            }
        }

        int nextOrientation = 1 - cur.orientation;

        for (int k = 0; k < L; k++) {
            int nr = (cur.orientation == 0) ? cur.r - k : cur.r + k;
            int nc = (cur.orientation == 0) ? cur.c + k : cur.c - k;

            if (cur.orientation == 0 && (nr < 0 || nr + L - 1 >= M || nc < 0 || nc >= N)) continue;
            if (cur.orientation == 1 && (nr < 0 || nr >= M || nc < 0 || nc + L - 1 >= N)) continue;

            bool canRotate = true;
            for (int i = 0; i < L; i++) {
                for (int j = 0; j < L; j++) {
                    if (cur.r + i >= M || cur.c + j >= N || grid[cur.r + i][cur.c + j] == 'B')
                        canRotate = false;
                }
            }

            if (canRotate && !visited[nr][nc][nextOrientation]) {
                visited[nr][nc][nextOrientation] = true;
                q.push({nr, nc, nextOrientation, cur.steps + 1});
            }
        }
    }

    return -1;
}

int main() {
    int ans = solve();
    if (ans == -1) cout << "Impossible";
    else cout << ans;
}
