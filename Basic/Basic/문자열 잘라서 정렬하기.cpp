#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(string myString) {
    vector<string> answer;
    string str="";
    
    for(int i = 0; i<myString.size(); i++)
    {
        if(myString[i] != 'x')
        {
            str += myString[i];
        }
        else if(myString[i] == 'x' and str != "")
        {
            answer.push_back(str);
            str = "";
        }
    }
    if(str != "") answer.push_back(str);
    sort(answer.begin(), answer.end());
    return answer;
}