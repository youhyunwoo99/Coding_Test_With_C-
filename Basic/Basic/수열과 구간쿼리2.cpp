#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    for(int i = 0; i<queries.size(); i++)
    {
        int k = 1000001;
        for(int j = queries[i][0]; j<=queries[i][1]; j++)
        {
            if(arr[j] > queries[i][2] && k>arr[j])
            {
                k=arr[j];
            }
        }
        if(k==1000001)
        {
            answer.push_back(-1);
        }
        else
        {
            answer.push_back(k);
        }
    }
    return answer;
}
//복습완료