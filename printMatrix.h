#ifndef PRINT_MATRIX_H
#define PRINT_MATRIX_H
#include <vector>
using namespace std;

    void printMatrixCore(const vector<vector<int> > &matrix, vector<int> &result, int row, int col, int rows, int cols) {
		//小于等于零行/列
        if (rows <= 0 || cols <= 0) return;
		//一行/列
		if (rows == 1) {
			while (cols != 0) {
				result.push_back(matrix[row][col++]);
				cols--;
			}
			return;
		}
		if (rows != 1 && cols == 1) {
			while (rows != 0) {
				result.push_back(matrix[row++][col]);
				rows--;
			}
			return;
		}
		//其他
        int colTemp = col;
        int rowTemp = row;
		int countTemp = 0;
		// ->
        int count = cols - 1;
        while (count != 0) {
            result.push_back(matrix[row][colTemp++]);
			count--;
        }
		// |
		// v
        count = rows - 1;
        while (count != 0) {
            result.push_back(matrix[rowTemp++][colTemp]);
			count--;
        }
		// <-
        count = cols - 1;
        while (count != 0) {
            result.push_back(matrix[rowTemp][colTemp--]);
			count--;
        }
		// ^
		// |
        count = rows - 1;
        while (count != 0) {
            result.push_back(matrix[rowTemp--][colTemp]);
			count--;
        }
		//执行下一圈。
        printMatrixCore(matrix, result, row + 1, col + 1, rows - 2, cols - 2);
    }
    vector<int> printMatrix(vector<vector<int> > matrix) {
        vector<int> result;
        if (matrix.size() == 0 || matrix[0].size() == 0)
            return result;
        
        printMatrixCore(matrix, result, 0, 0, matrix.size(), matrix[0].size());
        
        return result;

    }

#endif
