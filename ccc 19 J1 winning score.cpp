#include <iostream>
using namespace std;

int main(){
    int a3, a2, a1, b3, b2, b1, a, b;
    cin >> a3 >> a2 >> a1 >> b3 >> b2 >> b1;
    a = a3*3 + a2*2 + a1;
    b = b3*3 +b2*2 +b1;
    
    if(a>b){
        cout << "A" << endl;
    }else if(b>a){
        cout << "B" << endl;
        
    }else{
        cout << "T" << endl;
    }
    return 0;

}
