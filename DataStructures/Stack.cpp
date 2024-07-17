#include <iostream>
#include <stack>

int main() {

    std::stack <int> Stack;

    // Populate the stack
    for (int i = 10; i <= 100; i = i+10) {
        Stack.push(i);
    }

    while (!Stack.empty()) {
        std::cout << " " << Stack.top() << std::endl;
        Stack.pop(); // You can only access the element at the top of the stack.
    }

// Computers use a stack frame to keep track of the function calls.
// it pushes the address the stack pointer is on to the top of the stack,
// then calls the function so that when the function completes, it pops
// off the top until it reaches the address of the stack pointer that was placed,
// then increments it and keeps going. I thought that was interesting. 
}
