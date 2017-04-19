//=============================================
// C++ Programming in easy steps 4ed. [4:64]
//=============================================

#include <string>
#include <iostream>
using namespace std ;

int main()
{
  string name ;

  cout << "Please enter your full name: ";
  cin >> name ;

  cout << "Welcome " << name << endl ;

  cout << "Please re-enter your full name: " ;

  // Uncomment the next line to correct this program.
  cin.ignore( 256, '\n' );
  getline( cin, name ) ;

  cout << "Thanks, " << name << endl ;

  return 0 ;
}
