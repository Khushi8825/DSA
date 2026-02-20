#include <bits/stdc++.h>
using namespace std;

int N, M;
vector<vector<int>> grid;
unordered_map<int, vector<pair<int,int>>> pieceCells;

vector<int> dr = {1,-1,0,0};
vector<int> dc = {0,0,1,-1};

bool hasSupport(int piece, vector<vector<bool>> &removed) {
    for (auto &p : pieceCells[piece]) {
        int r = p.first, c = p.second;
        if (removed[r][c]) continue;
        int nr = r + 1;
        if (nr >= N) return false;
        if (!removed[nr][c]) return true;
    }
    return false;
}

int computeCost(string side, int targetPiece) {
    vector<vector<bool>> removed(N, vector<bool>(M, false));
    unordered_set<int> removedPieces;

    int minR = N, maxR = -1, minC = M, maxC = -1;
    for (auto &p : pieceCells[targetPiece]) {
        minR = min(minR, p.first);
        maxR = max(maxR, p.first);
        minC = min(minC, p.second);
        maxC = max(maxC, p.second);
    }

    if (side == "left") {
        for (int r = 0; r < N; r++) {
            for (int c = 0; c <= maxC; c++) {
                int piece = grid[r][c];
                if (piece != targetPiece && piece != -1) {
                    removedPieces.insert(piece);
                }
                removed[r][c] = true;
            }
        }
    }
    else if (side == "right") {
        for (int r = 0; r < N; r++) {
            for (int c = M-1; c >= minC; c--) {
                int piece = grid[r][c];
                if (piece != targetPiece && piece != -1) {
                    removedPieces.insert(piece);
                }
                removed[r][c] = true;
            }
        }
    }
    else if (side == "up") {
        for (int r = 0; r <= maxR; r++) {
            for (auto &p : pieceCells[targetPiece]) {
                int col = p.second;
                int piece = grid[r][col];
                if (piece != targetPiece && piece != -1) {
                    removedPieces.insert(piece);
                }
                removed[r][col] = true;
            }
        }
    }
    else if (side == "down") {
        for (int r = N-1; r >= minR; r--) {
            for (auto &p : pieceCells[targetPiece]) {
                int col = p.second;
                int piece = grid[r][col];
                if (piece != targetPiece && piece != -1) {
                    removedPieces.insert(piece);
                }
                removed[r][col] = true;
            }
        }
    }

    bool changed = true;
    while (changed) {
        changed = false;
        for (auto &kv : pieceCells) {
            int piece = kv.first;
            if (piece == targetPiece) continue;
            if (removedPieces.count(piece)) continue;

            bool supported = hasSupport(piece, removed);
            if (!supported) {
                removedPieces.insert(piece);
                changed = true;
                for (auto &p : kv.second) removed[p.first][p.second] = true;
            }
        }
    }

    int cost = 0;
    for (int p : removedPieces) cost += p;

    return cost;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> M;

    grid.assign(N, vector<int>(M));
    pieceCells.clear();

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> grid[i][j];
            if (grid[i][j] != 0)
                pieceCells[grid[i][j]].push_back({i, j});
        }
    }

    int targetPiece;
    cin >> targetPiece;

    vector<string> sides = {"left", "right", "up", "down"};
    vector<int> cost(4);

    for (int i = 0; i < 4; i++) {
        cost[i] = computeCost(sides[i], targetPiece);
    }

    int bestIdx = min_element(cost.begin(), cost.end()) - cost.begin();
    cout << cost[bestIdx] << " via " << sides[bestIdx];

    return 0;
}
