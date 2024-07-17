#include <iostream>
#include <map>
#include <string>

int main() {
    // creating map
    std::map<int, std::string> myMap;
    //populating
    myMap.insert(std::pair<int, std::string>(1, "Hello, World!"));
    myMap[1] = "another way"; // this overwrote "Hello, World!". Seems it does not start at zero.
    myMap.insert(std::pair<int, std::string>(2, "Into the Radius"));
    myMap[4] = "Double Helix"; // I like this way.
    myMap[3] = "Mandelbrot";
    myMap.insert({5, "set"}); // what std::pair does. interesting.
    
    std::map<int, std::string>::iterator it; // iterator for going over map
    std::cout << "myMap:\n";
    std::cout << "\tKey:\tElement:\n";
    for ( it = myMap.begin(); it != myMap.end(); ++it ) {
        std::cout << "\t" << it->first << "\t" << it->second << std::endl;
    }
    std::cout << std::endl;

    std::cout << "myMap after removing all elements less than three:\n";
    std::cout << "\tKey:\tElement:\n";
    myMap.erase(myMap.begin(), myMap.find(3));
    for ( it = myMap.begin(); it != myMap.end(); ++it ) {
        std::cout << "\t" << it->first << "\t" << it->second << std::endl;
    }
    std::cout << std::endl;

    return 0;
}
