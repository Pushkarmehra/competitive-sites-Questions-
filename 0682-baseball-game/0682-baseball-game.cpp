class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> v;
        long long ans = 0;
        for(auto &it : operations) {
            if(it == "D") {
                ans += 2*v[v.size()-1];
                v.push_back(2*v[v.size()-1]);
            }else if(it == "C"){
                ans -= v[v.size()-1];
                v.pop_back();
            }else if(it == "+") {
                ans += (v[v.size()-1] + v[v.size()-2]);
                v.push_back((v[v.size()-1] + v[v.size()-2]));
            }else{
                v.push_back(stoi(it));
                ans += stoi(it);
            }
        }
        return (int)ans;
    }
};