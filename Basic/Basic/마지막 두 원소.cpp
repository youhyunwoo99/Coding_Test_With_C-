#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer = num_list;
    int last = answer.size();
    int add_num=0;
    if(answer[last-1] > answer[last-2])
    {
        add_num = answer[last-1] - answer[last-2];
    }
    else
    {
        add_num = answer[last-1] * 2;
    }
    answer.push_back(add_num);
    
    return answer;
}