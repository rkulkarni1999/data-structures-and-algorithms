/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>

using namespace std; 

void fibonacci_seq(int n){
    int sum = 0; 
    int a = 0;   // element 1 
    int b = 1;   // element 2
    
    cout << a << " ";
    cout << b << " ";
    for(int ii=0; ii<n; ii++){
        sum = a+b; 
        cout << sum << " ";
        a = b; 
        b = sum; 
    }
    cout << endl; 
}


void prime_or_not(int n){
    
    bool isPrime = 1; 
    
    for(int ii=2; ii<n; ii++){
        if((n%ii) == 0){
            isPrime = 0; 
            break;
        }
    }
    
    if(isPrime == 0){
        cout << "The number " << n << " is not prime"; 
    }else{
        cout << "The number " << n << " is prime";
    }

}
int main()
{
    
    // Bitwise operators operate on a Bit Level, i.e the numbers of charecters are first converted to binary and then the operations are applied to them. 
    // Eg. 4 -> 1 0 0
    //     6 -> 1 1 0 
    // Therefore, 4&6 -> 1 0 0 --> 6 (ans)
    
    
    int a = 4;  // 
    int b = 6;  
    
    int c = a&b;  // According to AND Table
    int d = a|b;  // According to OR Table
    int e = a^b;  // According to XOR Table
    int f = ~(a); // inverting all the binary numbers. Then taking the 2s complement, i.e. adding +1 to 1s complement
    cout << c << endl;
    cout << d << endl;
    cout << e << endl;
    cout << f << endl;
    
    /* LEFT SHIFT & RIGHT SHIFT OPERATOR */
    // Image that all the bit values of the number are in a line, Just shift all values to the left or Right, and do padding with  0s  
    
    // Eg. For 5 -> 0000 00... 0101
    // 5 << 1 -> Left shift by 1 -> 0000 0... 1010 -> 10 in integers. 
    
    int g = 5<<1;
    cout << g << endl; 
    // DO NOT DO LEFT SHIFT OPERATION ON BIG NUMBERS BECAUSE THEY MIGHT BECOME NEGATIVE!!
    // FOR NEGATIVE NUMBERS, THE PADDING IS DEPENDENT ENTIRELY ON THE COMPILER. 
    
    
    /* FIBONACCI SEQUENCE */
    int n; 
    cout << "Please Enter the number of terms you want in the Sequence" << endl; 
    cin >> n; 
    
    // Fibonacci sequence
    fibonacci_seq(n);
    // If the given number is prime or not. 
    prime_or_not(n);
    
    /*Demonstration of continue in for loop*/
    
    for(int ii=0; ii<5; ii++){
        
        if(ii == 2){
            continue; 
        }
        
        cout << ii << endl; 
        
    }
    
    
    
    

    return 0;
}
