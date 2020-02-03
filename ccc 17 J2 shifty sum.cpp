#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n, k, sum;
    cin >> n;
    cin >> k;
    sum = 0;
    
    for(int i= 0; i< (k+1); i++){
        int no;
        no = n*pow(10, i);
        sum +=  no;
    }
    
    cout << sum << endl;
    return 0;
    
}
