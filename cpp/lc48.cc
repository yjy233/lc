#include <vector>

using namespace std;


class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        if (n<=1) {
            return ;
        }

        int k = n/2;
        if (n%2 == 0) {
            k++;
        }

        for (int i=0;i<n/2;i++) {

            int w = n - 2*i;
            for (int j=i;j<n-1-i;j++) {                
                int tmp = matrix[i][j];
                //cout<<tmp<<endl;
                //cout<<matrix[n-1-j][i]<<". xx"<<endl;
                matrix[i][j] = matrix[n-1-j][i];
                matrix[n-1-j][i] = matrix[n-1-i][n-1-j];
                //cout<<"xxxx "<<matrix[n-1-i][n-1-j]<<endl;
                matrix[n-1-i][n-1-j] = matrix[j][n-1-i];
                matrix[j][n-1-i] = tmp;
                //break;
                //matrix[n-1-i][n-1-j] = matrix[n-1-i][j];
                //matrix[n-1-i][j] = matrix[n-1-i][n-1-j];
                //matrix[n-1-i][n-1-j] = matrix[j][n-1-i];
                //matrix[n-1-i][j] = tmp;
                //matrix[j][n-1-i] = tmp;
                //break;
            }
            //break;
        }
    }
};