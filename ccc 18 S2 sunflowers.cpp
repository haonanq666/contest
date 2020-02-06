#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>


using namespace std;

bool checkgrid(vector<vector<int> > grid);

void turntable90(vector<vector<int> >& grid);

void printtable(vector<vector<int> >& grid);

int n;

int main() {
    cin>>n;
    vector<vector<int> > grid(n);

    for(int i=0; i<n; i++){
        vector<int> row(n);
        for(int k=0; k<n; k++){
            cin>>row[k];
        }
        grid[i] = row;
    }
    while(!checkgrid(grid)){
        turntable90(grid);
    }
    printtable(grid);
}

bool checkgrid(vector<vector<int> > grid){
    for(int i=0; i<n;i++){
        vector<int> checks(n);

        for(int k=0; k<n; k++){
            checks[k] = grid[k][i];

        }
        vector<int> sortedchecks = checks;
        sort(sortedchecks.begin(), sortedchecks.end());
        if(!(checks == sortedchecks)){
            return false;
        }
    }
    for(int i=0; i<n;i++){
        vector<int> checks(n);

        for(int k=0; k<n; k++){
            checks[k] = grid[i][k];

        }
        vector<int> sortedchecks = checks;
        sort(sortedchecks.begin(), sortedchecks.end());
        if(!(checks == sortedchecks)){
            return false;
        }
    }
    return true;
}

// 00 01 02
// 10 11 12
// 20 21 22

void turntable90(vector<vector<int> >& grid){
    vector<vector<int> > temp = grid;
    for(int i = 0; i<n; i++){
        for(int k=0; k<n; k++){
            grid[i][k] = temp[k][n-i-1];
        }
    }
}

void printtable(vector<vector<int> >& grid){
    for(int i = 0; i<n; i++) {
        for (int k = 0; k < n; k++) {
            cout<<grid[i][k];
            if(k!=n-1){
                cout<<" ";
            }else{
                cout<<endl;
            }
        }
    }
}
