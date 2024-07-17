#include <iostream>

using namespace std;

/**
   Computes a Fibonacci number.
   @param n an integer
   @return the nth Fibonacci number
*/
unsigned long long fib(unsigned long long n)
{  
   if (n <= 2) { return 1; }
   unsigned long long fold = 1;
   unsigned long long fold2 = 1;
   unsigned long long fnew;
   for (unsigned long long i = 3; i <= n; i++)
   {  
      fnew = fold + fold2;
      fold2 = fold;
      fold = fnew;
   }
   cout << "N: " << fnew << endl;
   return fnew;
}

int main()
{  
   cout << "Enter n: ";
   unsigned long long n;
   cin >> n;
   unsigned long long f = fib(n);
   cout << "fib(" << n << ") = " << f << endl;
   return 0;
}
