#include <iostream>
using namespace std;

class Node {
public:
    int key;
    int data;
    Node* next;

    Node() {
        key = 0;
        data = 0;
        next = NULL;
    }

    Node(int k, int d) {
        this->data = d;
        this->key = k;
        next = NULL;
    }
};


class SinglyLinkedList {
public:

    Node* head;

    SinglyLinkedList() {
        head = NULL;
    }

    SinglyLinkedList(Node* n) {
        head = n;
    }

    Node* nodeExists(int k) {
        Node* temp = NULL;
        Node* ptr = head;

        while (ptr != NULL) {
            if (ptr->key == k) {
                temp = ptr;
            }
            ptr = ptr->next;
        }

        return temp;
    }

    void appendNode(Node* n) {
        if (nodeExists(n->key) != NULL) {
            cout << "Node already exists with the key value: " << n->key << "Try a different key value." << endl;
        }
        else {
            if (head == NULL) {
                head = n;
                cout << "Node Appended" << endl;
            }
            else {
                Node* ptr = head;
                while (ptr->next != NULL) {
                    ptr = ptr->next;
                }
                ptr->next = n;
                cout << "Node Appended" << endl;
            }
        }
    }

    void prependNode(Node* n) {
        if (nodeExists(n->key) != NULL) {
            cout << "Node already exists with the key value: " << n->key << "Try a different key value." << endl;
        }
        else {
            n->next = head;
            head = n;
            cout << "Node Prepended" << endl;
        }
    }

    void insertnode(int k, Node* n) {
        Node* ptr = nodeExists(k);
        if (ptr == NULL) {
            cout << "There is no Node with the key vlue." << endl;
        }
        else {
            if (nodeExists(n->key) != NULL) {
                cout << "There is another Node with the key value." << n->key << "Please change the key value." << endl;
            }
            else {
                n->next = ptr->next;
                ptr->next = n;
                cout << "Node Inserted." << endl;
            }
        }
    }

    void deleteNode(int k) {
        if (head == NULL) {
            cout << "The list is already empty." << endl;
        }
        else if (head->key == k) {
            Node* temp = head;
            head = head->next;
            delete temp;
            cout << "Node is deleted" << endl;
        }
        else {
            Node* previous = head;
            Node* current = head->next;

            while (current != NULL) {
                if (current->key == k) {
                    previous->next = current->next;
                    delete current;
                    cout << "Node is deleted" << endl;
                    return;
                }
                else {
                    previous = previous->next;
                    current = current->next;
                }
            }
            cout << "There is no node with the key value: " << k << endl;
        }
    }

    void updateNode(int k, int d) {
        Node* ptr = nodeExists(k);
        if (ptr != NULL) {
            ptr->data = d;
            cout << "Node updated successfully." << endl;
        }
        else {
            cout << "There is no node with this key value." << k << endl;
        }
    }

    void printList() {
        if (head == NULL) {
            cout << "No Nodes in Singly Linked List";
        }
        else {
            cout << endl << "Singly Linked List Values : ";
            Node* temp = head;

            while (temp != NULL) {
                cout << "(" << temp->key << "," << temp->data << ") --> ";
                temp = temp->next;
            }
        }

    }
};


int main()
{   
    SinglyLinkedList s;
    int option;
    int key1, k1, data1;
    do {
        cout << "\nWhat operation do you want to perform? Select Option number. Enter 0 to exit." << endl;
        cout << "1. appendNode()" << endl;
        cout << "2. prependNode()" << endl;
        cout << "3. insertNodeAfter()" << endl;
        cout << "4. deleteNodeByKey()" << endl;
        cout << "5. updateNodeByKey()" << endl;
        cout << "6. print()" << endl;
        cout << "7. Clear Screen" << endl << endl;

        cin >> option;
        Node* n1 = new Node();
        //Node n1;

        switch (option) {
        case 0:
            break;
        case 1:
            cout << "Append Node Operation \nEnter key & data of the Node to be Appended" << endl;
            cin >> key1;
            cin >> data1;
            n1->key = key1;
            n1->data = data1;
            s.appendNode(n1);
            //cout<<n1.key<<" = "<<n1.data<<endl;
            break;

        case 2:
            cout << "Prepend Node Operation \nEnter key & data of the Node to be Prepended" << endl;
            cin >> key1;
            cin >> data1;
            n1->key = key1;
            n1->data = data1;
            s.prependNode(n1);
            break;

        case 3:
            cout << "Insert Node After Operation \nEnter key of existing Node after which you want to Insert this New node: " << endl;
            cin >> k1;
            cout << "Enter key & data of the New Node first: " << endl;
            cin >> key1;
            cin >> data1;
            n1->key = key1;
            n1->data = data1;

            s.insertnode(k1, n1);
            break;

        case 4:

            cout << "Delete Node By Key Operation - \nEnter key of the Node to be deleted: " << endl;
            cin >> k1;
            s.deleteNode(k1);

            break;
        case 5:
            cout << "Update Node By Key Operation - \nEnter key & NEW data to be updated" << endl;
            cin >> key1;
            cin >> data1;
            s.updateNode(key1, data1);

            break;
        case 6:
            s.printList();

            break;
        case 7:
            system("cls");
            break;
        default:
            cout << "Enter Proper Option number " << endl;
        }

    } while (option != 0);

    return 0;
    
    return 0;
}