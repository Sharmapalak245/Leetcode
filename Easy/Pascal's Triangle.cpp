class Solution {
public:
    vector<vector<int>> tri;

    void triangle(int numRows){
        tri.clear();  // VERY IMPORTANT (LeetCode may reuse object)

        for(int i = 0; i < numRows; i++){
            vector<int> row(i + 1, 1);
            for(int j = 1; j < i; j++){
                row[j] = tri[i-1][j-1] + tri[i-1][j];
            }
            tri.push_back(row);
        }
    }

    vector<int> getRow(int rowIndex) {
        triangle(rowIndex + 1);   // ✅ build first
        return tri[rowIndex];     // ✅ directly return
    }
};
