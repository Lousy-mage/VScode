#include <iostream>
using namespace std;

int main(){
    int row=3,col=3;
    cout<<"enter no.of rows\n";
    cin>>row;
    cout<<"enter no.of col\n";
    cin>>col;
    int matA[row][col];
    cout<<"enter elements\n";
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            matA[i][j]=0;
            cin>>matA[i][j];
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<matA[j][i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}