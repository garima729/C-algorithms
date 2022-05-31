#include <algorithm>  
#include <iostream>  
#include <vector>  
  
using namespace std;  
int main() {  
  vector<int> v(5);  
  fill(v.begin(), v.end(), 2);  
 
  for_each(v.begin(), v.end(), [](int x) { cout << x << ","; });  
  return 0;  
} 