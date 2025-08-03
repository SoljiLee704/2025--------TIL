#include <iostream>
#include <vector>
#include <string>

using namespace std;

/*
int countrepaint(const vector<string>& board, int row, int col){
    int repaint1 = 0;
    int repaint2 = 0;

    for(int i = 0; i<8; i++){
        for(int j=0; j<8; j++){
            char expected1 = ((i+j)%2==0) ? 'W' : 'B';
            char expected2 = ((i+j)%2==0) ? 'B' : 'W';

            if (board[row+i][col+j] != expected1) repaint1 ++;
            if (board[row+i][col+j] != expected2) repaint2 ++;
        }
    }

    return min(repaint1,repaint2);
}

int main(){
    int n, m;
    cin >> n >> m;

    vector<string> board (n);

    for(int i=0; i<n; i++){
        cin >> board[i];
    }

    int count = 100000, compare;

    for(int row=0; row<=n-8; row++){
        for(int col=0; col<=m-8; col++){
            compare = countrepaint(board, row, col);
            if (count > compare)
            count = compare;
        }
    }

    cout << count;
    
}*/

int main(){
    int number;
    cin >> number;
    vector<string> words(number);

    for(int i=0; i<number; i++){
        string store;
        cin.ignore();
        getline(cin,store);
        words[i]=store;
    }

    cout << words[0];

}

cin, scanf, getline(), cin.get() 등 입력 명령어에 대해 자세히 파악 필요.
문제에 예외사항, 특이사항있는지 자세히 확인 
코딩은 최대한 단순하게 해서 런타임 에러 안 생기도록 주의
2차원 벡터는 벡터<요소의 자료형>이라는 점을 고려해서 벡터<벡터<...>> 형식으로 선언함 
