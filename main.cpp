#include <iostream>
#include <string>
using namespace std;

int main(){
   int x, y;
   char z;
   cin >> x >> z >> y;
    if (z == '/'){
        if (y == 0){
            cout << "Деление на ноль";
        }
        else { 
        cout << x / y;
        }
    }
    else if (z == '+'){
        cout << x + y;
    }
    else if (z == '-'){
        cout << x - y;
    }
    else if (z == '*'){
        cout << x * y;
    }    
}   

