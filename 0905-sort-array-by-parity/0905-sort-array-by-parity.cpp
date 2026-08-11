class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> odd={};
        vector<int> even={};
        for(auto i : nums){
            if(i%2==0){
                even.push_back(i);
            }
            else{
                odd.push_back(i);
            }
        }
        sort(even.begin(),even.end());
        sort(odd.begin(),odd.end());
        even.insert(even.end(), odd.begin(), odd.end());
        return even;
    }
};