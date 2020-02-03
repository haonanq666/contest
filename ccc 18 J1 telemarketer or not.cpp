#include <iostream>
using namespace std;

int main(){
    int first, second, third, fourth;
    bool answer = true;
    cin >> first;
    cin >> second;
    cin >> third;
    cin >> fourth;
    
    if((first == 8)||(first == 9)){
        if((fourth == 8)||(fourth == 9)){
            if(second == third){
                answer = false;
            } 
        }
    }
    if(answer){
        cout << "answer" << endl;
    }
    else{
        cout << "ignore" << endl;
    }
    return 0;
}
