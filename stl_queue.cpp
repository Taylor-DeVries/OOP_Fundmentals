#include <iostream>
#include <queue>
using namespace std;

void printQueue(queue<int> q){
    while(!q.empty()){
        cout << q.front() << "  ";
        q.pop();
    }
    cout << endl;
}

int main(){
    queue<int> myQ;
    myQ.push(1);
    myQ.push(2);
    myQ.push(3);

    cout << "Size is " << myQ.size() << endl;
    cout << "First element is " << myQ.front() << endl;
    cout << "Last element is " << myQ.back() << endl;

    cout << "My queue: " << endl;
    printQueue(myQ);
}