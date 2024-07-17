#include <iostream>
#include <string>
#include <unordered_map>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <queue>

// linked list of objects in array

/*
int hash(std::string tmp) {
    int out = 0;
    for (int i = 0; i < tmp.length(); i++) {
        out += (int)tmp[i];
    }
    return out % tmp.length();
}
*/

struct Person {
    std::string name;
    int age;
    std::string data;
};

struct Node {
    Person person;
    Node *next = NULL;
};

int main() {
    //std::vector<Node*> hashTable;
    std::unordered_map<std::string, Node*> hashTable;
    // populate hashtable with head nodes.
    for ( int i = 0; i < 7; i++ ) {
        Node *n = new Node;
        n->person.name = "head";
        //copy pasted because im lazy. Could be better with an array of the names as a const global, and indexing.
        switch (i) {
            case 0:
                hashTable.emplace("ness", n);
                break;
            case 1:
                hashTable.emplace("paula", n);
                break;
            case 2:
                hashTable.emplace("jeff", n);
                break;
            case 3:
                hashTable.emplace("poo", n);
                break;
            case 4:
                hashTable.emaplce("Mr. Saturn", n);
                break;
            case 5:
                hashTable.emplace("billy", n);
                break;
            default:
                hashTable.emplace("wilson", n);
        }

    }

    // line for unsorted nodes.
    //std::queue<Node> line;

    // generating time :)
    std::srand(time(0));
    for ( int i = 0; i < 30; i++) {
        // making thirty people for hashtable
        //std::string out;
        int tmp;
        Node* n = new Node;

        // generate age
        n->person.age = 18 + (std::rand() % (30-18+1));

        // generate name
        tmp = 1 + (std::rand() % (6-1+1));
        switch (tmp) {
            // these need to be fixed!
            case 1:
                n->person.name = "ness";
                hashTable[0]->next = n;
                break;
            case 2:
                n->person.name = "paula";
                hashTable[1]->next = n;
                break;
            case 3:
                n->person.name = "jeff";
                hashTable[2]->next = n;
                break;
            case 4:
                n->person.name = "poo";
                hashTable[3]->next = n;
                break;
            case 5:
                n->person.name = "Mr. Saturn";
                hashTable[4]->next = n;
                break;
            case 6:
                n->person.name = "billy";
                hashTable[5]->next = n;
                break;
            default:
                n->person.name = "wilson";
                hashTable[6]->next = n;
        }

        delete n;

        // n->person.data left blank for later use. would have been generated here.
        //line.emplace(n);
    }

    // print it all out.
    Node *n;
    for (int i = 0; i < 7; i++) {
        while (hashTable[i].next != NULL) {
            n = hashTable[i].next;
            std::cout << " -> " << "Name: " << n->person.name << " Age: " << n->person.age << " Data: " << n->person.data << std::endl;
        }
        std::cout << " -> NULL\n";
    }
    delete n;

    /*
    std::cout << "HashMap:\n";
    std::cout << "\tKey:\tValue:\n";
    for (std::unordered_map<int, std::string>::iterator it = hashMap.begin(); it != hashMap.end(); ++it) {
        std::cout << "\t" it->first << "\t" << it->second << std::endl;
    }
    std::cout << std::endl;


    std::cout << "HashTable:\n";
    std::cout << "\tKey:\tList:\n";
    //std::unordered_map<int, *node>::iterator it;
    std::vector<*node>::iterator it;
    for (it = hashTable.begin(); it != hashTable.end(); ++it ) {
        std::cout << "\t" << it->first << "\t" << it->second->data << std::endl;
    }
    */

    return 0;
}
