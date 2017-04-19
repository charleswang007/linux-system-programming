//=============================================
// C++ Programming in easy steps 4ed. [3:44]
//=============================================

#include <iostream>
using namespace std ;

int main()
{
  int num = 8 ;
  char letter = 'A' ;

  if( num > 5 )
  {
    cout << "Number exceeds five" << endl ;

    if( letter != 'A' )
    {
      cout << "Letter is not A" << endl ;
    }
    else
    {
      cout << "Letter is A" << endl ;
    }

  }
  else { cout << "Number is five or less" << endl ; }

  return 0 ;
}
