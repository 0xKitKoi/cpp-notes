#include <iostream>

using namespace std;

// TODO: Write a void function SelectionSortDescendTrace() that takes
//       an integer array and the number of elements in the array as arguments,
//       and sorts the array into descending order.
void swap(int& x, int& y)
{
   int temp = x;
   x = y;
   y = temp;
}

int MaxPosition(int numbers[], int from, int to) {
   int _max=from;
   for (int i = from+1; i <= to; i++) {
      if (numbers[i] > numbers[_max]) {
         _max = i;
      }
   }
   return _max;
}

void PrintAll(int numbers[], int numElements) {
   for (int i = 0; i < numElements; i++) {
      cout << numbers[i] << " ";
   }
   cout << endl;
}

void SelectionSortDescendTrace(int numbers [], int numElements) {
   int next;
   int _max;
   for (next = 0; next < numElements-1; next++) {
      //if (numbers[next] > numbers[_max]) {
      _max = MaxPosition(numbers, next, numElements-1);
      swap(numbers[_max], numbers[next]);
      //_max = next;
         //PrintAll(numbers, numElements);
      //}
      PrintAll(numbers, numElements);
   }
}


int main() {
   int input, i = 0;
   int numElements = 0;
   int numbers[10];

   // TODO: Read in a list of up to 10 positive integers; stop when
   //       -1 is read. Then call SelectionSortDescendTrace() function.
   for (; i < 10; i++) {
      //cout << "int " << i << ": -> ";
      cin >> input;
      if (input < 0) {
         break;
      }
      else {
         numbers[i] = input;
         ++numElements;
      }
   }
   SelectionSortDescendTrace(numbers, numElements);
   
  return 0;
}
