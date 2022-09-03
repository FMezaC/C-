#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

/*Complete the parseInts function in the editor below.
parseInts has the following parameters:
string str: a string of comma separated integers*/

vector<int> parseInts(string str) {
	// Complete this function
    stringstream ss(str);
    vector<int> result;
    char ch;
    int temp;
    while(ss>>temp){
        result.push_back(temp);
        ss>>ch;
    }
    return result;
}

int main() {
	
	//vector<int>: a vector of the parsed integers.
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
