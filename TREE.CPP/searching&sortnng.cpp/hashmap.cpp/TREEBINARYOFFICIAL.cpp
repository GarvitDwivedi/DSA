#include<iostream>
#include<queue>
#include <bits/stdc++.h>
using namespace std ;
template <typename T>
class binarytree{
    public:
    T data ;
    binarytree * left ;
    binarytree * right ;

    binarytree(T data){
        this->data = data ; 
        left = NULL ;
        right = NULL;

    }
    ~binarytree(){
        delete left ;
        delete right ;
    }
};

void printtree(binarytree<int>* root) {
	if (root == NULL) {
		return;
	}
	cout << root->data << ":";
	if (root->left != NULL) {
		cout << "L" << root->left->data << " ";
	}

	if (root->right != NULL) {
		cout << "R" << root->right->data;
	}
	cout << endl;
	printtree(root->left);
	printtree(root->right);
}

binarytree<int> * takeinput(){
    int data ;
    cout << "enter data " ;
    cin >> data ;
    if(data == -1){
        return NULL ;
    }
    binarytree<int >* root = new binarytree<int>(data);
    binarytree<int >* leftchild = takeinput() ;
    binarytree<int >* rightchild = takeinput();
    root->left = leftchild;
    root->right = rightchild ;
    return root ;
}
binarytree<int> * takeinputlevelwise(){
    int rootdata ;
    cout << "enter root data " ;
    cin >> rootdata ;
    if(rootdata == -1){
        return NULL ;
    }
    binarytree<int> * root = new binarytree<int>(rootdata);

    queue<binarytree<int>*>pendingnodes ;
    pendingnodes.push(root);

    while(pendingnodes.size() != 0){
        binarytree<int> * front = pendingnodes.front() ;
        pendingnodes.pop() ;
        cout << "enter the left child" << front->data << endl ;
        int leftchild ; 
        cin >> leftchild ;
        if(leftchild != -1){
            binarytree<int>* child = new binarytree<int>(leftchild);
            front->left = child ;
            pendingnodes.push(child);
        }
        cout << "Enter The Right Child "<< front->data << endl ;
        int rightchild ;
        cin >> rightchild ;
        if(rightchild != -1){
            binarytree<int>* child = new binarytree<int>(rightchild);
            front->right = child ;
            pendingnodes.push(child);
        }

    }
    return root ;
}
int countnodes(binarytree<int>*root){
    if(root == NULL){
        return 0 ;
    }
    return 1 + countnodes(root->left) + countnodes(root->right);
    
}

int heightoftree(binarytree<int>*root){
    if(root == NULL){
        return 0 ;
    }
    return 1 + max(heightoftree(root->left) , heightoftree(root->right));
}
void preordertraveresal(binarytree<int>*root){
    if(root == NULL){
        return  ;
    }
    cout << root->data << " "  ;
    preordertraveresal(root->left);
    preordertraveresal(root->right);
}
void inordertraveresal(binarytree<int>*root){
    if(root == NULL){
        return  ;
    }
    inordertraveresal(root->left);
    cout << root->data << " " ;
    inordertraveresal(root->right);
}
void postordertraveresal(binarytree<int>*root){
    if(root == NULL){
        return  ;
    }
    postordertraveresal(root->left);
    postordertraveresal(root->right);
    cout << root->data << " " ;
}

bool FindNodeInTree(binarytree<int>*root , int x){
    if(root == NULL){
        return false;
    }
    else if(root->data == x){
        return true ;
    }
    FindNodeInTree(root->left , x) || FindNodeInTree(root->right , x );
}

int SumOfRoot(binarytree<int>*root){
    if(root == NULL){
        return 0 ;
    }
    return root->data + SumOfRoot(root->left) + SumOfRoot(root->right);
}
int getsum(binarytree<int>*root){
    if(root == NULL){
        return 0 ;
    }
    return root->data + getsum(root->left) + getsum(root->right);
}
int maximum(binarytree<int>*root){
    if(root == NULL){
        return INT_MIN;
    }
    return max(root->data , max(maximum(root->left) , maximum(root->right)));

}
int minimum(binarytree<int>*root){
    if(root == NULL){
        return INT_MAX ;
    }
    return min(root->data , min(minimum(root->left) , minimum(root->right)));
}
bool checkBSTbasic(binarytree<int>*root){
    if(root == NULL){
        return true ;
    }
        int leftmax = maximum(root->left);
        int rightmin = minimum(root->right);
        bool output = (root->data > leftmax  && root->data <= rightmin) && checkBSTbasic(root->left) && checkBSTbasic(root->right); 
        return output ;
}
bool somecorrect(binarytree<int>*root){ // check bst basic
    if(root == NULL ){
        return true ;
    }
    return (root->data > somecorrect(root->left) && (root->data <= somecorrect(root->right)));
     
}
bool CheckBST3(binarytree<int>*root , int min = INT_MAX  , int max = INT_MIN){
    if(root == NULL){
        return true ;
    }
    if(root->data < min && root->data > max){
        return false ;
    }
    bool isleftok = CheckBST3(root->left , min , root->data -1);
    bool isrightok = CheckBST3(root->right , root->data , max);
    return (isleftok && isrightok);
}

int main(){
    binarytree<int >* root = takeinputlevelwise() ;
    printtree(root);
    cout <<"total nodes are :->1" << countnodes(root) << endl ;
    cout<< "Height of Tree" << heightoftree(root);
    preordertraveresal(root);
    cout << endl ;
    inordertraveresal(root) ;
    cout << endl ;
    postordertraveresal(root);
    cout << endl;
   /* int x ;
    cout << "enter the data to be find" << endl ;
    cin >> x ;
    cout << FindNodeInTree(root , x);
    delete root ;*/
    cout << "checkBSTCALLED" << endl;
    cout << checkBSTbasic(root) << endl;
    cout << somecorrect(root) << endl ;
    cout << CheckBST3(root) << endl ;
}