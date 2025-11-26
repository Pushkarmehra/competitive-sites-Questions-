class Solution {
public:
    vector<int> constructRectangle(int area) {
    int w = (int)floor(sqrt(area));
    for (int i = w; i >= 1; --i) {
        if (area % i == 0) {
            int W = i;
            int L = area / i;
            return {L, W};
        }
    }
    return {area, 1}; 
}
};