#include<deque>
#include<vector>

using namespace std;

struct TreeNode {
    TreeNode* left;
    TreeNode* right;
    int val;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr){};
};

vector<vector<int>> levelOrder(TreeNode* root) {
    if(root == nullptr) return {};

    vector<vector<int>> ret;
    deque<TreeNode*> que;
    que.push_front(root);

    while(!que.empty()){
        bool isBack = ret.size() % 2 == 0;
        vector<int> temp;
        for(int i = que.size(); i > 0; --i){
            if(isBack){
                auto node = que.front();

                temp.push_back(node->val);
                if(node->left) que.push_back(node->left);
                if(node->right) que.push_back(node->right);

                que.pop_front();
            }else{
                auto node = que.back();

                temp.push_back(node->val);
                if(node->left) que.push_front(node->left);
                if(node->right) que.push_front(node->right);

                que.pop_back();
            }
        }

        ret.push_back(temp);
    }

    return ret;
}