#include <bits/stdc++.h>


using namespace std;

int main()
{
    int t;
    int n;
    int k;
    int answer = 0;
    int sum=0;
    int currentSum=0;
    cin >> t;
    for (int x=0; x<t; x++){
        cin >> n;
        cin >> k;
          int tarray[n];
        for(int i=0; i < n;i++){
            cin >> tarray[i];
        }
        sort(tarray, tarray+n, greater<int>());
        //sum
        for(int i=0; i<n; i++){
            sum+=tarray[i];
        }
        for(int i=0; i<n; i++){
                currentSum = sum-tarray[i];
            if(tarray[i]+k > currentSum){
                answer++;
            }else{
                break;
            }
        }
        cout << answer<<endl;
        answer=0;
        sum=0;
        currentSum = 0;
    }
    return 0;
}
