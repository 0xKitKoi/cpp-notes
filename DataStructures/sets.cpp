#include <iostream>
#include <set>

int main() {
    // make a set
    std::set<int> mySet;
    
    //populating
    mySet.insert(1);
    mySet.insert(1); // notice the duplicates
    mySet.insert(2);
    mySet.insert(2);
    mySet.insert(3);
    mySet.insert(8); // notice 8 is before 4.
    mySet.insert(4);

    std::cout << "Entire set:\t\t";
    std::set<int>::iterator it; // iterator to iterat over set
    for ( it = mySet.begin(); it != mySet.end(); ++it) {
        std::cout << " " << *it; // strange way of printing
    }
    std::cout << std::endl;
    
    std::cout << "Set after erasing 4:\t";
    mySet.erase(4); // erasing element
    for ( it = mySet.begin(); it != mySet.end(); ++it ) {
        std::cout << " " << *it;
    }
    std::cout << std::endl;
}
