#include <iostream>
#include <map>
#include <string>
using namespace std;


void print_map(map<string, string> stateDataMap) {
    for (map<string, string>::iterator it = stateDataMap.begin(); it != stateDataMap.end(); it++) {
        cout << "The State is: " << it->first << ", The Capital is: " << it->second << endl;
    }
} 
// function that prints the state and capital data that is stored in the Data map. 

void print_capital(map<string, string> stateDataMap, string state) {
    map<string, string>::iterator it = stateDataMap.find(state);
    if (it == stateDataMap.end()) {
        cout << state << " is not found" << endl; // printing if there is no associated capital with state listed 
    } else {
        cout << "Capital of " << state << " is " << it->second << endl; // printing capital 
    }
}

// function that will output the capital name from the state name that is entered by the user 