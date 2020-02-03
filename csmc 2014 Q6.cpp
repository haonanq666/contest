#include <iostream>
using namespace std;
bool validate();
int count = 0;
int lockers[10]= {0,0,0,0,0,0,0,0,0,0};
void createcase(int index){
    for(int i=0; i<3; i++){
        lockers[index] = i;
        if(index>0) {
            createcase(index-1);
        }if(index==0){
        if(validate()){
            count++;
        }}}}
bool validate(){
    for(int i=10; i>0; i--){
        for(int k = 1; k<i; k++){
            if((i-k)%2 != 0){
                if(lockers[i-1] == lockers[k-1]){
                    return false;
                }}}}
    return true;
}
int main(){
    createcase(9);
    cout << count;
    return 0;
}
