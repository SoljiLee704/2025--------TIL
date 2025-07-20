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