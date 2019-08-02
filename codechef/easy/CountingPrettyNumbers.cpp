#include <bits/stdc++.h>


using namespace std;

int main()
{
    int t;
    int currentN=0;
    int sum=0;
    cin >> t;
    int tarray[t][2];
    for(int i=0; i<t; i++){
        cin >> tarray[i][0] >> tarray[i][1];
    }
    for(int i=0; i<t; i++){
        for(int j=tarray[i][0];j<=tarray[i][1];j++){
                currentN = j%10;
            if((currentN == 2)||(currentN== 3)||(currentN == 9)){
                sum++;
            }
        }
        cout << sum<<endl;
        sum=0;
    }

    return 0;
}
