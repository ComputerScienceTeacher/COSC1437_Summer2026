#include <iostream>
#include <cassert>

using namespace std;


/*
Relational operators
<    // less than 
>    // greater than 
==   // equal to       (two equals signs — NOT one) 
<=   // less than or equal to 
>=   // greater than or equal to 
!=   // not equal to 
*/

/*
Logical operators
&&   // AND — both sides must be true 
||   // OR  — at least one side must be true 
!    // NOT — flips the value 

*/

/*
Operator Precedence
! (NOT)          — highest — evaluated first 
* / %            — multiplicative 
+ -              — additive 
< <= > >=        — relational 
== !=            — equality 
&&               — logical AND 
||               — logical OR — lowest 
*/


/*
Example precedence

int x = 4;
int y = -1;
!(x > 0) || (y >= -1 && x != y); 

Step by step: 

x > 0           →  4 > 0           →  true 
!(true)         →  false 
y >= -1         →  -1 >= -1        →  true 
x != y          →  4 != -1         →  true 
true && true    →  true   // false takes precedence with AND
false || true   →  true  // true takes precedence with OR
*/


int main(){
    double a, b, c;
    cout << "Enter 3 double values separated by space: "; 
    cin >> a >> b >> c; 
    assert(a != 0);  
    cout << "I am running";
}


int oldMain(){
    cout << " Hello, World! \n and you as well"<< endl;
    int x = 5;
    if (x==5 ) {} 
    if (x > 0 && x < 10) {
        cout << "I am ten" << endl;
    }

    double result = 0.1 + 0.2; 
    if (result == 0.3) {}   // this is FALSE on most systems 

    const double EPSILON = 0.0001; 
    if ((result - 0.3) < EPSILON) {}  // close enough 


    // NOT(A && B) is the same as NOT A or NOT B
    char letter = 'd';
    if (letter >= 'A' && letter <= 'Z') {
        cout << "Uppercase letter" << endl; // if true
    }
    else {
        cout << "Hello"<<endl; // if false
    }
    int score;
    cout << "Enter Score:";
    cin >> score;

    if (score >= 90) 
        cout << "A" << endl; 
    else if (score >= 80) 
        cout << "B" << endl; 
    else if (score >= 70) 
        cout << "C" << endl; 
    else if (score >= 60) 
        cout << "D" << endl; 
    else 
        cout << "F" << endl; 


    char shape; 
    cin >> shape; 
    
    switch (shape) 
    { 
        case 'R': 
        case 'r': 
            cout << "Rectangle selected" << endl; 
            break; 
        case 'C': 
        case 'c': 
            cout << "Circle selected" << endl; 
            break; 
        case 'T': 
        case 't': 
            cout << "Triangle selected" << endl; 
            break; 
        default: 
            cout << "Invalid selection" << endl; 
    } 






    return 0;
}