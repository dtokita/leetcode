class MovingAverage {
public:
    /** Initialize your data structure here. */
    MovingAverage(int size) {
        maxSize = size;
    }

    double next(int val) {
        double answer;

        currentAverage.insert(currentAverage.begin(), val);

        if(currentAverage.size() > maxSize){
            currentAverage.pop_back();
        }

        for(int i = 0; i < currentAverage.size(); i++){
            answer = answer + currentAverage[i];
        }

        return answer/currentAverage.size();

    }

    int maxSize;
    vector<int> currentAverage;
};

/**
 * Your MovingAverage object will be instantiated and called as such:
 * MovingAverage obj = new MovingAverage(size);
 * double param_1 = obj.next(val);
 */
