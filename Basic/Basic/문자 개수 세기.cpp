#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(string my_string) {
    vector<int> answer;
    int result[52] = {0};
    for(int i = 0; i<my_string.size(); i++)
    {
        if(my_string[i] - 65 < 26)//대문자 조건
        {
            result[my_string[i] -65]++;
        }
        else if(my_string[i] - 65 >= 32)//소문자 조건
        {
            result[my_string[i]-71]++;
        }
    }
    for(int j = 0; j<52; j++)
    {
        answer.push_back(result[j]);
    }
    return answer;
}