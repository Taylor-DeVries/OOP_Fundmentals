#include <iostream>
#include <stack>

using namespace std;

void printStackElements(stack<int> stack){
    while (!stack.empty()){
        cout << stack.top() << endl;
        stack.pop();
    }
    
}

int main(){
    //empty, size, push, pop, top
    stack<int> numberStack;

    numberStack.push(3);
    numberStack.push(2);
    numberStack.push(1);
    numberStack.pop();

    if(numberStack.empty()){
        cout << "Stack is empty" << endl;
    }else{
        cout << "Stack is not empty" << endl;
    }

    cout << "Stack size is " << numberStack.size() << endl;

    printStackElements(numberStack);

}