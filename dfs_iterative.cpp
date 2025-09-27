#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

vector<int> preorder(Node* root){
    vector<int> preorder;
    if(root == nullptr) return preorder;
    stack<Node*> st;
    st.push(root);
    while(!st.empty()){
        root = st.top();
        st.pop();
        preorder.emplace_back(root->data);
        if(root->right != NULL){
            st.push(root->right);
        }
        if(root->left != NULL){
            st.push(root->left);
        }
    }
    return preorder;
}

vector<int> inorder(Node* root){
    stack<Node*> st;
    Node* node = root;
    vector<int> inorder;
    while(true){
        if(node != NULL){
            st.push(node);
            node = node->left;
        }
        else{
            if(st.empty()) break;
            node = st.top();
            st.pop();
            inorder.emplace_back(node->data);
            node = node->right;
        }
    }
    return inorder;
}

vector<int> postorder(Node* root){
    vector<int> postorder;
    if(root == NULL){
        return postorder;
    }
    stack<Node*> st1, st2;
    st1.push(root);
    while(!st1.empty()){
        root = st1.top();
        st1.pop();
        st2.push(root);
        if(root->left != NULL){
            st1.push(root->left);
        }
        if(root->right != NULL){
            st1.push(root->right);
        }
    }
    while(!st2.empty()){
        postorder.emplace_back(st2.top()->data);
        st2.pop();
    }
    return postorder;
}

int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    vector<int> res = preorder(root);
    for(auto num: res){
        cout<<num<<" ";
    }
}