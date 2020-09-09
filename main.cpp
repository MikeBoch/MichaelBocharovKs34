#include <iostream>
#include <time.h>
#include <math.h>
#define N 2
using namespace std;

int main()
{
    int arr[N][N], low=0, up=0;
    srand(time(0));
    for(int i = 0; i<N; i++){
       for(int j = 0; j<N; j++){
         arr[i][j]=0+rand()%11;
            if(j>N-i-1){
                low+= arr[i][j];
            }else if(j<N-i-1){
                up+= arr[i][j];
            }
         cout << arr[i][j] << "\t";
       }
         cout << "\n";
     }

    cout<< "\n" << low<< "\t" << up << "\t";

    if(low<up){
         cout<< "\nUP";
    }else if(low>up){
         cout<< "\nLOW";
    }else{
         cout<< "\nTHE SAME";
    }
     cout<< "\nDEFFERENCE\t" << abs(low-up);
    return 0;
}
