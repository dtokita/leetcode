class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid){
        int xedge = grid.at(0).size() - 1;
        int yedge = grid.size() - 1;
        int total = 0;

        for(int i = 0; i < yedge + 1; i++){
            for(int j = 0; j < xedge + 1; j++){
                if(grid.at(i).at(j) == 1){
                    total = total + edges(grid, j, i, xedge, yedge);
                }
            }
        }
        
        return total;
    }
    
    int edges(vector<vector<int>> &grid, int xpos, int ypos, int xedge, int yedge){
        int count = 4;                                  //count the number of edges present
        bool up = 0, down = 0, left = 0, right = 0;     //booleans indicated checked, not edge present
    
        if(xpos == xedge) right = 1;
        if(xpos == 0) left = 1;
        if(ypos == yedge) down = 1;
        if(ypos == 0) up = 1;

        if(!right){
             if(grid.at(ypos).at(xpos + 1) == 1) count--;
        }
        
        if(!left){
            if(grid.at(ypos).at(xpos - 1) == 1) count--;
        }
        
        if(!up){
            if(grid.at(ypos - 1).at(xpos) == 1) count--;
        }
        
        if(!down){
            if(grid.at(ypos + 1).at(xpos) == 1) count--;
        }
        
        return count;
    }
};
