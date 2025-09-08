#include<iostream>
using namespace std;

int main()
{
int a,b;
    cout << "enter value a: ";
    cin >> a;
    cout << "enter value b: ";
    cin >> b;
    // arithmetic operator
    cout<<"Following are the arithmetic operator"<<endl;
    cout << " a + b is " << a + b <<endl;
        cout << " a - b is " << a - b <<endl;
    cout << " a * b is " << a * b <<endl;
       cout << " a / b is " << a / b <<endl;
    cout << " a++ is " << a++ <<endl;
       cout << " ++a is " << ++a <<endl;
    cout << "b++ is " << b++ <<endl;
       cout << "++b is " << ++b <<endl;
       cout<<endl;
       // comparison operator 
       cout<<"Following are the comparison operator"<<endl;
           cout << "a == b is " <<( a == b) <<endl;
        cout << "a >= b is " << (a >= b) <<endl;
    cout << "a <= b is " << (a <= b) <<endl;
       cout << "a > b is " <<( a > b) <<endl;
    cout << "a != b is " << (a != b) <<endl;
           cout << "a < b is " <<( a < b) <<endl;
           cout<<endl;
           //logical operator 
cout<<"Following are the logical operator"<<endl;
           cout << " and operator (a == b)&&(a>=b) is " <<(( a == b)&&(a>=b)) <<endl;
             cout << "Or operator (a == b)||(a>=b) is " <<(( a == b)||(a>=b))<<endl;
             cout << "not operator !(a == b)is " <<(!( a == b))<<endl;

    return 0;
}
