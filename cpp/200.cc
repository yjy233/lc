#include<vector> 
#include<stack>

using namespace std;
class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int res = 0;

        stack<vector<int>> st;

        int m = grid.size();
        if (m <= 0) return 0;
        int n = grid[0].size();

        for (int i =0;i<m;i++) {
            for (int j = 0;j<n;j++) {
                if (grid[i][j] == '0') continue;

                res++;
                grid[i][j] = '0';
                st.push({i-1,j});
                st.push({i+1,j});
                st.push({i,j-1});
                st.push({i,j+1});

                while (!st.empty()) {
                    vector<int> zb = st.top();
                    st.pop();
                    int x = zb[0];
                    int y = zb[1];

                    if (x<0 || x>= m || y <0|| y >=n) continue;
                    if (grid[x][y] == '0') continue;

                    st.push({x-1,y});
                    st.push({x+1,y});
                    st.push({x,y-1});
                    st.push({x,y+1});
                    grid[x][y] = '0';
                }


            }
            
        }
        return res;
    }
};