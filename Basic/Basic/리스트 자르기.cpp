#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(int n, vector<int> slicer, vector<int> num_list) {
    vector<int> answer;
    int a = slicer[0];
    int b = slicer[1];
    int c = slicer[2];
    
    switch (n) {
        case 1:
            answer = vector<int>(num_list.begin(), num_list.begin()+b+1);
            break;
        case 2:
            answer = vector<int>(num_list.begin()+a, num_list.end());
            break;
        case 3:
            answer = vector<int>(num_list.begin()+a, num_list.begin()+b+1);
            break;
        case 4:
            for(int i = slicer[0]; i<=slicer[1]; i+=slicer[2])
            {
                answer.push_back(num_list[i]);
            }
    }
    return answer;
}