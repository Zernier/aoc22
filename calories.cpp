#include <bits/stdc++.h>

using namespace std;


int maxi(int arr[], int n) {
  int max,i = 0;
  for( i = 0; i < n; i++) {
    if (arr[i] > max) {
      max = arr[i];
    }
  }
  return max;
}



int main() {


int arr[1000] = {0}; // creates array
ifstream myFile("aocinput.txt"); // reads the input file
string line;
int counter,j = 0;
while (getline(myFile, line)) // goes through the entire file line by line 
{
if (line == "") {
  arr[j] = counter; // stores the counter into the array
  j++; // goes to the next position
  counter = 0; // resets counter
  continue; // skips the current line;
}
counter += stoi(line);
  
}

  myFile.close();

  cout << maxi(arr, 1000);
  }
