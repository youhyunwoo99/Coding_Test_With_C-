#include <string>
#include <vector>

using namespace std;

vector<int> solution(int l, int r) {
    vector<int> answer;
    for (int i = l; i <= r; i++)
    {
        bool un = true;
        string str = to_string(i);
        for (char c : str)
        {
            if (c != '0' && c != '5')
            {
                un = false;
                break;
            }
        }
        if (un)
        {
            answer.push_back(i);
        }
    }
    if (answer.empty())
    {
        answer.push_back(-1);
    }
    return answer;
}