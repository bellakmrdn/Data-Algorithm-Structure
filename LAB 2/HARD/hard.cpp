/*
ID = 22011843
Name = Noor Hidayatul Nabila binti Kamarudin
*/
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// Recursive function to find minimum initial health needed at position (row, column)
int minimumHealthNeeded(int row, int column, vector<vector<int>> &grid) {
    int totalRows = grid.size();
    int totalColumns = grid[0].size();

    // If we go outside the grid, return a very big number (invalid path)
    if (row >= totalRows || column >= totalColumns)
        return INT_MAX;

    // If we are at the destination cell (bottom-right)
    if (row == totalRows - 1 && column == totalColumns - 1) {
        if (grid[row][column] >= 0)
            return 1;  // need at least 1 to survive
        else
            return abs(grid[row][column]) + 1;  // need enough to absorb the damage
    }

    // Recursively find the minimum health needed from the right and down cells
    int healthNeededFromRight = minimumHealthNeeded(row, column + 1, grid);
    int healthNeededFromDown = minimumHealthNeeded(row + 1, column, grid);

    // Choose the better (smaller) option
    int minimumHealthAfterCurrentCell = min(healthNeededFromRight, healthNeededFromDown);

    // Subtract the current cell value from the required health
    int requiredHealth = minimumHealthAfterCurrentCell - grid[row][column];

    // You always need at least 1 health to stay alive
    return max(1, requiredHealth);
}

// Function that starts from top-left and finds minimum initial health
int findMinimumInitialHealth(vector<vector<int>> grid) {
    return minimumHealthNeeded(0, 0, grid);
}

int main() {
    // Dungeon grid: each cell affects your health (positive = bonus, negative = damage)
    vector<vector<int>> dungeon = {
        {-2, -3, 3},
        {-5, -10, 1},
        {10, 30, -5}
    };

    int initialHealthRequired = findMinimumInitialHealth(dungeon);
    cout << "Minimum initial health needed: " << initialHealthRequired << endl;

    return 0;
}
