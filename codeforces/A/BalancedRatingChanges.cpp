#include <bits/stdc++.h>


using namespace std;

int negativeNumbersSum(int tarray[], int n);
int positiveNumbersSum(int tarray[], int n);
int* getbArray(int tarray[], int n);

int negativeNumbersSum(int tarray[], int n) {
    int sum = 0;
    for(int i=0; i < n; i++)
    {
        if(tarray[i] < 0)
            sum += tarray[i]/2;
    }
    return sum;
}
int positiveNumbersSum(int tarray[], int n) {
    int sum = 0;
    for(int i=0; i < n; i++)
    {
        if(tarray[i] > 0)
            sum += tarray[i]/2;
    }
    return sum;
}


int main()
{
    int n;
    cin >> n;

    int tarray[n];
    int k;
    int sum=0;
    int diff=0;
    for(int i=0; i < n; i++)
    {
        cin >> k;
        tarray[i] = k;
    }
    int barray[n];
    for(int i=0; i < n; i++)
    {
        barray[i] = tarray[i]/2;
    }

    int negativeNumbers = negativeNumbersSum(tarray,n);
    int positiveNumbers = positiveNumbersSum(tarray,n);
    diff = positiveNumbers + negativeNumbers;
    if(diff > 0) {
        for(int i=0; i < n; i++) {
            if(tarray[i] < 0 && (tarray[i]%2) != 0) {
                barray[i] = barray[i] - 1;
                diff--;
            }
            if(diff == 0)
                break;
        }
    } else if(diff < 0) {
        for(int i=0; i < n; i++) {
            if(tarray[i] > 0 && (tarray[i]%2) != 0) {
                barray[i] = barray[i] + 1;
                diff++;
            }
            if(diff == 0)
                break;
        }

    }
    //cout << "------------------------------" <<endl;
    for(int i = 0; i < n; i++) {
        cout << barray[i]<<endl;
    }

    //cout << " SUM - : "<<negativeNumbersSum(tarray,n)<<endl;
    //cout << " SUM + : "<<positiveNumbersSum(tarray,n)<<endl;
    //cout << " diff : "<<diff<<endl;


    return 0;
}
