#include <iostream>
using namespace std;

int main() 
{
  
  int a = 1, b = 2;
  
  if(a-- > 0 && ++b > 2)
    cout << "Inside If" << endl;
  else
  cout << "Inside Elese" << endl;
  
  cout << a << " " << b << endl;

    return 0;
}