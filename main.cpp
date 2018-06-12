/* 1.1 Implement an algorithm to determine if a string has all unique
characters. What if you cannot use additional data structures? */

#include <cstdlib> // size_t
#include <iostream>
#include <string>
#include <map>

using namespace std;

// Upper and lower cases are considered to be unique
// O(n), where n = number of chars in the string
bool check_unique(const string& input){
    map<char, int> char_map;
    size_t string_size = input.size();

    for (size_t i = 0; i != string_size; ++i){
        if (char_map[input[i]] > 1){
            return false;
        }
    }
    return true;
}

int main(){
    cout << "Enter the string to check if it has all unique characters: ";
    string input;
    cin >> input;

    if (check_unique(input)){
        cout << "UNIQUE\n";
    } else {
        cout << "NOT UNIQUE\n";
    }
    
    return 0;
}