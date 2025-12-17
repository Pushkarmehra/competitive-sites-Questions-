class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        vector<int> x;
        vector<int> y;
        if(nums1.size()>nums2.size()){
            x=nums1;
            y=nums2;
        }
        else{
            x=nums2;
            y=nums1;
        }
    for(int i = 0; i < y.size(); i++){
        auto it = find(x.begin(), x.end(), y[i]);
        if(it != x.end()){
            result.push_back(y[i]);
            x.erase(it);   
        }
    }
        return result;
    }
};