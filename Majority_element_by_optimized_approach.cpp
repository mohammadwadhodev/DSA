#include <iostream>
#include <vector>
using namespace std;




int main(){
    
    vector<int> nums = {1,2,2,1,1,1};

    sort(nums.begin(),nums.end());
    
    int freq = 1, ans = nums[0];

    for(int i = 1; i< nums.size(); i++){
        if(nums[i] == nums[i - 1]){
            freq++;
        }else{
            freq = 1;
            ans = nums[i];
        }
        
        if(freq > nums.size() / 2){
            cout << "Majority Element " << ans << endl;
            break;
    }

}   



// Example 1:

// Input: nums = [3,2,3]
// Output: 3

// Example 2:

// Input: nums = [2,2,1,1,1,2,2]
// Output: 2

// Example 3:

// Input: nums = [1,2,2,1,1,1]
// Output: 1



// g++ -std=c++11 Majority_element_by_optimized_approach.cpp -o MajorityElementByOptimize
// ./MajorityElementByOptimize

}