#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Read integers from input and store them in a vector.
// Return the vector.
vector<int> ReadIntegers() {
    int size;
    printf("size -> ");
    cin >> size;
    vector<int> integers(size);
    for (int i = 0; i < size; ++i) { // Read the numbers
        printf("int %d -> ", i);
        cin >> integers.at(i);
    }
    sort(integers.begin(), integers.end());
    return integers;
}

int recursions = 0;
int comparisons = 0;

int BinarySearch(int target, vector<int> integers, int lower, int upper) {
    recursions++;
    if (lower > upper)
        return -1;

    int mid = (lower + upper) / 2;
    if (integers[mid] == target) {
        comparisons++;
        return mid;
    } else if (lower == upper) {
        comparisons++;
        return -1;
    } else if (target < integers[mid]) {
        comparisons += 2;
        return BinarySearch(target, integers, lower, mid - 1);
    } else {
        comparisons += 2;
        return BinarySearch(target, integers, mid + 1, upper);
    }
}

int main() {
    int target;
    int index;

    vector<int> integers = ReadIntegers();
    printf("Target -> ");
    cin >> target;
    index = BinarySearch(target, integers, 0, integers.size() - 1);
    printf("index: %d, recursions: %d, comparisons: %d\n", index, recursions, comparisons);
    return 0;
}
