// C++ program to access the elements of an Array using pointers
#include<iostream>
using namespace std;
int main(){
    
    int elements[5];
    std::cout << "Enter the elements" << std::endl;
    
    for(int i=0;i<5;i++)
    std::cin >> elements[i];
    
    std::cout << "You Entered" << std::endl;
    
    for(int i=0;i<5;i++)
    std::cout <<endl<<*(elements+i);
    
    return 0;
}
