#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
 
    if(n % 2 == 1)
    {
        for(int i = n; i>=0; i--)
        {
            if(i%2 == 1){
                answer += i;
            }
        }
    }
    else if (n % 2 == 0)
    {
        for(int j = n; j>=0; j--)
        {
            if(j%2 == 0){
                answer += j*j;
            }
        }
    }
    return answer;
}