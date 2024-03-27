#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int count = 0;
    int f_num = 0;
    int e_num;
    for(int i = 0; i<arr.size(); i++)
    {
        if(arr[i] == 2 and count == 0)
        {
            count++;
            f_num = i;
        }
        else if(arr[i] == 2)
        {
            count++;
            e_num = i;
        }
    }
    
        if(count == 0)
        {
            answer.push_back(-1);
        }
        else if(count == 1)
        {
            answer.push_back(2);
        }
        else
        {
            for(int k = f_num; k<=e_num; k++)
            {
                answer.push_back(arr[k]);
            }
        }
    return answer;
}