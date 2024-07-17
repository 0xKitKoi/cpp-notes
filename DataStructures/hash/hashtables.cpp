#include <iostream>
#include <unordered_map>
#include <string>

int main() {
    std::unordered_map<std::string, std::string> hashTable;
    hashTable.emplace("classic", "Hello, World!\n");

    std::cout << hashTable["classic"];
    return 0;
}
