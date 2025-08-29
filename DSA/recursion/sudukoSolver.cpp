#include<iostream>
#include<vector>
using namespace std;
//how to calculate off set row%3,col%3 
//strating of grid = x,y - offset
bool isValid(vector<vector<char>>& board, int row, int col, char num){
    //col
    for(int i=0; i<=8; i++){
        if(board[i][col] == num){
            return false;
        }
    }
    //row
    for(int i=0;i<=8;i++){
        if(board[row][i] == num){
            return false;
        }
    }

    int x = row%3;
    int y = col%3;

    int startX = row-x;
    int startY = col-y;

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(board[startX + i][startY + j] == num){
                return false;
            }
        }
    }
    return true;
}
bool helper(vector<vector<char>>& board, int row, int col){
    if(col == 9){
        row = row + 1;
        col = 0;
    }

    if(row == 9){
        return true;
    }

    if(board[row][col] != '.'){
        return helper(board, row, col + 1);
    }

    for(char num = '1'; num <= '9'; num++){
        if(isValid(board, row, col, num)){
            board[row][col] = num;
            if(helper(board, row, col + 1)){
                return true;
            }
            board[row][col] = '.'; // Backtrack
        }
    }

    return false;
}
int main(){
    vector<vector<char>> board =  {{'5','3','.','.','7','.','.','.','.'},
                                    {'6','.','.','1','9','5','.','.','.'},
                                    {'.','9','8','.','.','.','.','6','.'},
                                    {'8','.','.','.','6','.','.','.','3'},
                                    {'4','.','.','8','.','3','.','.','1'},
                                    {'7','.','.','.','2','.','.','.','6'},
                                    {'.','6','.','.','.','.','2','8','.'},
                                    {'.','.','.','4','1','9','.','.','5'},
                                    {'.','.','.','.','8','.','.','7','9'}};

    helper(board,0,0);
    for(int i = 0; i<9; i++){
        for(int j = 0; j<9; j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
}