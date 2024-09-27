#include <iostream>
using namespace std;

template <typename T>
class Calculator {
public:    
    T add(T a, T b){
        return a + b;
    }

    T subtract(T a, T b){
        return a - b;
    }

    T multiply(T a, T b){
        return a * b;
    }

    T divide(T a, T b){
        if(b == 0){
            cout << "Error, cannot divide by 0" << endl;
            return 0;
        }
        return a / b;
    }
};

int main(){
    Calculator<int> intCalc;

    cout <<  intCalc.add(5,8) << endl;
    cout << intCalc.subtract(5,8) << endl;

    Calculator<float> floatCalc;
    cout << floatCalc.add(2.3,6.8) << endl;
    cout << floatCalc.subtract(2.6,7.3) << endl;
}