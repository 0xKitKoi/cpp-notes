#include <cmath>
using namespace std;

struct Point
{
   double x;
   double y;
};

double path_length(Point path[], int size)
{
   double result = 0.0;

for (int i = 0; i < size-1; i++) {
   result += sqrt(pow((path[i].x - path[i+1].x),2) + pow((path[i].y - path[i+1].y), 2));
   }


   return result;
}