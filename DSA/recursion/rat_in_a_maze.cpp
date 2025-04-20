#include<iostream>
#include<vector>
#include<string>
using namespace std;
bool isSafe(int maze[][3],int scrx, int scry, int col, int row, vector<vector<bool>>& visited){
    if((scrx<row && scry<col) && (maze[scrx][scry]==1) && (visited[scrx][scry]==false)){
        return true;
    }
    return false;
}
void solveMaze(int maze[][3],int scrx, int scry, int& row, int& col,
    vector<vector<bool>>& visited, vector<string>& path, string output){
        //base case
        if(scrx==row-1 && scry==col-1){
            path.push_back(output);
            return;
        }

        //down i+1,j
        if(isSafe(maze,scrx+1,scry,row,col,visited)){
            visited[scrx+1][scry] = true;
            solveMaze(maze,scrx+1,scry,row,col,visited,path,output + 'D');
            //backtrack
            visited[scrx+1][scry]=false;
        }

        //left i,j-1;
        if(isSafe(maze,scrx,scry-1,row,col,visited)){
            visited[scrx][scry-1] = true;
            solveMaze(maze,scrx,scry-1,row,col,visited,path,output + 'L');
            //backtrack
            visited[scrx][scry-1]=false;
        }
        //right i,j+1;
        if(isSafe(maze,scrx,scry+1,row,col,visited)){
            visited[scrx][scry+1] = true;
            solveMaze(maze,scrx,scry+1,row,col,visited,path,output + 'R');
            //backtrack
            visited[scrx][scry+1]=false;
        }
        //upper i-1,j;
        if(isSafe(maze,scrx-1,scry,row,col,visited)){
            visited[scrx-1][scry] = true;
            solveMaze(maze,scrx-1,scry,row,col,visited,path,output + 'U');
            //backtrack
            visited[scrx-1][scry]=false;
        }
    }
int main(){
    int maze[3][3]={{1,0,0},
                 {1,1,0},
                 {1,1,1}};
    
    int scrx=0;
    int scry=0;

    int row = 3;
    int col = 3;

    vector<vector<bool>> visited(row,vector<bool>(col,false));
    visited[0][0]=true;

    vector<string> path;
    string output = "";

    solveMaze(maze,scrx,scry,row,col,visited,path,output);

    for(auto i: path){
        cout<<i<<" ";
    }
    cout<<endl;
}