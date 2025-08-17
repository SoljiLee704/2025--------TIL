#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//for문 쓸 때 불필요한 부분은 제외할 수 있도록 최대한 단순화
//답을 구해서 더이상 코딩을 이어나갈 필요가 없다면 return 0을 붙여서 시간 최소화
/*
int main(){
    int num, extinct=0;
    cin >> num;

    for(int i=666;; i++){
        int count=0;
        int replace = i;
        while(replace>0){
            if(replace%10==6)
                count++;
            else
                count=0;
            if(count == 3){
            extinct++;
            if(num==extinct){
            cout << i;
            return 0;
            }
            break;
        }
            replace /= 10;
        }
    }
}*/

//int, double 등 숫자 자료형의 범위 확인
//algorithm헤더에 있는 min(num1,num2)를 통해 작은 수 구하기
/*
int main(){
    int num, count1=0, count2=0;
    cin >> num; 

    while(num>0){
            int num1 = num;
            int num2 = num;
            while(num1 % 5 == 0){
                count1++;
                num1 /= 5;
            }
            while(num2 % 2 == 0){
                count2++;
                num2 /= 2;
            }
        num -= 1;
    }

    int min_num = min(count1,count2);
    cout << min_num;

}*/


int main(){
    int num;
    cin >> num;
    vector<int> stack(num);

    for(int i=0; i<num; i++)
    cin >> stack[i];

}

이번 코드 난이도는 전보다는 어렵지 않았음... 그래서 코딩을 하고 그 후에 코딩을 어떻게 해야 더 시간이 단축되고 깔끔하게 보일 수 있는지를 위주로 공부함. 
    그리고 알고리즘 헤더에 여러가지 기능이 있기 때문에 앞으로 코딩할 때는 알고리즘 헤더를 넣어두고 그 헤더가 할 수 있는 기능을 배워가며 공부하겠다.

