#include <bits/stdc++.h>

using namespace std;
int ul =1 , ur=2, 
    ll=3,   lr=4;

void hflip();
void vflip();


int main() {
    char in;
    while(cin >> in){
        if(in == 'H'){
            hflip();
        }else if (in == 'V'){
            vflip();
        }
    }
    cout << ul << " " << ur << endl;
    cout << ll << " " << lr << endl;
    
    return 0;
}

void hflip(){
    int temp1 = ul;
    ul = ll;
    ll = temp1;
    
    int temp2 = ur;
    ur = lr;
    lr = temp2;
}
void vflip(){
    int temp1 = ul;
    ul = ur;
    ur = temp1;
    
    int temp2 = ll;
    ll = lr;
    lr = temp2;
}
