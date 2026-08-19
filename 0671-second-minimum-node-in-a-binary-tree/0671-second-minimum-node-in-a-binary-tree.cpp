class Solution {
public:
    int findSecondMinimumValue(TreeNode* root) {
        long long minVal[2] = {
            LLONG_MAX,
            LLONG_MAX
        };

        find(root, minVal);

        return minVal[1] == LLONG_MAX ? -1 : minVal[1];
    }

private:
    void find(TreeNode* root, long long minVal[]) {
        if (root == nullptr) return;

        if (root->val < minVal[0]) {
            minVal[1] = minVal[0];
            minVal[0] = root->val;
        }
        else if (root->val > minVal[0] &&
                 root->val < minVal[1]) {
            minVal[1] = root->val;
        }

        find(root->left, minVal);
        find(root->right, minVal);
    }
};