#include <iostream>
#include <string> 
#include <algorithm>

int main(){
    std::string string1;
    std::cout<<"Enter numbe rof strings"<<std::endl;
    int N;
    std::cin>>N;
    int count{0};
    while(N--){
    std::cout<<"Enter string "<<count++<<std::endl;
    std::cin>>string1;
    const char ans = *std::max_element(string1.begin(),string1.end());
    std::cout<<"Max element for given string "<<ans<<"\n";
    }
    
    return 0;

}