#include <bits/stdc++.h>
using namespace std;
bool check_odd(int i)
{
   if (i % 2!= 0)
      return true;
   else
      return false;
}
 int main() 
{   vector<int> vec;
   for (int i = 0; i < 100; i++)
   {      vec.push_back(i);
   }
   int total_odd = count_if(vec.begin(), vec.end(), check_odd);
   cout<<"total no. of odd numbers: "<<total_odd;
   return 0;
}
