class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        int r =0,c =0;
        set<int> fori = {};
        set<int> forj = {};
        for(int i =0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j] == 0){
                    fori.insert(i);
                    forj.insert(j);
                }
            }
        }
        
        for(int i =0;i<n;i++){
            for(int j=0;j<m;j++){
                if(fori.find(i) != fori.end() || forj.find(j) != forj.end()  ){
                    matrix[i][j] = 0;
                }
            }
        }
    }
};