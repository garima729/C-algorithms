#include <iostream>     // std::cout  
#include <algorithm>    // std::remove  
using namespace std;  
  int main () {  
  int myints[] = {10,20,30,50,20,40,100,20};     
  
  int* pbegin = myints;             // bounds of range:                     
  int* pend = myints+sizeof(myints)/sizeof(int);   
  
  pend = remove (pbegin, pend, 20);          
  cout << "range contains:";  
  for (int* p=pbegin; p!=pend; ++p)  
  cout << ' ' << *p;  
  cout << '\n';  
    return 0;  
}
