#include <iostream>
#include <map>
#include <string>
#include "header.h"
using namespace std;


int main() {
   
    map<string, string> stateDataMap; // declaring map container variable to store the state/capital data 

    stateDataMap["Ohio"] = "Columbus";
    stateDataMap["Nebraska"] = "Lincoln";
    stateDataMap["Massachusetts"] = "Boston";
    stateDataMap["New York"] = "Albany";
    stateDataMap["Texas"] = "Austin";
    stateDataMap["California"] = "Sacramento";
   

   //storing data above 
  
    print_map(stateDataMap); // print the data map container 

   
    stateDataMap["California"] = "Los Angeles"; // fn to change capital of California to Los Angelas 

    
    string userState;
    cout << "Enter the state name for the capital you wish to see: "; // statement asking user for input
    getline(cin, userState); // getting user input and storing as variable userState 
    print_capital(stateDataMap, userState); // printing associated capital associated with the userState input
    return 0;
}