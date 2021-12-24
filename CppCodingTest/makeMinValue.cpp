//�ּڰ� �����
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int solution(vector<int> A, vector<int> B)
{
    int answer = 0;

    //vector A�� ������������ ����
    sort(A.begin(), A.end());
    //vector B�� ������������ ����
    sort(B.rbegin(), B.rend());
    
    //�� vector�� ��Ҹ� ���� ����
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

    cout << "��� : " << result << endl;
    return 0;
}