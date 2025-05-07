#include <iostream>
using namespace std;


int maxProfit(vector<int>& prices){
    
    int maxPro = 0;
    int bestBuy = prices[0];

    for(int i=0; i<prices.size(); i++){
        if(prices[0] > bestBuy){
            maxPro = max(maxPro, prices[i] - bestBuy);
        }
        bestBuy = min(bestBuy,prices[i]);
    }

    return maxPro;

    
}


int main(){
    
    vector<int> prices = {7,1,5,3,6,4};

    int maxPro = maxProfit(prices);
    cout << "maxPro " << maxPro;
}