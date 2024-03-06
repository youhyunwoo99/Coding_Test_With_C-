#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(string my_string, vector<vector<int>> queries) {
    string answer = my_string;
    for(auto a : queries)
    {
        reverse(answer.begin()+a[0], answer.begin()+a[1]+1);
    }
    
    return answer;
}