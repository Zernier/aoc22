#include <bits/stdc++.h>

using namespace std;

char item_finder(vector<string> v) {
    

char error_items;

int base_value;
for (int h = 0; h < (v[2]).size(); h++) {
    for (int j = 0; j < (v[0]).size(); j++) { //compare between line 1 and 2
        for (int i =0; i < (v[1]).size(); i++){
         if ((v[0])[j] == (v[1])[i] and ((v[0])[j] == (v[2])[h]) ) { // if there is an equal item
                        error_items = (v[1])[i] ;
                        base_value = (v[1])[i]; // adds the comon characters
                        break; // ends the thing
                    }
                }
     if (error_items == base_value) {break;}
         }
if (error_items == base_value) {break;}
}
        return error_items;
        }



int main() {
    int countdown = 0;
    int sum = 0;
    vector<string> reserve_vector;
    ifstream myFile("aocinput3.txt");
    string line;
    string alphabet_line = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    while (getline(myFile,line) or countdown < 3) {
        countdown++;
        reserve_vector.push_back(line);
        if (countdown == 3) {
            for (int i = 0; i < 52; i++) { // iterate through the given vector of the line now, compare with the alphabets
                if (item_finder(reserve_vector) == alphabet_line[i]) {
                    sum += 1+i;
                    countdown = 0; //resets the countdown
                    reserve_vector.clear(); // resets vector of reserves to collect another set
                    break;
                }
            } 
        
        }
    }
    myFile.close();
    cout << sum;
    }

        
