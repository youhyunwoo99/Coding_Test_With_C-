#include <string>
#include <vector>

using namespace std;

vector<int> solution(string myString) {
    vector<int> answer;
    int num = 0;
    for(int i = 0; i<myString.size(); i++)
    {
        if(myString[i] == 'x' and answer.empty() == 1)
        {
            answer.push_back(i-num);
            num = i;
        }
        else if(myString[i] == 'x')
        {
            answer.push_back(i-num-1);
            num = i;
        }
    }
    answer.push_back(myString.size()-num-1);
    return answer;
}