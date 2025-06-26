#include<iostream>
using namespace std;
int main()
{
    int number1,number2;
    cout<<"Enter the first number=";
    cin>>number1;
    cout<<"Enter the second number=";
    cin>>number2;
    char operation;
    cout<<"Enter the operation=";
    cin>>operation;
    switch(operation){
        case '+':
            cout<<"Result is="<<number1+number2;
            break;
        case '-':
               cout<<"Result is="<<number1-number2;
               break;
        case '*':
                
                cout<<"Result is="<<number1*number2;
                break;
        case '/':
                if(number2==0){
                cout<<"Infinity"<<endl;
             }        
             else{
                  
                  cout<<"Result is="<<number1/number2;
                  }
             break;
        default:
             cout<<"No another option";     
        }
    return 0;
}
// #include<iostream>
// using namespace std;

// int main()
// {
//     int number1, number2;
//     cout << "Enter the first number = ";
//     cin >> number1;
//     cout << "Enter the second number = ";
//     cin >> number2;

//     char operation;
//     cout << "Enter the operation (+, -, *, /) = ";
//     cin >> operation;

//     switch(operation) {
//         case '+':
//             cout << "Result is = " << number1 + number2;
//             break;
//         case '-':
//             cout << "Result is = " << number1 - number2;
//             break;
//         case '*':
//             cout << "Result is = " << number1 * number2;
//             break;
//         case '/':
//             if(number2 == 0) {
//                 cout << "Infinity" << endl;
//             } else {
//                 cout << "Result is = " << number1 / number2;
//             }
//             break;  // Correct placement of break
//         default:
//             cout << "No such operation";
//     }

//     return 0;
// }
