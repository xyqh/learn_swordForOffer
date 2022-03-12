#include<algorithm>
#include<vector>

using namespace std;

struct TreeNode {
    TreeNode* left;
    TreeNode* right;
    int val;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {};
};

bool recur(TreeNode* L, TreeNode* R){
    if(L == nullptr && R == nullptr) return true;
    if(L == nullptr || R == nullptr || L->val != R->val) return false;
    return recur(L->left, R->right) && recur(L->right, R->left);
}

bool isSymmetric(TreeNode* root) {
    if(root == nullptr) return true;

    return recur(root->left, root->right);
}

int main(){
    // TreeNode* a1 = new TreeNode(1);
    // TreeNode* a2 = new TreeNode(2);
    // TreeNode* a3 = new TreeNode(3);
    // TreeNode* a4 = new TreeNode(4);
    // TreeNode* a5 = new TreeNode(5);

    // a3->left = a4;
    // a3->right = a5;
    // a4->left = a1;
    // a4->right = a2;

    // TreeNode* b1 = new TreeNode(4);
    // TreeNode* b2 = new TreeNode(1);
    // b1->left = b2;

    // isSubStructure(a3, b1);
}