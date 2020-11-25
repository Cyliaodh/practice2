#include <iostream>
#include<math.h>

using namespace std;

int main()
{
    int table[5];
    int *pointer = table;
    cout<<"Enter the five numbers :";
    cin>>*pointer>>*(pointer+1)>>*(pointer+2)>>*(pointer+3)>>*(pointer+4);
    system("CLS");
    cout<<"Your numbers are:\n";
    for(int i=0;i<5;i++)
        cout<<*(pointer+i)<<endl;

     return 0;
}
