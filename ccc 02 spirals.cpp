#include <iostream>
#include <cmath>
#include <vector>

using namespace std;
int shi, zhong, jigeshu;
int size[] = {0,0};
int mc = 4;

void getsize(int num);


int main() {
    cin>>shi>>zhong;
    jigeshu = zhong - shi +1;
    getsize(jigeshu);
    vector<vector<int> > spiral(size[0]); // i number of rows
    for(int i=0; i<size[0]; i++){
        spiral[i].resize(size[1]);

    }
    int middlei, middlej;
    if(size[0]%2==0){
        middlei = (size[0]/2)-1;
    }else{
        middlei = size[0]/2;
    }
    if(size[1]%2 ==0){
        middlej = size[1]/2 -1;

    }else{
        middlej = size[1]/2;
    }
    int number = shi;
    spiral[middlei][middlej] = number;
    number++;


    for(int i=1; i<jigeshu; i++){
    if(number>zhong){
        break;
    }
        if(mc%4==0){
            //xia
            for(int j=0; j<i; j++){
                if(number>zhong){
                    break;
                }
                middlei ++;
                spiral[middlei][middlej] = number;
                number++;

            }
        }else if(mc%4==1){
            //you
            for(int j=0; j<i; j++){
                if(number>zhong){
                    break;
                }
                middlej ++;
                spiral[middlei][middlej] = number;
                number++;

            }
        }else if(mc%4==2){
            //shang
            for(int j=0; j<i; j++){
                if(number>zhong){
                    break;
                }
                middlei --;
                spiral[middlei][middlej] = number;
                number++;

            }
        }else{
            //zuo
            for(int j=0; j<i; j++){
                if(number>zhong){
                    break;
                }
                middlej --;
                spiral[middlei][middlej] = number;
                number++;

            }
        }
        mc++;
        if(mc%4==0){
            //xia
            for(int j=0; j<i; j++){
                if(number>zhong){
                    break;
                }
                middlei ++;
                spiral[middlei][middlej] = number;
                number++;

            }
        }else if(mc%4==1){

            //you
            for(int j=0; j<i; j++){
                if(number>zhong){
                    break;
                }
                middlej ++;
                spiral[middlei][middlej] = number;
                number++;

            }
        }else if(mc%4==2){
            //shang
            for(int j=0; j<i; j++){
                if(number>zhong){
                    break;
                }
                middlei --;
                spiral[middlei][middlej] = number;
                number++;

            }
        }else{
            //zuo
            for(int j=0; j<i; j++){
                if(number>zhong){
                    break;
                }
                middlej --;
                spiral[middlei][middlej] = number;
                number++;

            }
        }
        mc++;

    }

    for (int i = 0; i < size[0]; i++)
    {
        for (int j = 0; j < size[1]; j++)
        {
            if(j != 0 ){
                cout<<" ";
            }
            int out = spiral[i][j];

            if(out ==0){
                cout << "  ";
            }else{
                if(out < 10){
                    cout << " ";
                }
                cout << out;
            }
        }
        cout<<endl;
    }




    return 0;
}

void getsize(int num){
    int zuijinpingfang = static_cast<int>(pow(floor(sqrt(num)),2));
    int i= static_cast<int>(floor(sqrt(num))), j= static_cast<int>(floor(sqrt(num)));
    if(num == zuijinpingfang){
        size[0] = i;
        size[1] = i;
        return;
    }else{
        i++;
    }
    if (num-zuijinpingfang > static_cast<int>(floor(sqrt(num)))){
        j++;

    }else{
        //do nothing

    }
    size[0]=i;
    size[1]=j;
    return;

}
