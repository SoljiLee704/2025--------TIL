#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>

using namespace std;

//sort(첫번째 배열, 마지막 배열)을 통해 오름차순으로 정렬 가능
//단, #include <algorithm>을 포함해야 함!
/*
int main(){
    int arr[3];
    for (int i=0; i<3; i++){
        cin >> arr[i];
    }

    while (1){
        if (arr[0]==0 && arr[1]==0 && arr[2]==0)
        break;

        sort(arr,arr+3); //오름차순 정렬


        if (pow(arr[2],2) == pow(arr[0],2) + pow(arr[1],2)){
                cout << "right" << "\n";
            }
            else
            cout << "wrong" << "\n";
        

        for (int i=0; i<3; i++){
        cin >> arr[i];
        }
    }
}*/

// '/' 와 '%' 차이 구분 잘 하기
/*
int main(){
    int num, shirt[6], bundle1, bundle2, sumdle=0;
    cin >> num;
    for (int i=0; i<sizeof(shirt)/sizeof(shirt[0]); i++){
        cin >> shirt[i];
    }
    cin >> bundle1 >> bundle2;


    for (int i=0; i<sizeof(shirt)/sizeof(shirt[0]); i++){
       if(shirt[i]==0)
       continue;
       else
        sumdle += ((shirt[i] -1)/bundle1 + 1);
    }

    cout << sumdle << "\n";
    cout << num/bundle2 << ' ' << num%bundle2;
}
*/

// 소수의 개수 알아내기 (비효율적인 건 최대한 빼기)
/*
int main(){
    int num,rem=0,total=0;
    cin >> num;

    vector<int> test(num);

    for(int i=0; i<test.size(); i++){
        cin >> test[i];
    }
    
    for(int i=0; i<test.size(); i++){
        
        int sum=0;

        for (int j=2; j<=test[i]; j++){
        
            rem = test[i]%j;
            if (rem==0)
            sum++;
            else
            continue;
        
    }
        if (sum==1)
        total++;
    }

    cout << total;
}*/

/*
int main(){
    int num;
    cout << num;

    for(int i=0; i<=1000000; i++){
        int replace = i;
        string nums = to_string(replace);
        int sum=0;

        for(int i=0; i<nums.size(); i++){
            sum += (nums[i]-'0');
        }

        if(sum + replace == num){
            cout << replace;
            break;
        }

        else
        continue;
    }

}*/

//c가 아니라 c++로 코딩 짜보는 연습 중
//아직 모르는 헤더 기능이 많아서 헤더 기능을 알고 어떻게 활용하는 지가 중요할 것으로 보임.
//중간에 이해가 어려운 코딩은 주석을 달아가면서 문제 부분 발견 및 수정
//코딩이 끝난 후에도 ai를 활용해 더 간단한 코딩은 어떻게 만드는지 모색해 나감.
