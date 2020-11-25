#include <iostream>
#include<math.h>
using namespace std;



int *function7(int *arr, int arraySize)
{
   int *pointer;
   int p;


    for(int i=0;i<arraySize;i++){
        for(int j=i+1;j<arraySize;j++)
        {
            if(*(arr+i)>*(arr+j))
            {
                p = *(arr +i);
                *(arr+i)= *(arr+j);
                *(arr +j) = p;
            }
        }
    }
    pointer = arr;

    return pointer;

}

int main()
{
    int arraySize = 10;
    int *pointer;
    int *sorted;

    int t[arraySize];
    cout << "enter the ten values" <<endl;
    for(int i=0;i<10;i++)
    {
        cin >> t[i];
    }
    pointer = t;
    sorted = function7(pointer,arraySize);
    cout << "\nvalues of the sorted array\n" << endl;
    for(int i = 0;i<arraySize;i++)
    {
        cout << *(sorted+i) << endl;
    }

    return 0;
}
