/*
Link to the complete Explaination Video ==>> https://youtu.be/0D1mDVwZYhA
*/

class Solution {
public:
    pair<int, int> coordinates(int x, int n){

        int r=n-(x-1)/n-1;
        int c = (x-1)%n;
        if(r%2==n%2)
            return {r,n-c-1};
        return {r, c};
    }
    int snakesAndLadders(vector<vector<int>>& board) {

        int steps = 0;
        queue<int> q;
        q.push(1);  //initially push 1 in the queue as the board starts from 1 only.....so we too start from there
        int n = board.size();
        vector<vector<bool>> visited(n, vector<bool>(n));
        visited[board.size()-1][0]=true;
        while(q.size()!=0){
            int z = q.size();
            for(int i=0; i<z; i++){
                int x = q.front();
                if(x == n*n) 
                    return steps;
                q.pop();
                for(int j=1; j<=6; j++){    //check for all the 6 possibilities as there is at max 6 tak allowed hai chalne se.......dice....
                    if(j+x > n*n) 
                        break;
                    pair<int, int> p = coordinates(x+j, n);
                    if(visited[p.first][p.second]) 
                        continue;
                    visited[p.first][p.second] = true;
                    if(board[p.first][p.second]!=-1)
                        q.push(board[p.first][p.second]);
                    else
                        q.push(j+x);
                }
            }
            steps++;
        }
        return -1;
    }
};
