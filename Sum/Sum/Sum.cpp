﻿#include <iostream>
 
  
void threeSum(int arr[], int n)
{ 
    bool found = true; 
    for (int i=0; i<n-2; i++) 
    { 
        for (int j=i+1; j<n-1; j++) 
        { 
            for (int k=j+1; k<n; k++) 
            { 
                if (arr[i]+arr[j]+arr[k] == 0) 
                { 
                    std::cout << arr[i] << " "
                         << arr[j] << " "
                         << arr[k] <<std::endl; 
                    found = true; 
                } 
            } 
        } 
    }  
    if (found == false) 
        std::cout << " not exist "<<std::endl; 
  
} 
  
 
int main() 
{ 
    int arr[] = {0, -1, 2, -3, 1}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    threeSum(arr, n);
    return 0; 
} 