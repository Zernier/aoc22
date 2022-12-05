#include <bits/stdc++.h>
using namespace std;


int outcome(char enemy_hand, char end) {

// Rock meets anything you put
if (enemy_hand == 'A' and end == 'X') {
    return 3+0; }
else if (enemy_hand == 'A' and end == 'Y') {
    return 1+3;
}
else if (enemy_hand == 'A' and end == 'Z') {
    return 2+6;}

// Paper meets anything you put
if (enemy_hand == 'B' and end == 'X') {
    return 1+0; }
else if (enemy_hand == 'B' and end == 'Y') {
    return 2+3;
}
else if (enemy_hand == 'B' and end == 'Z') {
    return 3+6;}

// Scissors meets anything you put
if (enemy_hand == 'C' and end == 'X') {
    return 2+0; }
else if (enemy_hand == 'C' and end == 'Y') {
    return 3+3;
}
else if (enemy_hand == 'C' and end == 'Z') {
    return 1+6;}



}

int main() {

int sum = 0;
ifstream myFile("aocinput2.txt");
string line;

while (getline(myFile, line)) {

sum += outcome(line[0],line[2]);
}

myFile.close();
cout << sum << endl;

}
