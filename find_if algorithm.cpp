#include<iostream>  
#include<algorithm>  
#include<vector>  
bool isEven (int i)  
{  
    return((i%2)==0);  
}  
int main()  
{  
    std::vector<int> newvector {20, 35, 50, 65};  
    std::vector<int>::iterator ti;  
    ti= std::find_if(newvector.begin(),newvector.end(),isEven);  
    std::cout<<"Out of the given elements, first even element is "<<*ti<<"\n";  
    return 0;  
  
} 
