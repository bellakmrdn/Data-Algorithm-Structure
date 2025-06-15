/* NAME : Noor Hidayatul Nabila binti Kamarudin
ID : 22011843 */

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> rotateMatrix(vector<vector<int>> &matrix)
{
    int rows = matrix.size();
    int columns = matrix[0].size();

    // Create a result matrix of size n x m
    vector<vector<int>> result(columns, vector<int>(rows));

    // Move mat[i][j] to result[j][m - i- 1]
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            result[j][rows - i - 1] = matrix[i][j];
        }
    }
    return result;
}

int main()
{
    vector<vector<int>> matrix{
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
    };

    vector<vector<int>> result = rotateMatrix(matrix);

    for (auto &row : result)
    {
        for (auto &x : row)
            cout << x << " ";
        cout << endl;
    }

    return 0;
}
