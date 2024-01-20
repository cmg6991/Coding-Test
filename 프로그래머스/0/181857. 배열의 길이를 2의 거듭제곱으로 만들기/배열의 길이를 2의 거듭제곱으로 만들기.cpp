#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer = arr;
    int length =1;
    while(length < arr.size())
        length*=2;
    
    while(answer.size()<length)
        answer.push_back(0);
    return answer;
}