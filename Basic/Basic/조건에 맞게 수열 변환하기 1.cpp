#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    for(int i = 0; i<arr.size(); i++)
    {
        if(arr[i] >= 50 and arr[i]%2 == 0)
        {
            arr[i] = arr[i]/2;
        }
        else if(arr[i] < 50 and arr[i]%2 == 1)
        {
            arr[i] *= 2;
        }
    }
    return arr;
}