class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        
        if(root==NULL) return ans;
        queue<TreeNode*>q;
		//pushing root of tree in queue
        q.push(root);
		//this loop is for the height of the tree
        while(q.empty()==false){
            vector<int>temp;
            int size=q.size();         
			//this loop is for the levels of tree
            for(int i=0;i<size;i++){
                TreeNode* curr=q.front();
                q.pop();
                //this put the whole left subtree to the queue
                if(curr->left!=NULL) q.push(curr->left);
				//this put the whole right subtree in the queue
                if(curr->right!=NULL) q.push(curr->right);
                
                temp.push_back(curr->val);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};