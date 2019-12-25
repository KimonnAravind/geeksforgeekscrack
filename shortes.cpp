
#include<bits/stdc++.h> 
using namespace std; 
  

void printPattern(string str, int len) 
{    
    for(int i = 0; i < len; i++) 
    { 
        for(int j = 0; j < len; j++) 
        {    
      if((i == j) || (i + j == len-1)) 
                cout<<str[i]; 
      
            else
                cout<<" "; 
        } 
          
        cout<<endl; 
    } 
} 
  
  
int main() 
{ 
    string str = "geeksforgeeks"; 
      
    int len = str.size(); 
      
    printPattern(str, len); 
      
    return 0; 
} 