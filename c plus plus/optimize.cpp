//=============================================
// C++ Programming in easy steps 4ed. [3:58]
//=============================================

#include <iostream>
using namespace std ;

int computeFactorials( int, int ) ;
int factorial( int ) ;

// Replace the factorial declaration and definition with the inline declaration below.
// inline int factorial( int n )
// { return ( n == 1 ) ? 1 : ( factorial( n - 1 ) * n ); }

// BONUS - Uncomment the function below and insert "verbose(n);"
// at the start of the factorial function to see what is happening in this program.
// inline void verbose(int n)
// {cout << n ; ( n == 1 ) ? cout << " = " : cout << "x" ; }

int main()
{
  computeFactorials( 1, 15 ) ;
  return 0 ;
}

int computeFactorials( int num, int max )
{
  cout << "Factorial of " << num << ": " ;
  cout << factorial( num ) << endl ;
  num++ ;
  if( num > max ) return 0 ;
  else computeFactorials( num , max ) ;
}

int factorial( int n )
{
  int result ;
  if( n == 1 ) result = 1 ;
  else
  result = ( factorial( n - 1 ) * n );
  return result ;
}
