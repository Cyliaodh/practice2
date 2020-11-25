#include <iostream>
#include<math.h>
//#include<time.h>
using namespace std;

// function for the calculator
void calculator()
{
    int choice;
    double a,b,result;
    char cont = 'y';

    while (cont == 'y')
    {
        cout << "MENU \n 1.Add\n 2.Substract\n 3.Multiply\n 4.Divide\n 5.Modulus\n" <<endl;
        cout << "enter your choice\n" << endl;
        cin >> choice;
        cout << "enter the numbers :" << endl;
        cin >> a >> b;
        switch(choice)
    {
        case 1:
            result = a+b;
            break;
        case 2:
            result = a-b;
            break;
        case 3:
            result = a*b;
            break;
        case 4:
            result = a/b;
            break;
        case 5:
            result = int(a)%int(b);
            break;
        default :
            cout << "\n wrong choice, choose again\n"<< endl;
        }
        cout << "RESULT = " << result;
        cout << "\nContinue? press y/n \n" << endl;
        cin >> cont;
        system("CLS");

    }
}

// main to try it

int main()
{
    calculator();
    return 0;
}
