struct TreeNode {
    TreeNode* left;
    TreeNode* right;
    int val;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {};
};

bool search(TreeNode* A, TreeNode* B){
    if(B == nullptr){
        return true;
    }else{
        if(A == nullptr) return false;
    }
    return A->val == B->val && search(A->left, B->left) && search(A->right, B->right);
}

bool isSubStructure(TreeNode* A, TreeNode* B) {
    if(A == nullptr || B == nullptr) return false;

    if(search(A, B)) return true;
    if(isSubStructure(A->left, B)) return true;
    if(isSubStructure(A->right, B)) return true;

    return false;
}

int main(){
    TreeNode* a1 = new TreeNode(1);
    TreeNode* a2 = new TreeNode(2);
    TreeNode* a3 = new TreeNode(3);
    TreeNode* a4 = new TreeNode(4);
    TreeNode* a5 = new TreeNode(5);

    a3->left = a4;
    a3->right = a5;
    a4->left = a1;
    a4->right = a2;

    TreeNode* b1 = new TreeNode(4);
    TreeNode* b2 = new TreeNode(1);
    b1->left = b2;

    isSubStructure(a3, b1);
}