#include <iostream>
#include<math.h>
using namespace std;


void PascalTriangle(int size){

    int Triangle[size][size];
    int i,j;
    for(i=0;i<size;i++)
        for(j=0;j<size;j++)
            // intialization of all elements to zero + the first two rows to 1
            Triangle[i][j]=0;
            Triangle[0][0]=1;
            Triangle[1][0]=1;
            Triangle[1][1]=1;

         for(i=2;i<size;i++){
              Triangle[i][0]=1;
              for(j=1;j<=i;j++){
                        Triangle[i][j]=Triangle[i-1][j-1]+Triangle[i-1][j];
                                        }
                            }
// show the triangle :
          for(i=0;i<size;i++){
            for(j=0;j<=i;j++){
                   printf("%d\t",Triangle[i][j]);
                   }
            cout<<endl;
            }

         }

int main()
{
    int tSize;
    cout << "enter the size of the Pascal Triangle" << endl;
    cin >> tSize;
    system("CLS");
    PascalTriangle(tSize);
}
