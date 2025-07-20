#include <iostream>
#include <vector>

using namespace std;

//코딩 문제 예외 사항 잘 파악하고 그에 맞는 코딩 꼼꼼히 하기
//push_over size()등의 명령문 익숙해지기
/*
int main(){
    int num, flag=0;
    vector<int> space;
    cin >> num;

    for(int i=0; i<1000000; i++){
        int sum = 0;
        int origin = i;

        space.clear();
        int n=i;

        while(n>0){
            space.push_back(n%10);
            n /= 10;
            }
        

        for(int j=0; j<space.size(); j++){
            sum += space[j];
        }

        sum += origin;

        if(sum==num){
            cout << origin;
            break;
        }

        if(sum!=num){
            flag++;
        }

        if(flag==1000000)
        cout << 0;
    }
}*/

//return 0을 활용해서 원하는 부분에서 코딩 종료
//패턴 유무 확인 -> 예외사항 있으면 그 부분만 따로 코딩하고 나머지는 패턴에 따라!
/*
int main(){
    int num;
    cin >> num; //방 번호 입력

    num -= 2; 
    int remainder,count=0;
    remainder = num/6;

    
        if(num<6){
        count = 2;
        return 0;
        }

        
        if(num==-1){
        count = 1;
        return 0;
        }


        for(int i=1;remainder>=0;i++){
            remainder -= i;
            count++;
        }

        count += 1;

    cout << count;
}*/

int main(){
    int n,m,result=0,compare=0;
    cin >> n >> m;

    vector<int> nums(n);

    for(int i=0; i<nums.size();i++){
        cin >> nums[i];
    }

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            for(int k=j+1; k<n; k++){

                compare = nums[i]+nums[j]+nums[k];

            if(compare > result && compare<=m)
            result = compare;
            }
        }
    }

    cout << result;
}

7/20 정기 모임때 한 코딩

    이번 코딩에서는 문제 이해에는 어려움이 없었지만 문제를 푸는 데 자꾸 실패가 떠서 여러 번 시행착오를 겪었다.
    이러한 실패가 뜰 때 처음부터 ai한테 물어보지 말고 어떻게 해야되는 지 생각하게되었다.
    우선 내가 의도한 대로 논리적으로 작동할 수 있도록 코딩했는지 확인하고 그 다음에 하나의 명령문마다 주석을 달면서 제대로 기능을 하는 지 따로 확인해볼 필요가 있다.
    이렇게 해야 단순 ai에 의존하는 것이 아니라 스스로 배우고 발전할 수 있다. 그밖에 push_back이나 size()같은 명령어를 따로 찾아보지 말고 익숙해질 필요가 있다.
