#include<iostream>
using namespace std;

int main()
{
    int x, y,n;
    char askop,askend='y';

    do
    {
        cout<<" \tWelcome to Calculator Program By Aryan Rawal "<<endl;
        cout<<"\t\tEnter Two Numbers"<<endl;
        cin>>x;
        cin>>y;
        cout<<"\t\t Press any Key for Operators \na for Addition s for Subtraction m for Multiplication d for division p for modulus"<<endl;
        cin>>askop;
        switch(askop)
        {
        case 'a':
            cout<<"\t\tAddition of Two numbers "<<x<<" and "<<y<<" is "<<x+y;
            break;
        case 's':
            cout<<"\t\tSubtraction of Two numbers "<<x<<" and "<<y<<" is "<<x-y;
            break;
        case 'm':
            cout<<"\t\tMultiplication of Two numbers "<<x<<" and "<<y<<" is "<<x*y;
            break;
        case 'd':
            cout<<"\t\tDivision of Two numbers "<<x<<" and "<<y<<" is "<<x/y;
            break;
        case 'p':
            cout<<"\t\tModulus of Two numbers  "<<x<<" and "<<y<<" is "<<x%y;
            break;
            case 'f':cout<<"\tRespect";
            break;
        case 6:
            exit(0);
        default:
            cout<<" Enter a number between 1-5 ";

        }
        cout<<endl<<"\n\t\nDo you want to continue Y/N"<<endl;
        fflush(stdin);
        cin>>askend;
    }
    while(askend=='y');

    return 0;
}
