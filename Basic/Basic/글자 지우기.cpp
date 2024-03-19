#include <string>
#include <vector>

using namespace std;

string solution(string my_string, vector<int> indices) {
    string answer = "";
    vector<bool> remove(my_string.size(), false);
    for(int i : indices)
    {
        remove[i] = true;
    }
    for(int j = 0; j<my_string.size(); j++)
    {
        if(!remove[j]){
            answer += my_string[j];
        }
    }
    return answer;
}