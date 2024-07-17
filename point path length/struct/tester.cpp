#include <iostream>
using namespace std;

struct Point
{
   double x;
   double y;
};

double path_length(Point path[], int size);

Point make_point(double x, double y)
{
   Point result;
   result.x = x;
   result.y = y;
   return result;
}

int main()
{
   Point a[] =
      {
         make_point(0, 0),
         make_point(0, 1),
         make_point(1, 1),
         make_point(1, 0),
         make_point(0, 0)
      };

   cout << path_length(a, 5) << endl;
   cout << "Expected: 4" << endl;

   Point b[] =
      {
         make_point(1, 0),
         make_point(0, 1),
         make_point(-1, 0),
         make_point(0, -1)
      };

   cout << path_length(b, 4) << endl;
   cout << "Expected: 4.24264" << endl;

   return 0;
}