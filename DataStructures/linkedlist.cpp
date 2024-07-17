#include <iostream>

int main() {

    struct node {
        int data;
        node* next;
    };

    node *n = new node; 
    node *t = new node; // tmp
    node *h = n; // head of list.

    n->data = 1;
    n->next = t;

    n = t;
    t = new node;
    n->data = 2;
    n->next = t;
    t->data = 3;
    t->next = NULL;

    // go down the list printing the data in each node.
    t = h;
    for (int i = 0; i < 3; i++) {
        std::cout << t->data << std::endl;
        t = t->next;
    }
}
