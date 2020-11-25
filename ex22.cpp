#include <iostream>
#include<math.h>
using namespace std;


int main()
{
    int table[10];
    cout << "enter 10 integers : \n" << endl;
    for(int i=0;i<10;i++)
    {
        cin >> table[i];
    }
    int maximum,minimum,rep,counter;
    int p =0;
    maximum = minimum= table[0];
    for(int i=1;i<10;i++)
    {
        if(table[i]<minimum)
            minimum = table[i];
        if(table[i]>maximum)
            maximum = table[i];
    }
    for(int i=0;i<10;i++){
        rep=table[i];
        counter = 0;
        for(int j=i+1;j<10;j++)
        {
            if(table[j]==table[i])
                {counter = counter+1;}
            if(counter>p)
            {
                p = i;
            }

                }
    }
    cout << "the maximum value is :"<< maximum <<endl;
    cout <<"the minimum value is:" << minimum <<endl;
    if(p>0){
            cout << "the value that occurs the most is:" << table[p]<<endl;
    }
    else{
        cout << "All values appear only once"<< endl;
    }

    return 0;


}
