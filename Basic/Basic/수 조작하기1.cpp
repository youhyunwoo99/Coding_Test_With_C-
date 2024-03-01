#include <string>
#include <vector>

using namespace std;

int solution(int n, string control) {
    int answer = 0;
    
    for(int i = 0; i < control.size(); i++)
    {
        if(control[i] == 'w')
        {
            n=n+1;
        }
        else if(control[i] == 's')
        {
            n=n-1;
        }
        else if(control[i] == 'd')
        {
            n=n+10;
        }
        else
        {
            n=n-10;
        }
    }
    answer = n;
    return answer;
}