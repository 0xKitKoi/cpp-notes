#include <string>
#include <vector>
#include <iostream>

using namespace std;
/* Try this input. 
AMELIA.SMITH 
JACK.JONES 
OLIVIA.WILLIAMS 
DANIEL.TAYLOR 
LILY.BROWN 
SAMUEL.DAVIES 
MIA.EVANS 
JOSEPH.WILSON 
ISABELLA.THOMAS 
POPPY.JOHNSON 
JESSICA.ROBERTS 
GRACE.ROBINSON 
JORDAN.THOMPSON 
CONNOR.WRIGHT 
SOPHIA.WALKER 
MATTHEW.WHITE 
LIAM.EDWARDS 
JOSHUA.HUGHES 
JAMES.GREEN 
RYAN.HALL 
THOMAS.LEWIS 
AVA.HARRIS 
EMILY.CLARKE 
SOPHIE.PATEL 
LUKE.JACKSON 
ABIGAIL.COX 
MATILDA.RICHARDS 
ELIZA.KHAN 
BELLA.MARSHALL 
EVELYN.ANDERSON 
MARK.SIMPSON 
AMBER.ELLIS 
ROSIE.ADAMS 
SAM.SINGH 
MAYA.BEGUM 
ANTHONY.WILKINSON 
PATRICK.FOSTER 
BRANDON.CHAPMAN 
GEORGIA.POWELL 
HOLLIE.WEBB 
GRACIE.ROGERS 
BROOKE.GRAY 
EMMA.MASON 
TYLER.HUNT 
JASMINE.HUSSAIN 
AMELIA.CAMPBELL 
NICHOLAS.MATTHEWS 
SCOTT.OWEN 
DYLAN.PALMER 
JASON.HOLMES 
-1
*/

// TODO: Write the partitioning algorithm - pick the middle element as the
//       pivot, compare the values using two index variables l and h (low and high),
//       initialized to the left and right sides of the current elements being sorted,
//       and determine if a swap is necessary
int Partition(vector<string> &userIDs, int i, int k) {
   // setting up the partitioning
   bool done = false; // for the while loop
   string temp; // for swapping based off of pivot
   int l, h; // for index positioning
   
   int midpoint = i + (k-i) / 2;
   string pivot = userIDs[midpoint]; // grab last element and use as pivot
   l = i;
   h = k;
   
   while(!done) {
      // increment l while userIDs[l] < pivot
      while (userIDs[l] < pivot) {
         ++l; //  going forwards, finding first position thats greater than pivot
      }
      // Decrement h while pivot < underIDs[h];
      while (pivot < userIDs[h]) {
         --h; // going backwards, finding first position less than pivot
      }
      
      // If there are zero or one elements remaining, that means all of the numbers are partitioned, so return h;
      if (l >= h) {
         done = true;
      }
      else {
         // Swap userIDs[l] and userIDs[h], update l and h;
         temp = userIDs[l];
         userIDs[l] = userIDs[h];
         userIDs[h] = temp;
         ++l;
         --h;
      }
   }
   return h;
}

// TODO: Write the quicksort algorithm that recursively sorts the low and
//       high partitions
void Quicksort(vector<string> &userIDs, int i, int k) {
   int j;
   // Base case: if there are 1 ore 0 elements, it's sorted already.
   if (i >=k) {
      return;
   }
   // partition the datat within the array. Value j is returned from partitioning is the
   // location in the last index in the low partition.
   j = Partition(userIDs, i, k);
   // Recursively sort low partition (i to j) and high partition (j +1 to k)
   Quicksort(userIDs, i, j);
   Quicksort(userIDs, j+1, k);
}

int main() {
   vector<string> userIDList;
   string userID;

   cin >> userID;
   while (userID != "-1") {
      userIDList.push_back(userID);
      cin >> userID;
   }

   // Initial call to quicksort
   Quicksort(userIDList, 0, userIDList.size() - 1);

   for (size_t i = 0; i < userIDList.size(); ++i) {
      cout << userIDList.at(i) << endl;;
   }

   return 0;
}
