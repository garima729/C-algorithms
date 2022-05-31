
#include<iostream>  
#include<algorithm>  
#include<vector>  
using namespace std;  
int main()  
{  
    int newints[]={50,60,70,70,60,50,50,60};  
    int newcount=count(newints, newints+8, 50);  
    cout<<"50 appears "<<newcount<<"times.\n";  
    vector<int> vector(newints, newints+8);  
    newcount=count(vector.begin(),vector.end(),70);  
    std::cout<<"70 appears "<<newcount<<"times.\n";  
    return 0;  
}  
