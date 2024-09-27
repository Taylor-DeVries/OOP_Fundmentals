#include <iostream>
#include <map>
#include <string>
#include <list>

using namespace std;

int main(){
    // map<string,string> myDictionary;
    // //maps automatically order in asending order
    // myDictionary.insert(pair<string,string>("orange","die orange, die apfelsine"));
    // myDictionary.insert(pair<string,string>("apple","der apfel"));
    // myDictionary.insert(pair<string,string>("banana","die banane"));
    // myDictionary.insert(pair<string,string>("strawberry","die erdbeere"));

    // myDictionary["strawberry"] = "Die Erdeere";

    // myDictionary.erase("apple");

    // cout << myDictionary.size() << endl;

    // for(auto pair : myDictionary){
    //     cout << pair.first << " " << pair.second << endl;
    // }

    map<string, list<string> > pokedex;

    list<string> pikachuAttacks {"thunder shock", "tail whip", "quick attack"};
    list<string> charmanderAttacks {"flame thrower", "scary face"};
    list<string> chikoritaAttacks {"razor leaf", "poison powder"};

    pokedex.insert(pair<string,list<string>>("pikachu", pikachuAttacks));
    pokedex.insert(pair<string,list<string>>("charmander", charmanderAttacks));
    pokedex.insert(pair<string,list<string>>("chikorita", chikoritaAttacks));

    for(auto pair : pokedex){
        cout << pair.first << " - ";

        for (auto attack : pair.second){
            cout << attack << ", ";
        }

        cout << endl;
    }

}