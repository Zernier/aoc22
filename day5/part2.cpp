#include <bits/stdc++.h>
using namespace std;


void extractInt(string str,vector<int> &numbers)
{
    stringstream ss;
    ss << str;
    string temp;
    int found;
    while (!ss.eof()) {

        ss >> temp;
 
        /* Checking the given word is integer or not */
        if (stringstream(temp) >> found)
            if (found != 0) {
            numbers.push_back(found);
            }
        /* To save from space at the end of string */
        temp = "";
    }
}


/* part 1
void MoverPlacer(int amountMove,int here, int there, vector<stack<char>> &stacks) {

for (int i = 1; i <= amountMove;i++) { // placing the boxes from x to y
    char ch = stacks[here-1].top();
    stacks[there-1].push(ch);
    stacks[here-1].pop();
    /* if (!stacks[here-1].empty()){
        break;
    } 
}

} */
 // Part 2
void MoverPlacer9001(int amountMove,int here, int there, vector<stack<char>> &stacks, stack<char> &Holder) {

for (int i = 1; i <= amountMove;i++) { // placing the boxes from x to y
    char ch = stacks[here-1].top();
    Holder.push(ch);
    stacks[here-1].pop();
}

for(int i =1; i <= amountMove; i++) {
    stacks[there-1].push(Holder.top()); // reverses the front to back
    Holder.pop();
}
}

int main()
{
vector<stack<char>> stacks;
vector<int> numbers;
stack<char> Holder;
stack<char> stack1,stack2,stack3,stack4,stack5,stack6,stack7,stack8,stack9;
stack1.push('Q');stack1.push('W');stack1.push('P');stack1.push('S'); stack1.push('Z'); stack1.push('R'); stack1.push('H');stack1.push('D');

stack2.push('V');stack2.push('B');stack2.push('R');stack2.push('W');stack2.push('Q');stack2.push('H');stack2.push('F');
stack3.push('C');stack3.push('V');stack3.push('S');stack3.push('H');
stack4.push('H');stack4.push('F');stack4.push('G');
stack5.push('P');stack5.push('G');stack5.push('J');stack5.push('B');stack5.push('Z');
stack6.push('Q');stack6.push('T');stack6.push('J');stack6.push('H');stack6.push('W');stack6.push('F');stack6.push('L');
stack7.push('Z');stack7.push('T');stack7.push('W');stack7.push('D');stack7.push('L');stack7.push('V');stack7.push('J');stack7.push('N');
stack8.push('D');stack8.push('T');stack8.push('Z');stack8.push('C');stack8.push('J');stack8.push('G');stack8.push('H');stack8.push('F');
stack9.push('W');stack9.push('P');stack9.push('V');stack9.push('M');stack9.push('B');stack9.push('H');

stacks.push_back(stack1); stacks.push_back(stack2) ; stacks.push_back(stack3); stacks.push_back(stack4); stacks.push_back(stack5); stacks.push_back(stack6); stacks.push_back(stack7); stacks.push_back(stack8); stacks.push_back(stack9);

ifstream input_file("aoc22/aocinput5.txt");
string line;

while (getline(input_file, line)) {

extractInt(line,numbers);
/* MoverPlacer(numbers[0], numbers[1], numbers[2], stacks) Part 1*/
MoverPlacer9001(numbers[0], numbers[1], numbers[2], stacks, Holder);

    numbers.clear();

}

   for(int i = 0; i < stacks.size(); i++){
        cout << stacks[i].top();
    }

}
