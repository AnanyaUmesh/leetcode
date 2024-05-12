class Solution {
    private:
int findmax(vector<vector<int>>& grid,int x,int y){
    int ele=0;
    for(int i=x;i<x+3;i++){
    for(int j=y;j<y+3;j++){
        ele=max(ele,grid[i][j]);
        }
    }
    return ele;
}
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int m=grid.size();
        vector<vector<int>> maxi(m-2,vector<int>(m-2,0));
        for(int i=0;i<m-2;i++){
            for(int j=0;j<m-2;j++){
                    maxi[i][j]=findmax(grid,i,j);
                }}
    return maxi;
    }
};
