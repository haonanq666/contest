#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>


using namespace std;



int main() {
    int arraysize;
    cin>>arraysize;
    vector<double> vi(arraysize);
    vector<double> villagesizes(arraysize-2);
    int sizecount = 0;

    for(int i=0; i<arraysize; i++){
        cin>> vi[i];
    }

    sort(vi.begin(), vi.end());

    vector<double>::iterator ite;

    for(ite = vi.begin(); ite != vi.end(); ite++){
        if(ite == vi.begin()||ite==vi.end()){

        }else{
            double size;
            size = (*(ite)-*(ite-1))/2 + (*(ite+1)-*(ite))/2;
            villagesizes[sizecount] = size;
            sizecount++;
        }
    }

    sort(villagesizes.begin(), villagesizes.end());

    cout<<fixed<<setprecision(1)<< villagesizes[0];



    return 0;
}

