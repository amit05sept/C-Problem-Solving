// generatingTree.cpp
#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

void preOrder(Node *node)
{
    if (node == NULL)
        return;
    cout << "  " << node->data << " ,";
    preOrder(node->left);
    preOrder(node->right);
}

void postOrder(Node *node)
{
    if (node == NULL)
        return;

    postOrder(node->left);
    postOrder(node->right);
    cout << "  " << node->data << " ,";
}

void inorder(Node *node)
{
    if (node == NULL)
        return;

    inorder(node->left);
    cout << "  " << node->data << " ,";
    inorder(node->right);
}

// BFS
// 1. Level by level traversal
vector<vector<int>> levelByLevel(Node *node)
{
    vector<vector<int>> ans;
    if (node == NULL)
        return ans;
    queue<Node *> q;
    q.push(node);
    while (!q.empty())
    {
        int size = q.size();
        vector<int> level;
        for (int i = 0; i < size; i++)
        {
            Node *temp = q.front();
            q.pop();
            if (temp->left != NULL)
                q.push(temp->left);
            if (temp->right != NULL)
                q.push(temp->right);

            level.push_back(temp->data);
        }
        ans.push_back(level);
    }
    return ans;
}

vector<int> iterativePreOrder(Node *node){
    vector<int>preorder;
    if(node == NULL) return preorder;

    stack<Node *> st;
    st.push(node);
    while(!st.empty()){
        node = st.top();
        st.pop();
        preorder.push_back(node->data);
        if(node->right!=NULL)st.push(node->right);
        if(node->left!=NULL)st.push(node->left);
    }

    return preorder;
}
int main()
{
    // root  level = 1
    Node *root = new Node(1);

    // level = 2
    root->left = new Node(2);
    root->right = new Node(3);

    // level = 3
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    root->right->right = new Node(7);

    // calling functions

    // DFS traversals

    // 1.preOrder();
    cout << "preorder";
    preOrder(root);
    cout << endl;

    // 2.postOrder();
    cout << "postorder";
    postOrder(root);
    cout << endl;

    // 3.inorder();
    cout << "inorder";
    inorder(root);
    cout << endl;

    // BFS traversals
    //  1. Level by level
    cout << "level by level \n";
    vector<vector<int>> lvlord = levelByLevel(root);
    for (auto arr : lvlord)
    {
        for (auto i : arr)
        {
            cout << " " << i << " ";
        }
        cout << endl;
    }

    // iterative preOrder traversal
    // iterativePreOrder();
    vector<int> pre = iterativePreOrder(root);
    cout<<"iterative preOrder ";
    for(auto i:pre){
        cout<<" "<<i<<" ";
    }
    cout<<endl;

    

    return 0;
}