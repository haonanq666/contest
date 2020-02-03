#include <iostream>
#include <cmath>
#include <map>
#include <algorithm>
#include <vector>
#include <string>


long sum=0;

std::vector<int> numbers ={0,1,2,3,4,5,6,7,8};

int create(std::vector<int>& input){
    std::string sts;
    for(auto p: input){
        sts+= std::to_string(p);

    }

return stoi(sts);
}


bool norep(int num){
    std::map<char, int> count;
    std::string nuum = std::to_string(num);
    std::string::iterator pos;
    for(pos=nuum.begin(); pos!=nuum.end(); pos++){
        count[*pos]++;
    }
    for(auto& p: count){
        if(p.second>1){
            return false;
        }
    }
    return true;
}

bool groupoffive(int num){
    std::string nuum = std::to_string(num);
    std::string::iterator pos;
    for(pos = nuum.begin(); pos!= nuum.end()-4; pos++){
        int sub=0;
        sub+= (*pos)-'0';
        sub+= *(pos+1)-'0';
        sub+= *(pos+2)-'0';
        sub+= *(pos+3)-'0';
        sub+= *(pos+4)-'0';

        if(sub%5!=0){
            return false;

        }

    }
    return true;

}

bool groupofseven(int num){
    std::string nuum = std::to_string(num);
    std::string::iterator pos;
    for(pos = nuum.begin(); pos!= nuum.end()-6; pos++){
        int sub=0;
        sub+= *pos-'0';
        sub+= *(pos+1)-'0';
        sub+= *(pos+2)-'0';
        sub+= *(pos+3)-'0';
        sub+= *(pos+4)-'0';
        sub+= *(pos+5)-'0';
        sub+= *(pos+6)-'0';


        if(sub%4!=0){
            return false;

        }

    }
    return true;
}

bool ismoffatnum(int num){
    //its digits are 1234567890 with no repitition
    //the sum of each group of 5 digis in a row is divisible by 5
    //the sum of each group of 7 is divisible by 4
    if(groupoffive(num) && groupofseven(num)){
        return true;
    }
    return false;
}

int main() {
    std::cout<<"the moffat numbers are: "<<std::endl;
    while(std::next_permutation(numbers.begin(), numbers.end())){
        int number = create(numbers);
        if(number<100000000||number>1000000000){
            continue;
        }

      //  std::cout<<number<<std::endl;
        if(ismoffatnum(number)){
            sum+=number;
            std::cout<<number<<std::endl;
        }
        if(number==876543210){
            break;
        }
    }
    std::cout<<std::endl;
    std::cout<<"sum: "<<std::endl;
    std::cout<<sum<<std::endl;

    return 0;
}
