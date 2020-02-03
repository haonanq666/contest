//include the necessary header files
#include <iostream>
#include <vector>
#include <cmath>


//using declarations
using std::cout;
using std::cin;
using std::vector;

//declare functions and global variables
void updatep(int n);
bool checkp(int test);
vector<int> outlist;
/* the vector is used to store all output
 * because the variables used will be overwritten
 * in the loops.*/


int main() {
    int t, n;
    cin >> t;
    for(int i = 0; i<t; i++){
        //get input and add to vector
        cin >> n;
        updatep(n);
    }

    for (int i=0; i<2*t; i++){
        //outputs the answer to judge
        //because there is 2 elements in each line, for t lines, 2*t is used
        if(!(i == 0 || i%2 ==0) ){
            //if second number in a line
            cout << " ";
        }
        cout << outlist[i];
        //output the ith element of vector
        if(!(i ==0 || i%2 == 0)){
            //if second number in a line
            cout << "\n";
        }
    }
    return 0;
}

void updatep(int n){
    //takes Ni, and adds its two prime components to vector
    int a =0, b=0;
    for(int i = 0; i< n; i++){
        //finds prime components
        if(checkp(i)){
            a = i;
            b = 2 * n - a;
            if(checkp(b)){
                break;
            }

        }else{
            continue;
        }
    }
    outlist.push_back(a);
    outlist.push_back(b);
}


bool checkp(int test){
    //check if test is prime
    bool isprime = true;
    if(test == 1){
        isprime = false;
    }else if(test == 2){
        //do nothing
    }else if(test ==0){
        isprime = false;
    }
    else {
        for (int i = 2; i <= sqrt(test); i++) {
                //test for factors
                if (test % i == 0) {
                    isprime = false;
                    break;

            }
        }
    }

    return isprime;
}
