#include <iostream>
using namespace std;

int main() 
{
  
  
  int temp = 0;
  int newNum = 1;
  int result = 1;
  
  for(int i = 0; i <=11; i++ ){
    
    newNum = result;
    result = temp + newNum;
    std::cout << temp << std::endl;
    temp = newNum;
    
  }
  
    return 0;
}