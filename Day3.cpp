#include <iostream>
#include <vector>
#include <math.h>

using namespace std;


//아직 미해결 (백준 15829번)
//아스키코드 값을 통해 문자값, 숫자값 자유로운 전환 
//a, b, c ... 순서있는 문자값은 아스키코드 값도 연속적임
//pow값은 항상 double로 취급됨, double에는 %사용 불가능
//+= -= /=과 같은 경우 그 계산만 하는 경우 사용, 만약에 부가적인 계산을 해야 된다면 따로 일일히 계산할 필요 있음

/*
int main(){
    int length;
    const long long MOD = 1234567891;
    string alphabet;
    cin >> length >> alphabet;

    vector<int> number(length,0);

    for(int i=0; i<length; i++){
        number[i] = alphabet[i]-'a'+1;
    }

    long long sum = 0, num=1;

    for (int i=0; i<length; i++){
        number[i] = (number[i] * num) % MOD; 
        sum = (sum + number[i]) % MOD;
        num = (num * 31) % MOD;
    }

    cout << sum;

}  */

/*줄바꿈을 통해 정보를 한 번에 입력할 때 배열/벡터에 입력해야 각줄마다
정보가 따로 들어갈 수 있다.*/
/*
int main(){
    vector<int> num;
    int number=1, Count=0;

    while(number!=0){
        cin >> number;

        if(number==0)
        break;

        num.push_back(number);

            int count=1, flag=0;
            int replace = number;
            
            while(replace>=10){
                replace = replace/10;
                count++;
            }

            vector<int> space(count,0); 

            for(int j=0;j<count;j++){
                space[j]= num[Count]%10;
                num[Count] = num[Count]/10;
            }

            for(int k=0; k<space.size()/2; k++){
                if(space[k]!=space[space.size()-k-1])
                flag = 1;
            }

            if(flag == 1)
            cout << "no" << "\n";
            else
            cout << "yes" << "\n";
            
        Count++;
        

}
}*/

int main(){
    double amount, biggest=0;
    cin >> amount;

    vector <double> test(amount);
    for (int i=0; i<amount; i++)
    cin >> test[i];

    for(int i=0; i<test.size(); i++){
        if(biggest < test[i])
        biggest = test[i];
        else
        continue;
    }

    double sum=0;

    for(int i=0; i<test.size(); i++){
        test[i]= test[i]/biggest*100;
        sum += test[i];
    }

    printf("%.10lf",sum/3);

}




