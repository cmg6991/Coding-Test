#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_suffix) {
    int answer = my_string.rfind(is_suffix);
    if(answer!=string::npos && answer == my_string.size() - is_suffix.size())
        answer = 1;
    else
        answer = 0;
    
    return answer;
}