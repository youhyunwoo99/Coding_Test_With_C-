#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list, int n) {
    vector<int> answer;
    for(int i = n; i<=num_list.size(); i++)
    {
        answer.push_back(num_list[i-1]);
    }
    return answer;
}