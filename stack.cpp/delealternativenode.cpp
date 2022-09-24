#include<iostream>
#define null NULL
using namespace std;
class Node {
public:
    int data;
    Node * next;
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
    ~Node() {
        if(next) {
            delete next;
        }
    }
};

void deleteAlternateNodes(Node *head) {
    if(head == NULL){
        return;
    }

    Node* prev = head;
    Node* temp = head;

    int count = 0;
    while(temp != NULL){
        if(count % 2 != 0){
			Node* save = temp -> next;
            prev -> next = save;
            free(temp);
            temp = save;
            prev = save;
            count++;
        }
        else{
            temp = temp -> next;
            count++;
        }
    }
}

Node* takeinput() {
    int data;
    cin >> data;
    Node *head = NULL, *tail = NULL;
    while(data != -1){
        Node *newNode = new Node(data);
        if(head == NULL) {
            head = newNode;
            tail = newNode;
        }
        else{
            tail -> next = newNode;
            tail = newNode;
        }
        cin >> data;
    }
    return head;
}

void print(Node *head) {
    Node *temp = head;
    while(temp != NULL) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

int main() {
    Node *head = takeinput();
    deleteAlternateNodes(head);
    print(head);
    delete head;
    return 0;
}