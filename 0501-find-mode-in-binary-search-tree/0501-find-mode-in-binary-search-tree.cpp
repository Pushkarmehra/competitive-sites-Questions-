/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> findMode(TreeNode* root) {
        TreeNode* curr=root;
        vector<int> res;
        int prev=INT_MIN, cnt=0, maxCnt=0;
        bool first=true;

        while(curr!=nullptr){
            if(curr->left==nullptr){


                if(first){
                    prev=curr->val;
                    first=false;
                    cnt=1;
                }
                else if(prev==curr->val){
                    cnt++;
                }
                else{
                    cnt=1;
                    prev=curr->val;
                }

                if(cnt>maxCnt){
                    maxCnt=cnt;
                    res.clear();
                    res.push_back(curr->val);
                }
                else if(cnt==maxCnt){
                    res.push_back(curr->val);
                }


                curr=curr->right;
            }
            else{
                TreeNode* ip=curr->left;
                while(ip->right!=nullptr && ip->right!=curr){
                    ip=ip->right;
                }

                if(ip->right==nullptr){
                    ip->right=curr;
                    curr=curr->left;
                }

                else if(ip->right==curr){
                    ip->right=nullptr;


                    if(first){
                        prev=curr->val;
                        first=false;
                        cnt=1;
                    }
                    else if(prev==curr->val){
                        cnt++;
                    }
                    else{
                        cnt=1;
                        prev=curr->val;
                    }

                    if(cnt>maxCnt){
                        maxCnt=cnt;
                        res.clear();
                        res.push_back(curr->val);
                    }
                    else if(cnt==maxCnt){
                        res.push_back(curr->val);
                    }

                    
                    curr=curr->right;
                }
            }
        }

        return res;
    }
};