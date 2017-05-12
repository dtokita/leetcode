class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int xedge = grid.size();
        int yedge = grid.at(0).size();



        return 0;
    }

    int edges(vector<vector<int>> &grid, int xpos, int ypos, int xedge, int yedge){
        int count = 0;
        bool up = 0, down = 0, left = 0, right = 0;

        if(xpos == xedge || xpos == 0)
            count++;
        if(ypos == yedge || ypos == 0)
            count++;




        return count;
    }
};

/* The number of edges a block has is depedent on the number of neighbors a block has,
the more neighbors, the less the edges */
