//  fig03_15_opt.cpp
// Recursive fibonacci function optimised call - no redundant calculations.
// Idea from Dmitrieva M., Kubenski A. 
// Elements of contemporary programming. St-Petersburg, 1991.
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

unsigned long fibonopt
( unsigned long, unsigned long, unsigned long, unsigned long ); // function prototype

int main()
{
   unsigned long result, number;

   // obtain integer from user
   cout << "Enter an integer for calculating n-th Fibonacci number: ";
   cin >> number;

   // calculate fibonacci value for number input by user
   result = fibonopt( 1,number, 0, 1 );

   // display result
   cout << "Fibonacci(" << number << ") = " << result << endl;
   system("pause");
   return 0;  // indicates successful termination

} // end main

// recursive definition of function fibonacci
unsigned long fibonopt
( unsigned long k,unsigned long n, unsigned long fk1, unsigned long fk )
{
   // base case
   if ( k == n  )  
      return fk;

   // recursive step
   else             
      return fibonopt( k+1, n, fk, fk+fk1 );

} // end function fibonopt

