#include <iostream>
#include <vector>
using namespace std;

class Node
{
public:
    int val;
    Node * r_node;
    Node * l_node;


    Node(){
        val = 0;
        r_node = nullptr;
        l_node = nullptr;
    }
};

void preorder_traversal(Node * node){
    cout << node->val << " ";
    if(node->l_node != nullptr){
        preorder_traversal(node->l_node);
    }
    if(node->r_node != nullptr){
        preorder_traversal(node->r_node);
    }
}

void inorder_traversal(Node * node){
    if(node->l_node != nullptr){
        inorder_traversal(node->l_node);
    }
    cout << node->val << " ";
    if(node->r_node != nullptr){
        inorder_traversal(node->r_node);
    }
}

void postorder_traversal(Node * node){
    if(node->l_node != nullptr){
        postorder_traversal(node->l_node);
    }
    if(node->r_node != nullptr){
        postorder_traversal(node->r_node);
    }
    cout << node->val << " ";
}

int main(){
    int n;
    std::cin >> n;

    std::vector<Node * > node_list;
    for(int i = 0; i < n; ++i){
        Node * pNode = new Node();
        pNode->val = i + 1;
        node_list.push_back(pNode);
    }

    for(int i = 0; i < n; ++i){
        int left_index, right_index;
        std::cin >> left_index >> right_index;

        if(left_index != 0){
            node_list[i]->l_node = node_list[left_index-1];
        }

        if(right_index != 0){
            node_list[i]->r_node = node_list[right_index-1];
        }

    }

    preorder_traversal(node_list[0]);
    cout << endl;

    inorder_traversal(node_list[0]);
    cout << endl;

    postorder_traversal(node_list[0]);
    cout << endl;

    return 0;
}