class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;

        for(int i = 0; i < 32; i++){
            if(n % 2 == 1){
                count = count + 1;
            }

            n = n >> 1;
        }

        return count;
    }
};
