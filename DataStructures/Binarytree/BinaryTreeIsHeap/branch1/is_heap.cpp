#include <iostream>
#include "binary_tree.h"

using namespace std;

int main() {
    bool is_heap = true;
    BinaryTree question_tree(80,
        BinaryTree(25,
            BinaryTree(16, BinaryTree(7), BinaryTree(9)),
            BinaryTree(10, BinaryTree(4), BinaryTree(0))), // this is a heap, but upon changing the leaf nodes to a higher value then the previous nodes will throw is_heap to be false.
        BinaryTree(57, BinaryTree(43), BinaryTree(29))
    );

   bool done = false;
   int MAX = question_tree.data();
   int prev = MAX;

    while (!done) {
        BinaryTree left = question_tree.left();
        BinaryTree right = question_tree.right();

        if (left.empty() && right.empty()) {
            cout << question_tree.data() << endl;
            done = true;
        }
        else {
            string response;
            do {
                cout << question_tree.data() << " (l/r): ";
                cin >> response;
            }
            while (response != "l" && response != "r");

            if (left.data() > MAX || right.data() > MAX ) {
                cout << left.data() << " - " << MAX << " || " << right.data() << " - " << MAX << endl;
                is_heap = false;
            }
            if (left.data() > prev || right.data() > prev) {
                cout << left.data() << " - " << prev << " || " << right.data() << " - " << prev << endl;
                is_heap = false;
            }

            if (response == "l") {
                prev = question_tree.data();
                question_tree = left;
            }
            else {
                prev = question_tree.data();
                question_tree = right;
            }
        }
    }


    if (is_heap) {
        cout << "Either Binary Tree is a heap, or only the path that you took is.\n";
    }
    else {
        cout << "Binary Tree is not a heap! some data is bigger than the head of the tree. \n";
    }

    return 0;
}
