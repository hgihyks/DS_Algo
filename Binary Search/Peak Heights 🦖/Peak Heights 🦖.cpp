vector<vector<int>> solve(vector<vector<int>>& matrix) {
    int n = matrix.size(), m = matrix[0].size();
    queue<array<int, 3>> q;
    vector<vector<bool>> vis(n, vector<bool>(m));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (matrix[i][j] == 0) {
                q.push({i, j, 0});
                vis[i][j] = true;
            }
        }
    }
    auto check = [&](int x, int y) {
        return (x >= 0 and y >= 0 and x <= n - 1 and y <= m - 1 and !vis[x][y]);
    };
    while (!q.empty()) {
        
            array<int, 3> it = q.front();
            q.pop();
            int x = it[0], y = it[1], val = it[2];
            matrix[x][y] = val;
            if (check(x - 1, y)) {
                vis[x - 1][y] = true;
                q.push({x - 1, y, val + 1});
            }
            if (check(x + 1, y)) {
                vis[x + 1][y] = true;
                q.push({x + 1, y, val + 1});
            }
            if (check(x, y - 1)) {
                vis[x][y - 1] = true;
                q.push({x, y - 1, val + 1});
            }
            if (check(x, y + 1)) {
                vis[x][y + 1] = true;
                q.push({x, y + 1, val + 1});
            }
        }
    
    return matrix;
}