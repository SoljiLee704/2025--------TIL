#include <iostream>
#include <vector>
#include <string>

using namespace std;

//cin의 특징 이해 -> cin은 공백 기준으로 입력
//2차원 벡터 선언 vector<요소의 자료형>임을 고려하여 vector<vector<... 이렇듯 겹쳐써야 함!
//문제 주의사항 잘 읽기 그리고 헤더가 다 제시되었는지 확인
//런타임 에러문제 생기지 않게 최대한 단순하게 코딩 필요!!

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