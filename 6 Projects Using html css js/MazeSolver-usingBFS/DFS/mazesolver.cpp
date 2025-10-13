/*
Input - 
S . . #
. # . .
. . . E

Output - 
Shortest path (5 steps):
(0,0) (1,0) (2,0) (2,1) (2,2) (2,3)
*/

#include <bits/stdc++.h>
using namespace std;

struct Cell {
    int x, y;
    Cell(int _x, int _y) : x(_x), y(_y) {}
};

bool isValid(int x, int y, vector<string>& maze, vector<vector<bool>>& visited) {
    int n = maze.size(), m = maze[0].size();
    return x >= 0 && y >= 0 && x < n && y < m && maze[x][y] != '#' && !visited[x][y];
}

int main() {
    vector<string> maze = {
        "S..#",
        ".#..",
        "...E"
    };

    int n = maze.size(), m = maze[0].size();
    vector<vector<bool>> visited(n, vector<bool>(m, false));
    vector<vector<pair<int,int>>> parent(n, vector<pair<int,int>>(m, {-1,-1}));

    int startX, startY, endX, endY;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++){
            if(maze[i][j]=='S'){ startX=i; startY=j; }
            if(maze[i][j]=='E'){ endX=i; endY=j; }
        }

    queue<Cell> q;
    q.push(Cell(startX, startY));
    visited[startX][startY] = true;

    int dx[] = {-1, 1, 0, 0};
    int dy[] = {0, 0, -1, 1};

    bool found = false;
    while(!q.empty()){
        Cell curr = q.front(); q.pop();
        if(curr.x == endX && curr.y == endY){
            found = true;
            break;
        }

        for(int i=0;i<4;i++){
            int nx = curr.x + dx[i];
            int ny = curr.y + dy[i];
            if(isValid(nx, ny, maze, visited)){
                visited[nx][ny] = true;
                parent[nx][ny] = {curr.x, curr.y};
                q.push(Cell(nx, ny));
            }
        }
    }

    if(!found){
        cout << "No path found!\n";
        return 0;
    }

    // Reconstruct path
    vector<pair<int,int>> path;
    for(pair<int,int> at = {endX, endY}; at.first != -1; at = parent[at.first][at.second])
        path.push_back(at);

    reverse(path.begin(), path.end());

    cout << "Shortest path (" << path.size()-1 << " steps):\n";
    for(auto p : path)
        cout << "(" << p.first << "," << p.second << ") ";
    cout << endl;

    return 0;
}
