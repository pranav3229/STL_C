#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int fact(int n) {
        if (n == 1||n==0) {
            return 1;
        }
        int factorial = n * fact(n - 1);
        return factorial;
    }

    int comb(int n, int r) {
        int ans = (fact(n)) / (fact(n - r) * fact(r));
        return ans;
    }

    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> m(numRows, vector<int>(numRows));
        for (int i = 0; i < numRows; i++) {
            m[i].resize(i + 1);
            for (int j = 0; j <= i; j++) {
                if (i == 0 && j == 0) {
                    m[i][j] = 1;
                } else {
                    m[i][j] = comb(i, j);
                }
            }
        }

        // for (int i = 0; i < numRows; i++) {
        //     for (int j = 0; j <= i; j++) {
        //         cout << m[i][j] << " ";
        //     }
        //     cout << endl;
         return m;
        }

       
    };