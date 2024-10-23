#include <iostream>
using namespace std;

int main(){
    int matA[3][3]={{{1,2,3},{4,5,6},{7,8,9}},
                    {{1,2,3},{4,5,6},{7,8,9}},
                    {{1,2,3},{4,5,6},{7,8,9}}};
    int matB[3][3]={{{1,2,3},{4,5,6},{7,8,9}},
                    {{1,2,3},{4,5,6},{7,8,9}},
                    {{1,2,3},{4,5,6},{7,8,9}}};
    int matC[3][3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++)
                matC[i][j][k]=matA[i][j][k]+matB[i][j][k];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++)
                cout<<matC[i][j][k]<<" ";
            cout<<"\n";
        }
        cout<<"\n";
    }
}