#include <bits/stdc++.h>


using namespace std;

int main()
{
    int testCasesNumber;
    cin >> testCasesNumber;
    string s[testCasesNumber];
    int sum=0;
    for(int x=0; x<testCasesNumber; x++){
        cin >> s[x];
    }
    for(int x=0; x<testCasesNumber; x++){
        for(int i=0; i<s[x].size();i++){
        switch(s[x][i]){
            case '1' : sum+=1;break;
            case '2' : sum+=2;break;
            case '3' : sum+=3;break;
            case '4' : sum+=4;break;
            case '5' : sum+=5;break;
            case '6' : sum+=6;break;
            case '7' : sum+=7;break;
            case '8' : sum+=8;break;
            case '9' : sum+=9;break;
            default : break;
            }
        }
        cout << sum<<endl;
        sum=0;
    }



    return 0;
}
