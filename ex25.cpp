#include <iostream>
#include<math.h>
using namespace std;

int* maxvaluePointer(int dataset[],int dataSize)
{
    int *maxValue;
    int *ptr;
    ptr = dataset;
    maxValue = &dataset[0];
    for(int i=1;i<dataSize;i++)
    {
        if(*maxValue < *(ptr+i))
        {
            maxValue = ptr+i;
        }
    }

    return maxValue;
}

int main()
{
    int dataSize;
    int *maxvalue;
    cout << "Enter number of data values" << endl;
    cin >> dataSize;
    int t[dataSize];
    for(int i=0;i<dataSize;i++)
    {
        cout <<"enter value :" << i+1 << endl;
        cin >> t[i];
    }
    maxvalue = maxvaluePointer(t,dataSize);
    cout << "the maximum value of the dataset is : " << *maxvalue <<endl;
}
