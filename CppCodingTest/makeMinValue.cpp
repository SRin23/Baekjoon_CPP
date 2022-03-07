//최솟값 만들기
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int solution(vector<int> A, vector<int> B)
{
    int answer = 0;

    //vector A를 오름차순으로 정렬
    sort(A.begin(), A.end());
    //vector B를 내림차순으로 정렬
    sort(B.rbegin(), B.rend());
    
    //두 vector의 요소를 각각 곱함
    for (int i = 0; i < A.size(); i++) {
        answer += A[i] * B[i];
    }

    return answer;
}

int main() {
    vector<int> A;
    A.push_back(1);
    A.push_back(4);
    A.push_back(2);

    vector<int> B;
    B.push_back(5);
    B.push_back(4);
    B.push_back(4);
    
    int result = solution(A, B);

    cout << "결과 : " << result << endl;
    return 0;
}