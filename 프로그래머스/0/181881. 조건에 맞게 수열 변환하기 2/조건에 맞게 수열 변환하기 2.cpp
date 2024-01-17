#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr) {
    vector<int> check=arr;
    int answer = 0;
    while(1)
    {
        for(int i = 0;i<arr.size();i++)
        {
            if(arr[i]>=50&&arr[i]%2==0)
                arr[i]/=2;
            else if(arr[i]<50&&arr[i]%2 == 1)
            {
                arr[i]*=2;
                arr[i]+=1;
            }
        }
        answer++;
        if(check == arr) return answer - 1;
        else check = arr;
    }
}