#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;

    vector<vector<char>> grid(N, vector<char>(M));
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cin >> grid[i][j];
        }
    }

    int I;
    cin >> I;

    struct Clue { int T, x1, y1, x2, y2; };
    vector<Clue> clues(I);

    for(int i = 0; i < I; i++){
        cin >> clues[i].T;
        cin >> clues[i].x1 >> clues[i].y1 >> clues[i].x2 >> clues[i].y2;
        clues[i].x1--; clues[i].y1--; clues[i].x2--; clues[i].y2--;
    }

    string word;
    cin >> word;
    int L = word.size();

    // reachable[t][r][c] = whether possible to be at (r,c) at time t
    vector<vector<vector<bool>>> reachable(L, vector<vector<bool>>(N, vector<bool>(M, false)));

    // time 1 → word[0] → t=0
    for(int r = 0; r < N; r++) {
        for(int c = 0; c < M; c++) {
            if (grid[r][c] == word[0]) {
                reachable[0][r][c] = true;
            }
        }
    }

    int dr[4] = {1, -1, 0, 0};
    int dc[4] = {0, 0, 1, -1};

    // Fill DP reachable table
    for(int t = 1; t < L; t++){
        for(int r = 0; r < N; r++){
            for(int c = 0; c < M; c++){
                if(grid[r][c] != word[t]) continue;

                for(int k = 0; k < 4; k++){
                    int rr = r + dr[k];
                    int cc = c + dc[k];
                    if(rr >= 0 && rr < N && cc >= 0 && cc < M){
                        if(grid[rr][cc] == word[t-1] && reachable[t-1][rr][cc]){
                            reachable[t][r][c] = true;
                            break;
                        }
                    }
                }
            }
        }
    }

    bool canForm = false;
    for(int r = 0; r < N; r++){
        for(int c = 0; c < M; c++){
            if(reachable[L-1][r][c]) {
                canForm = true;
                break;
            }
        }
        if(canForm) break;
    }

    if(!canForm){
        cout << "Impossible";
        return 0;
    }

    int faulty = 0;

    for(auto &cl: clues){
        int T = cl.T - 1;

        if(T < 0 || T >= L) {
            continue;
        }

        bool existsOutside = false;

        for(int r = 0; r < N; r++){
            for(int c = 0; c < M; c++){
                if(reachable[T][r][c]){
                    if(r < cl.x1 || r > cl.x2 || c < cl.y1 || c > cl.y2){
                        existsOutside = true;
                        break;
                    }
                }
            }
            if(existsOutside) break;
        }

        if(!existsOutside){
            faulty++;
        }
    }

    if(faulty == 0){
        cout << "All clues are correct";
    } else {
        cout << faulty;
    }

    return 0;
}
