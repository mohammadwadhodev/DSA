#include <iostream>
using namespace std;

double myPow(double x,int power){

    // corner cases
    if(power == 0) return 1.0;
    if(x == 0) return 0.0;
    if(x == 1) return 1.0;
    if(x == -1 && power % 2 == 0) return 1.0;
    if(x == -1 && power % 2 != 0) return -1.0;

    double ans = 1;
    long binaryForm = power;


    if(power < 0){
        x = 1/x;
        binaryForm = -binaryForm;
    }

    

    while (binaryForm > 0)
    {
        if(binaryForm % 2 == 1){
            ans *= x;
        }

        x*=x;
        binaryForm /= 2;
    }
    
    
    return ans;
}


int main(){
double ans = myPow(3,-5);
cout<< "x power n = " << ans;

}