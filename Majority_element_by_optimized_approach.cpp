#include <iostream>
#include <vector>
using namespace std;




int main(){
    
    vector<int> nums = {1,2,2,1,1,1};

    
    
int freq = 0, ans = 0;

    for(int i = 1; i< nums.size(); i++){
       
       
        if(freq == 0){
            ans = nums[i];
        }

        if(ans == nums[i]){
            freq++;
        }else{
            freq--;
        }

    }

    cout << "ans Element " << ans <<  " fre "<< freq <<  " size " << nums.size() / 2 << endl;

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

