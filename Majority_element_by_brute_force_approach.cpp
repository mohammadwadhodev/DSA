#include <iostream>
#include <vector>
using namespace std;




int main(){
    
    vector<int> nums = {1,2,2,1,1,1};


    for(int val : nums)
{
    int freq = 0;
    for(int ele : nums){
        if(val == ele){
            freq++;
        }
    }

    if(freq > nums.size() / 2){
        cout << "Majority Element " << val << endl;
        break;
    }

}   

// g++ -std=c++11 Majority_element_by_brute_force_approach.cpp -o MajorityElement
// ./MajorityElement

}