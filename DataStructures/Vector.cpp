#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec;
    std::cout << "Enter some numbers, -1 to stop.\n";
    bool done = false;
    while (!done) {
        std::cout << "-> ";
        int tmp;
        std::cin >> tmp;
        if (tmp == -1) {
            done = true;
            break;
        }
        vec.push_back(tmp);
    }
   
    std::cout << "\nVector: \n";
    for (int i = 0; i < vec.size(); i++) {
        std::cout << "\t" << i << ": " << vec.at(i) << std::endl;
        if (vec.at(i) == 121) {
            std::cout << "http://scuzzy.ml/\n";
        }
    }
}
