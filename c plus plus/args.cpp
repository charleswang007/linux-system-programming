//=============================================
// C++ Programming in easy steps 4ed. [3:54]
//=============================================

#include <iostream>
using namespace std ;

float fToC( float degreesF = 32.0 ) ;

int main()
{
  float fahrenheit, centigrade ;

  cout << "Enter a Fahrenheit temperature: " ;
  cin >> fahrenheit ;

  centigrade = fToC( fahrenheit ) ;

  cout << fahrenheit << "F is " << centigrade << "C" ;
  cout << endl << "Freezing point: " << fToC() << "C" ;

  cout << endl ;
  system("PAUSE") ;
  return 0 ;
}

float fToC( float degreesF )
{
  float degreesC = ( (5.0 / 9.0 ) * ( degreesF - 32.0 ) ) ;
  return degreesC ;
}
