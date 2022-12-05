#include <bits/stdc++.h>
using namespace std;


int outcome(char enemy_hand, char hand) {

// Rock meets anything you put
if (enemy_hand == 'A' and hand == 'X') {
    return 1+3; }
else if (enemy_hand == 'A' and hand == 'Y') {
    return 2+6;
}
else if (enemy_hand == 'A' and hand == 'Z') {
    return 3;}

// Paper meets anything you put
if (enemy_hand == 'B' and hand == 'X') {
    return 1+0; }
else if (enemy_hand == 'B' and hand == 'Y') {
    return 2+3;
}
else if (enemy_hand == 'B' and hand == 'Z') {
    return 3+6;}

// Scissors meets anything you put
if (enemy_hand == 'C' and hand == 'X') {
    return 1+6; }
else if (enemy_hand == 'C' and hand == 'Y') {
    return 2+0;
}
else if (enemy_hand == 'C' and hand == 'Z') {
    return 3+3;}



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
