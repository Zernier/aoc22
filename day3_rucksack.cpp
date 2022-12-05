#include <bits/stdc++.h>

using namespace std;

char item_finder(string file_text) {
    int length = file_text.size();
    char compartment1[length/2];
    char compartment2[length/2]; // create two arrays, 1  for first compartment, 2 for second comparmtment
    for (int i = 0; i < length/2; i++) {
        compartment1[i] = file_text[i];
    }
    for (int i = 0; i < length/2; i++) {
        compartment2[i] = file_text[(length/2)+i]; // creating it
    }


char error_items;
for (int j = 0; j < length/2; j++) {
    for (int i =0; i < length/2; i++){
        if (compartment1[j] == compartment2[i]) { // if there is an equal item
                    error_items = compartment1[j] ; // adds the comon characters
                    break; // ends the thing
                }
            }
    if (error_items == compartment2[j]) {break;}
        }
    return error_items;
    }


int main() {
    int sum = 0;
    ifstream myFile("aocinput3.txt");
    string line;
    string alphabet_line = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    while (getline(myFile,line)) {
            for (int i = 0; i < 52; i++) { // iterate through the given vector of the line now, compare with the alphabets
                if (item_finder(line) == alphabet_line[i]) {
                    sum += 1+i;
                }
            } 
        }
    myFile.close();
    cout << sum;
        }
