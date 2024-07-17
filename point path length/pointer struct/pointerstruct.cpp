#include <cmath>
#include <iostream>
using namespace std;

struct Point
{
   double x;
   double y;
   Point* next;
};

double path_length(Point* first)
{
   double result = 0.0;

   Point* p = first;

   while (p->next != nullptr)
   {
      Point* q = p->next;
      if (q != nullptr)
      {
         result = result + sqrt(pow((p->x - q->x), 2) + pow((p->y - q->y), 2)); // cast to int to pass?
        cout << result << endl;
      }
      p = q;
   }

   return result;
}
