#include <iostream>
#include <cmath>



int main() {
    int num = 605;

    while(num>0){
        double y2 = pow(605, 2) + pow(num, 2);
        if(sqrt(y2) == static_cast<int>(sqrt(y2))){
            std::cout<<num<<std::endl;
            return 0;
        }else{
            num--;
        }

    }
    return 0;
}



// 528 = 48*11 = 2*3*2*2*2*11
