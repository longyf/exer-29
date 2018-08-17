#include <iostream>
#include <vector>
#include "printMatrix.h"
using namespace std;

int main() {
	vector<vector<int> >v1;
	vector<int> temp1 = {1, 2, 3, 4, 5};
	vector<int> temp2 = {6, 7, 8, 9, 10};
	vector<int> temp3 = {11, 12, 13, 14, 15};
	vector<int> temp4 = {16, 17, 18, 19, 20};
	vector<int> temp5 = {21, 22, 23, 24, 25};
	v1.push_back(temp1);
	v1.push_back(temp2);
	v1.push_back(temp3);
	v1.push_back(temp4);
	v1.push_back(temp5);
	
	vector<int> result;
	result = printMatrix(v1);

	for (int i = 0; i != result.size(); ++i) {
		cout<<result[i]<<" ";
	}
	cout<<endl;

	return 0;
}
	
