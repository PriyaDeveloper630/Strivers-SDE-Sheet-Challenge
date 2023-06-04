class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> grid(numRows);
        grid[0].push_back(1);
        if (numRows >= 2) {
            grid[1].push_back(1);
            grid[1].push_back(1);
        }

        for (int i = 2; i < numRows; i++) {
            grid[i].push_back(1);
            for (int j = 1; j < i; j++) {
                grid[i].push_back(grid[i - 1][j - 1] + grid[i - 1][j]);
            }
            grid[i].push_back(1);
        }

        return grid;
    }
};
