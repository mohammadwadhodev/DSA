#include <iostream>
#include <vector>
using namespace std;




int main(){
    
    vector<int> nums = {2,2,1,2,2,1,1,1};
    int freq = 0, ans = 0;
    
    for(int i = 0; i< nums.size(); i++){
      
        if(freq == 0){
            ans = nums[i];
    }
    
    if(ans == nums[i]){
        freq++;
    }else{
        freq--;
    }

}

cout << "Majority Element " << ans << "frq " << freq << endl;







// g++ -std=c++11 Majority_element_by_moors_apporach.cpp -o MajorityElementByMoors
// ./MajorityElementByMoors

}