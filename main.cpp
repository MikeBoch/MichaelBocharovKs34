#include <iostream>
#include <time.h>
#include <math.h>
#define N 10
using namespace std;

int main()
{
    int arr[N][N], temp1=0, temp2=0;
    srand(time(0));
    for(int i = 0; i<N; i++){
       for(int j = 0; j<N; j++){
         arr[i][j]=0+rand()%11;
         cout << arr[i][j] << "\t";
       }
         cout << "\n";
    }


    for(int i = 0; i<N; i++){
       for(int j = 0; j<N; j++){
        if(j<i){
            temp1+= arr[i][j];
        }else if(j>i){
            temp2+= arr[i][j];

        }
       }
    }
    cout<< "\n" << temp1<< "\t" << temp2 << "\t";
    if(temp1<temp2){
         cout<< "\nupper diag";

    }else if(temp1>temp2){
         cout<< "\nlower diag";
    }else{
         cout<< "\nThe same";
    }
     cout<< "\nDifference\t" << abs(temp1-temp2);
    return 0;
}
