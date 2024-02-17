/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <algorithm>
#include <vector>

// Binary Search : Algo 1. 
// Lower/Upper Bound for value 3 in {1,1,1,3,3,3}, Lower bound index 3, upper bound = index (5+1) = 6  

using namespace std;

int main()
{
    vector<int> v = {1,3,6,6,7}; 
    
    cout << "Finding if 6 Exists using Binary Search" << endl; 

    cout << "ANS : " << binary_search(v.begin(), v.end(), 6); 
    
    cout << "Finding the Lower Bound for 6" << endl;
    cout << lower_bound(v.begin(), v.end(), 6) - v.begin() << endl; // -v.begin() to convert iterator to numeral index. 
    
    cout << "Finding the Upper Bound for 6" << endl;
    cout << upper_bound(v.begin(), v.end(), 6) - v.begin() << endl; // -v.begin() to convert iterator to numeral index. 
    
    cout << "Reversing a String" << endl; 
    
    string a = "String";
    reverse(a.begin(), a.end());
    cout << a << endl; 
    
    cout << "Rotating a Vector" << endl; 
    rotate(v.begin(), v.begin()+2, v.end()); // (Beginning Index, New Beginning Index, End) 
    
    for(auto ii:v){
        cout << ii << " ";
    }
    cout << endl; 
    
    
    cout << "Sorting a Vector" << endl; 
    sort(v.begin(), v.end()); 
    
    for(auto ii:v){
        cout << ii << " ";
    }
    cout << endl; 
    
    
    return 0;
}
