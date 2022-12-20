int main() {
int sum = 0;
ifstream input_file("aocinput4.txt");
string line;
vector<int> assignment1, assignment2;
while (getline(input_file, line)) {
    int comma_index = line.find(',',0);
    int length_of_line = line.size();
    string range_str1 = line.substr(0,comma_index);
    string range_str2 = line.substr(comma_index+1, length_of_line-comma_index-1);

    int dash_index1 = range_str1.find('-',0);
    int dash_index2 = range_str2.find('-',0);

    int length_of_str1 = range_str1.size();
    int length_of_str2 = range_str2.size();

    string n1_of_range_str1 = range_str1.substr(0, dash_index1);
    string n2_of_range_str1 = range_str1.substr(dash_index1+1, length_of_str1-dash_index1-1);


     string n1_of_range_str2 = range_str2.substr(0, dash_index2);
    string n2_of_range_str2 = range_str2.substr(dash_index2+1, length_of_str2-dash_index2-1);

int n1_of_r1 = stoi(n1_of_range_str1), n1_of_r2 = stoi(n1_of_range_str2);
int n2_of_r1 = stoi(n2_of_range_str1), n2_of_r2 = stoi(n2_of_range_str2);

int length_of_section1 = n2_of_r1-n1_of_r1;
int length_of_section2 = n2_of_r2-n1_of_r2;

/* if (length_of_section1 >= length_of_section2 and n1_of_r1 <= n1_of_r2 and  n2_of_r1 >= n2_of_r2) {
    sum++; }
else if (length_of_section2 >= length_of_section1 and n2_of_r1 <= n2_of_r2 and  n1_of_r1 >= n1_of_r2) {
        sum++;
    } */ // Part 1 code


if (n2_of_r2 >= n1_of_r1 and n2_of_r1 >= n1_of_r2) {
    sum++; }
else if (n1_of_r2  <= n2_of_r1 and n2_of_r2 >= n1_of_r1) {
        sum++;
    }

/* if (assignment2.size() > assignment1.size()) {
    string hollow = assignment2;
    assignment2 = assignment1;
    assignment1 = hollow;
}
for (int i = 0; i < assignment1.size(); i++) {
    if (assignment2 == assignment1.substr(i,assignment2.size())) {sum ++; break;}
}
 if (assignment1.find(assignment2) != string::npos or (assignment2.find(assignment1) != string::npos)) {
sum ++;
}  
    assignment1 = ""; assignment2 = ""; */
}

cout << sum;
}
