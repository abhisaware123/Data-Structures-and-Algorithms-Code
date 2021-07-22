// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

/* A binary tree node has data, pointer to left child
   and a pointer to right child */
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};
// Utility function to create a new Tree Node
Node* newNode(int val)
{
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;
    
    return temp;
}

 // } Driver Code Ends
/* A binary tree Node

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */


class Solution
{
    public:
    //Function to return the level order traversal of a tree.
    
    queue<Node * >que;
    vector<int> vec;
    vector<int> levelOrder(Node* node)
    {
        if(node==NULL)
        {
            return vec;
        }
      //Your code here
      Node * temp=node;
      que.push(temp);
      que.push(NULL);
      while(!que.empty())
      {
        Node* n= que.front();
        que.pop();
        
        if(n!=NULL)
        {
            vec.push_back(n->data);
            if(n->left!=NULL)
            {
                que.push(n->left);
            }
            if(n->right!=NULL)
            {
                que.push(n->right);
            }
        }
        else if(!que.empty())
        {
            
            que.push(NULL);
        }
        
      }
      
      return vec;
      
    }
};
