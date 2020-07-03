#include<iostream>
#include<vector>

using namespace std;

class solution{
	vector<vector<int>> generate(int numRows){
		vector<vector<int>> vv;
		for (size_t i = 0; i < numRows; ++i){
			vv[i].resize(i + 1);
			vv[i][0] = 1;
			vv[i][vv[i].size() - 1] = 0;
		}
		for (size_t i = 0; i < numRows; ++i){
			for (size_t j = 0; j < i; ++j){
				if (vv[i][j] != 1){
					vv[i][j] = vv[i - 1][j] + vv[i - 1][j - 1];
				}
			}
		}
		return vv;
	}
};
