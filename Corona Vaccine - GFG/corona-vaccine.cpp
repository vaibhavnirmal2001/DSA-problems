// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node 
{
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

// Function to Build Tree
Node *buildTree(string str) 
{
    // Corner Case
    if (str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;)
        ip.push_back(str);

    // Create the root of the tree
    Node *root = new Node(stoi(ip[0]));

    // Push the root to the queue
    queue<Node *> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node *currNode = queue.front();
        queue.pop();

        // Get the current Node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current Node
            currNode->left = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current Node
            currNode->right = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}

 // } Driver Code Ends
//User function Template for C++

/*
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
class Solution{
public:
    void solve(Node *par,Node *root,unordered_map<Node*,int> &mp,int &cnt){
        if(root == nullptr){
            return;
        }
        mp[root] = 0;//unlike adjlist we cannot mark all nodes as unvisited atfirst, we need separate traversal for that
        solve(root,root->left,mp,cnt);
        solve(root,root->right,mp,cnt);
        if((root->left && mp[root->left]==0) || (root->right && mp[root->right]==0)){
            mp[root] = 1;
            if(root->left){
                mp[root->left] = 1;
            }
            if(root->right){
                mp[root->right] = 1;
            }
            mp[par] = 1;
            //inc the cnt;
            cnt += 1;
        }
        else{
            return;
        }
    }
    int supplyVaccine(Node* root){
        // Your code goes here
        unordered_map<Node*,int> mp;
        int cnt = 0;
        solve(root,root,mp,cnt);
        //lastly check for root, bcoz there is not parent for root to check root as any decendent
        if(mp[root] == 0){
            cnt += 1;
            mp[root] = 1;
        }
        return cnt;
    }
};

// { Driver Code Starts.
int main() 
{
    int t;
    scanf("%d ", &t);
    while (t--) {
        string treeString;
        getline(cin, treeString);
        Node *root = buildTree(treeString);
        Solution ob;
        cout<<ob.supplyVaccine(root)<<"\n";
    }
    return 0;
}



  // } Driver Code Ends