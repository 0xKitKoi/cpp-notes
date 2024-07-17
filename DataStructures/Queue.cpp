#include <iostream>
#include <queue>

int main() {
    std::queue<int> Q;
    
    // Populate the queue
    for (int i = 2; i <= 10; i=i+2) {
        Q.push(i);
    }

    while (!Q.empty()) {
        std::cout << "\t" << Q.front() << std::endl;
        Q.pop(); // remove first one in line
        std::cout << "Size of Queue: " << Q.size() << std::endl;
    }
}
