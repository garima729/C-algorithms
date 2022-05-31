#include<iostream> 
#include<algorithm>  
#include<vector>  
int main()  
{  
    std:: vector<int> vct {50,60,70,80};   
    std::vector<int>::iterator ti;  
    std::cout<<"Initial vector:";  
    for(int k=0; k<vct.size(); k++)  
    std::cout<<" "<<vct[k];  
        std::cout<<"\n";  
    int sr = 60;  
    ti = std::find(vct.begin(), vct.end(),sr);  
    if(ti!=vct.end())  
    {  
        std::cout<< "The element "<<"has been found at position:";  
        std::cout<<ti-vct.begin() +1<<"\n";  
    }  
    else  
        std::cout<<"Element does not exist.\n \n";  
    return 0;  
}
