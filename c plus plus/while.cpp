//=============================================
// C++ Programming in easy steps 4ed. [3:50]
//=============================================

#include <vector>
#include <iostream>
using namespace std ;

int main()
{
  int i = 0 ; 
  vector <int> vec(10) ;

  while ( i < vec.size() )
  {
    i++ ; // 1 - 10

    // Uncomment the next line to skip at three.
    // if ( i== 3 ) { cout << " | Skipped" ; continue ; }

    // Uncomment the next line to break on eight.
    // if ( i == 8 ) { cout << endl << "Done" ; break ; }

    vec[ i-1 ] = i ;	// vec[0] = 1, vect[1] = 2, etc.

    cout << " | " << vec.at( i-1 ) ;
  }
  cout << endl;

  return 0 ;
}
