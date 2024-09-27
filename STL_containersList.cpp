#include <iostream>
#include <list>
using namespace std;

//advantage of list: -inserting new elements and deleting is very fast
//                   -searching and traversing is very slow

void displayRatings(const list<int> &playersRatings){
    for(list<int>::const_iterator it = playersRatings.begin(); it!=playersRatings.end(); it++){
        cout << "player rating: " << *it <<endl;
    }   
}

void insertPlayerInOrderedList (int newPlayerRating, list<int> &playersByRating){
    for(list<int>::iterator it = playersByRating.begin(); it!=playersByRating.end(); it++){
        if(*it > newPlayerRating){
            playersByRating.insert(it, newPlayerRating);
            return;
        }
    }

    playersByRating.push_back(newPlayerRating);      
}

int main(){

    list<int> allPlayers = {2, 9, 3, 7, 3, 1, 4, 8, 3, 2, 9};

    list<int> beginers; //rating 1 to 5
    list<int> pros; //rating 6 to 10

    for(list<int>::iterator it = allPlayers.begin(); it!=allPlayers.end(); it++){
        int rating = *it;
        if(rating >= 1 && rating <= 5){
            insertPlayerInOrderedList(rating, beginers);
        }else if (rating >= 6 && rating <= 10){
            insertPlayerInOrderedList(rating, pros);
        }
    }

    cout << "Beginers: " << endl;
    displayRatings(beginers);

    cout << "Pros: " << endl;
    displayRatings(pros);
}