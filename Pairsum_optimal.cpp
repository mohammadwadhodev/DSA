#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(vector<int> nums ,int target){
    vector<int> ans;
    int j =  nums.size() - 1;
    int i = 0;
    
    while(i < nums.size()){
        int paisum = nums[i] + nums[j];
        if(paisum > target)
        j--;
        else if(paisum< target)
        i++;
        else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }

    return ans;
}


int main(){
    
    vector<int> nums = {2,7,11,15};
    vector<int> ans = pairSum(nums,26);
    cout << ans[0] << " , "<< ans[1] << endl;

}