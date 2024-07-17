#include<iostream>
using namespace std;
class IntNode {
    public:
        IntNode(int dataInit);
        int GetNodeData();
        IntNode* GetNext();
        void InsertAfter(IntNode* newNode);

    private:
        int dataVal;
        IntNode* nextNodePtr;
};
// Constructor
IntNode::IntNode(int dataInit) {
    this->dataVal = dataInit; 
    nextNodePtr = nullptr;
}

// Get node value
int IntNode::GetNodeData() {
    return this->dataVal;
}

IntNode* IntNode::GetNext() {
    return this->nextNodePtr;
}
void IntNode::InsertAfter(IntNode* newNode) {
    IntNode* tempNext = this->nextNodePtr;
    this->nextNodePtr = newNode;
    newNode->nextNodePtr = tempNext;
}
int FindMax(IntNode* headNode) {
    int max = -99; // if list is empty
    IntNode* currNode = headNode; // start at head of list
    if (headNode->GetNext() == nullptr) {  return max; }
    while (currNode != nullptr) { // while not at end of list
        if (currNode->GetNodeData() > max) { // if currNode data > max
            max = currNode->GetNodeData(); // update max
        } 
        currNode = currNode->GetNext(); // move to next node
    } 
    return max; // return max
}
int main(){
    IntNode* headNode = new IntNode(-99);
    IntNode* currNode;
    IntNode* lastNode;
    int max;
    lastNode = headNode;
    for (int i = 0; i < 20; i++) {
      currNode = new IntNode(i);
      lastNode->InsertAfter(currNode);
      lastNode = currNode;
    }
    max = FindMax(headNode);
    cout << "Max is " << max;
    return 0;
}
