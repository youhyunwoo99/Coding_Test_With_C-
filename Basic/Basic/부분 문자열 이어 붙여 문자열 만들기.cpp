#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(vector<string> my_strings, vector<vector<int>> parts) {
    string answer = "";
    for(int i = 0; i<my_strings.size(); i++)
    {
        int len = parts[i][1]-parts[i][0]+1;
        string str = my_strings[i].substr(parts[i][0], len);
        answer += str;
    }
    return answer;
}