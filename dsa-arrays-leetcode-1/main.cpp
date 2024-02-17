/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std; 

void print_vector(vector<int>& v){
    for(auto element : v){
        cout << element << " ";
    }
    cout << endl; 
}

void print_vector_of_vector(vector<vector<int>> v) {
    // Iterate through each inner vector
    for (int i = 0; i < v.size(); i++) {
        // Print elements of the current inner vector
        for (int j = 0; j < v[i].size(); j++) {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}

// Problem 1 : Find Unique Elements. 
int find_unique(int *arr, int size){
    
    int res;
    for(size_t ii=0; ii<size; ii++){
        res = res^arr[ii]; 
    }
    return res; 
}

bool if_occurences_unique(vector<int>& arr){
    
    // Edge Case : Empty array. 
    if (arr.empty()){
        return true; 
    }
 
    sort(arr.begin(), arr.end()); 
    
    vector<int> count_vec; 
    int count_element = 1; 
    
    int size = arr.size();
    
    for(size_t ii=1; ii<size; ii++){
  
        if(arr[ii] == arr[ii-1]){
            count_element += 1;  
        }
        else{
            count_vec.push_back(count_element); 
            count_element = 1; 
        }
    }
    count_vec.push_back(count_element);  
    
    for(size_t ii=1; ii<count_vec.size(); ii++){
        if (count_vec[ii] == count_vec[ii-1]){
            return false; 
        }
        }
    return true; 
}

int find_duplicate(vector<int>& arr){
    
    sort(arr.begin(), arr.end()); 
 
    if (arr.empty()){
        return 0; 
    }
    
    for(size_t ii=1; ii<arr.size(); ii++){
        if (arr[ii] == arr[ii-1]){
            return arr[ii]; 
        }
    }
    return 0; 
}

// 2 Pointer Approach to solving array questions. 
vector<int> find_array_intersection(vector<int>& arr1, int size_a, vector<int>& arr2, int size_b){
    
    int ii = 0; 
    int jj = 0; 
    
    vector<int> result_vec; 
    
    while(ii<size_a && jj<size_b){
        
        if(arr1[ii] == arr2[jj]){
            result_vec.push_back(arr1[ii]);
            ii++; 
            jj++; 
        }
        
        else if(arr1[ii] < arr2[jj]){
            ii++; 
        }
        
        else{
            jj++; 
        }
    }
    return result_vec; 
}

vector<vector<int>> sort_pairs(vector<int>& arr, int s){
    
    vector<vector<int>> res; 
    
    for(size_t ii=0; ii<arr.size(); ii++){
        for(size_t jj=ii+1; jj<arr.size(); jj++){
            if(arr[ii] + arr[jj] == s){
                
                vector<int> vec; 
                vec.push_back(min(arr[ii], arr[jj])); 
                vec.push_back(max(arr[ii], arr[jj])); 
                
                res.push_back(vec); 
            }    
        }
    }
    
    sort(res.begin(), res.end()); 
    return res;
}

// Triplets with Given Sum: follow the logic of doubles. 
vector<vector<int>> find_triplets(vector<int>& arr, int k){
    
    vector<vector<int>> res; 
    
    for(size_t ii=0; ii<arr.size(); ii++){
        for(size_t jj=ii+1; jj<arr.size(); jj++){
            for(size_t kk=jj+1; kk<arr.size(); kk++){
                if (arr[ii] + arr[jj] + arr[kk] == k){
                    
                    vector<int> vec; 
                    vec.push_back(arr[ii]);
                    vec.push_back(arr[jj]);
                    vec.push_back(arr[kk]); 
                    
                    res.push_back(vec); 
                }
            }
        }
    }
    return res; 
}

vector<int> sort_one_zero(vector<int>& arr){
    
    int ii = 0, jj = (arr.size() -1); 
    
    while(ii < jj){
        
        while(arr[ii] == 0 ){
            ii++; 
        }
        
        while(arr[jj] == 1){
            jj--; 
        }
        
        if(ii < jj){
            swap(arr[ii], arr[jj]); 
            
            ii++; 
            jj--; 
        }
        
    }
    return arr; 
}

vector<int> sort012(vector<int>& arr){
    
    int ii=0, mid=0, jj=arr.size()-1;
    
    while(mid <= jj){
        
        if(arr[mid] == 0){
            swap(arr[ii], arr[mid]);
            ii++; 
            mid++; 
        }
        else if(arr[mid] == 1){
            mid++;
        }
        else if(arr[mid] == 2){
            swap(arr[mid], arr[jj]);
            jj--; 
        }
    }
    return arr;
    
}

int main()
{
    
    int a[] = {1,3,4,2,3,1,2};
    int size_a = sizeof(a)/sizeof(a[0]); 
    int res1 = find_unique(a, size_a);
    
    cout << "The Unique Element is : " << res1 << endl; 

    vector<int> b = {1,2,2,1,1,3}; 
    bool res2 = if_occurences_unique(b); 
    
    cout << "Are occurences of elements Unique? Answer : " << res2 << endl; 
    
    vector<int> c = {2,4,3,1,4};
    int res3 = find_duplicate(c); 
    
    cout << "The duplicate element is : " << res3 << endl; 
    
    vector<int> d1 = {1,2,2,2,3,4};
    vector<int> d2 = {2,2,3,3};
    vector<int> res4 = find_array_intersection(d1, d1.size(), d2, d2.size()); 
    
    cout << "The Intersection of the arrays is : " << endl;
    print_vector(res4); 
    
    vector<int> e = {2,-3,3,3,-2}; 
    vector< vector<int> > res5;
    int s = 0; 
    
    cout << "The pairs amounting to " << s << " are : " << endl; 
    res5 = sort_pairs(e, s);
    print_vector_of_vector(res5);
    
    vector<int> f = {1,2,3,4,5,-1,-2,-3}; 
    vector< vector<int> > res6;
    int k = 3; 
    
    cout << "The pairs amounting to " << s << " are : " << endl; 
    res6 = find_triplets(f, k);
    print_vector_of_vector(res6);
    
    
    vector<int> g = {1,1,1,1,1,0,1,0,0,0,1,1,1,1,0}; 
    vector<int> res7 = sort_one_zero(g); 
    cout << "Printing the sorted array with ones and zeros" << endl; 
    print_vector(res7); 

    vector<int> h = {2,1,1,2,1,0,1,0,0,0,1,2,2,1,0}; 
    vector<int> res8 = sort012(h); 
    cout << "Printing the sorted array with 0,1,2" << endl; 
    print_vector(res8); 

    return 0;
}

