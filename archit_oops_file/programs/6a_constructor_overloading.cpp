#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(){
            this->data = 2;
            this->next = NULL;
        }

        Node(int data){
            this->data = data;
            this->next = NULL;
        }

        Node(Node* &node){
            this->data = node->data;
            this->next = node->next;
        }
};

int main(int argc, char const *argv[])
{
    cout << "Name : Archit Jain" << endl;
    cout << "Class : Btech-CseB" << endl;
    cout << "Roll No : 72-cseb-21" << endl;
    Node* newNode1 = new Node;
    cout << "data of node1 by default constructor" << " ";
    cout << newNode1->data << endl;

    Node* newNode2 = new Node(10);
    cout << "data of node2 by parametrized constructor" << " ";
    cout << newNode2->data << endl;

    Node* newNode3 = new Node(newNode2);
    cout << "data of node3 by copy constructor" << " ";
    cout << newNode3->data << endl;

    return 0;
}
