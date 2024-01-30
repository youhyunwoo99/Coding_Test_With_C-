#include <string>
#include <vector>

using namespace std;

string solution(string my_string, vector<int> index_list) {
    string answer = "";
    char arr = '\0';
    for (int i = 0; i < index_list.size(); i++)
    {
        arr = my_string[index_list[i]];
        answer.push_back(arr);
    }
    return answer;
}