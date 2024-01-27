#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int a, int b, int c, int d) {
    vector<int> arr = { a, b, c, d };
    int answer = 0;
    sort(arr.begin(), arr.end());
    if (arr[0] == arr[3])
    {
        answer = 1111 * arr[0];
    }
    else if ((arr[0] == arr[2]) and (arr[0] == arr[1]))
    {
        answer = (10 * arr[0] + arr[3]) * (10 * arr[0] + arr[3]);
    }
    else if ((arr[3] == arr[2]) and (arr[3] == arr[1]))
    {
        answer = (10 * arr[3] + arr[0]) * (10 * arr[3] + arr[0]);
    }
    else if ((arr[3] == arr[2]) and (arr[1] == arr[0]))
    {
        answer = (arr[3] + arr[0]) * abs(arr[3] - arr[0]);
    }
    else if ((arr[3] == arr[2]) and (arr[0] != arr[1]))
    {
        answer = arr[0] * arr[1];
    }
    else if ((arr[2] == arr[1]) and (arr[3] != arr[0]))
    {
        answer = arr[3] * arr[0];
    }
    else if ((arr[1] == arr[0]) and (arr[3] != arr[2]))
    {
        answer = arr[3] * arr[2];
    }
    else
        answer = arr[0];
    return answer;
}
//복습완료