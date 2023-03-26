#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(){
            this->data = 0;
            this->next = NULL;
        }

        Node(int data){
            this->data = data;
            this->next = NULL;
        }

        ~Node(){
            cout << "inside destructor" << endl;
            if (this->next != NULL){
                delete next;
            }
            cout << this->data << endl;
        }
};

int main(int argc, char const *argv[])
{
    cout << "Name : Archit Jain" << endl;
    cout << "Class : Btech-CseB" << endl;
    cout << "Roll No : 72-cseb-21" << endl;
    
    Node* head = new Node(10);
    head->next = new Node(20);

    Node* temp = head;
    cout << "linked list is : \n";
    while (temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }cout << endl;

    //will delete entire linked list
    delete head;

    return 0;
}
