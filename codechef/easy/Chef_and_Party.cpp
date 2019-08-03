#include <bits/stdc++.h>


using namespace std;

int main()
{
    int t;
    int n;
    int sum=0;
    cin >> t;
    for (int x=0; x<t; x++){
        cin >> n;
          int tarray[n];
          int tmp=0;
        for(int i=0; i < n;i++){
            cin >> tarray[i];
        }
        /*
        for(int i=0; i < n;i++){
            for(int j=i+1; j < n;j++){
                tmp = tarray[i];
                if(tarray[j]<tarray[i]){
                    tarray[i] = tarray[j];
                    tarray[j] = tmp;
                }
            }
        }*/
        sort(tarray,tarray+n);
        for(int i=0; i < n;i++){
            if(tarray[i] <= sum){
                sum++;
            }else{
                break;
            }
        }
        cout <<sum <<endl;
        sum=0;
    }
    return 0;
}
