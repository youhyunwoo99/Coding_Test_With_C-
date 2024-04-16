#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    int odd_num = 0;
    int even_num = 0;
    
    for(int i = 0; i<num_list.size(); i++)
    {
        if(i%2 == 0)
        {
            even_num += num_list[i];
        }
        else
        {
            odd_num += num_list[i];
        }
    }
    if(odd_num>even_num)
    {
        return odd_num;
    }
    else
    {
        return even_num;
    }
}