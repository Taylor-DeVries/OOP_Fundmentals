#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> numbers;
    numbers.push_back(0);
    
    for(int i=1; i <= 10 ; i++){
        numbers.push_back(i);
    }

    for(auto it = numbers.begin(); it != numbers.end(); it++){
        cout << *it << endl;
    }
}