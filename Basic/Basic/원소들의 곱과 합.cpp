#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    int hap = 0, gop = 1;
    for(int i = 0; i < num_list.size(); i++)
    {
        hap = hap + num_list[i];
        gop = gop * num_list[i];
    }
    if(pow(hap, 2) > gop)
    {
        answer = 1;
    }
    else if(pow(hap, 2) < gop)
    {
        answer = 0;
    }
    return answer;
}