/*
Vectors are sequence containers that have dynamic size. In other words, vectors are dynamic 
arrays. Just like arrays, vector elements are placed in contiguous storage location so they can be 
accessed and traversed using iterators. To traverse the vector we need the position of the first and 
last element in the vector which we can get through begin() and end() or we can use indexing 
from 0 to size(). Let us see how to construct a vector. 
*/

#include <iostream> 
#include <vector> 
using namespace std; 
  
int main() 
{ 
 
   // create a vector to store int 
   vector<int> vec;  
   int i; 
 
   // display the original size of vec 
   cout << "vector size = " << vec.size() << endl; 
 
   // push 5 values into the vector 
   for(i = 0; i < 5; i++) 
   { 
      vec.push_back(i); 
   } 
 
   // display extended size of vec 
   cout << "extended vector size = " << vec.size() << endl; 
 
   // access 5 values from the vector 
   for(i = 0; i < 5; i++) 
   { 
      cout << "value of vec [" << i << "] = " << vec[i] << endl; 
   } 
 
   // use iterator to access the values 
   vector<int>::iterator v = vec.begin(); 
   while( v != vec.end()) 
   { 
      cout << "value of v = " << *v << endl; 
      v++; 
   }

   return 0;
} 