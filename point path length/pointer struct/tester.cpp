#include <iostream>
using namespace std;

struct Point
{
   double x;
   double y;
   Point * next;
};

double path_length(Point* list);

Point* make_point(double x, double y, Point* next)
{
   Point* result = new Point;
   result->x = x;
   result->y = y;
   result->next = next;
   return result;
}

int main()
{
   Point* e = make_point(0, 0, nullptr);
   Point* d = make_point(1, 0, e);
   Point* c = make_point(1, 1, d);
   Point* b = make_point(0, 1, c);
   Point* a = make_point(0, 0, b);
 
   cout << path_length(a) << endl;
   cout << "Expected: 4" << endl;
   cout << path_length(a->next) << endl;
   cout << "Expected: 3" << endl;
   return 0;
}