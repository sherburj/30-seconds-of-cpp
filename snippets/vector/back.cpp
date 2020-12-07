/*
    Author : Jayshree Aishwarya
    Date   : 18/10/2019
    Time   : 00:19
    Description : Used to fetch the last element of a vector
*/

#include <iostream> 
#include <vector> 
using namespace std; 
  
int main() { 
    // Initialize int vector
    std::vector<int> myVector = {1, 2, 3, 4, 5}; 
    
    // Save reference to the last element
    int& lastEle = myVector.back();
  
    // Last Element is 5
    std::cout << myVector.back() << " ";
    
    // Change the last element by changing the reference variable lastEle
    lastEle = 10;
  
    // Last Element changed to 10
    std::cout << myVector.back() << " ";


    return 0; 
} 
