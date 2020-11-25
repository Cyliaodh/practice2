#include <iostream>
#include<math.h>
#include<time.h>
using namespace std;



void sortFunction(int Table[10])
{
    int p;
    for(int i=0;i<10;i++){
        for(int j=i+1;j<10;j++)
        {
            if(Table[i]>Table[j])
            {
                p = Table[i];
                Table[i]= Table[j];
                Table[j]= p;
            }
        }
    }

    for(int k=0;k<10;k++)
    {
        cout << Table[k]<< "\t"<< endl;
    }


}


int main(){

    srand(time(NULL));

    int t[10];
    cout << "values of your array" << endl;
    for(int i=0;i<10;i++)
    {
        t[i]= rand()%100;
        cout << t[i] << endl;
    }
    cout << "values of the sorted array" <<endl;
    sortFunction(t);


}
