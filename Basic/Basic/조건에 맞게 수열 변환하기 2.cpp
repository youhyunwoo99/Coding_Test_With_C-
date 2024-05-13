#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(vector<int> arr) {
    int answer = 0;
    bool state = true;
    
    while(1)
    {
        state = true;
        for(int i = 0; i<arr.size(); i++)
        {
            if(arr[i] >= 50 and arr[i]%2 == 0)
        {
            arr[i] = arr[i]/2;
            state = false;
        }
        else if(arr[i] < 50 and arr[i]%2 ==1)
        {
            arr[i] = arr[i] *2 +1;
            state = false;
        }
        }
        
        if(state == true)
        {
            break;
        }
        answer++;
    }
    return answer;
}