#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int MaxValue(int numbers[], int size) {
    int _max = 0;
    for (int i = 1; i < size; i++) {
        if (numbers[i] > numbers[_max]) {
            _max = i;
        }
    }
    cout << "\nMax Value: " << numbers[_max] << " index: " << _max << endl;
    return numbers[_max];
}

void _Print(int numbers[], int size) {
    for (int i = 0; i < size; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;
}

void countingSort(int numbers[], int size, int offset) {
    const int max = size;
    int output[size]; // second array for sorting
    int count[max] = {0};
    
    // set all elements in count array to 0
    //for (int i = 0; i < max; i++) {
    //    count[i] = 0;
    //}

    // Calculate count of elements ..?
    for (int i = 0; i < size; i++) {
        count[(numbers[i] / offset) % 10]++;
    }

    // Calculate cumulative count
    for (int i = 1; i < max; i++) {
        count[i] += count[i-1];
    }

    // Place the elements in sorted order
    for (int i = size-1; i >=0; i--) {
        output[count[(numbers[i] / offset) % 10] - 1] = numbers[i];
        count[(numbers[i] / offset) % 10]--;
    }

    // copying the entire array. thats efficient :/ 
    for (int i = 0;i < size; i++) {
        numbers[i] = output[i];
    }
}

void RadixSort(int numbers[], int size) {
    int max = MaxValue(numbers, size);
    for (int offset = 1; max / offset >0; offset*=10) {
        countingSort(numbers, size, offset);
    }
}

int main() {
    cout << "Generating array of 30 random ints up to 999\n";
    srand(time(0));
    int size = 30;
    int numbers[size];
    for (int i = 0; i < size; i++) {
        numbers[i] = rand() % 1000;
    }
    cout << "Before: \n";
    _Print(numbers, size);
    RadixSort(numbers, size);
    cout << "\nAfter: \n";
    _Print(numbers, size);
}
