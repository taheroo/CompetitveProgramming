#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int A1;
    cin >> A1;
    int A2;
    cin >> A2;
    int A3;
    cin >> A3;
    int A4;
    cin >> A4;
    int A5;
    cin >> A5;

    int r1=0;
    int r2=0;
    int r3=0;
    int r4=0;
    int r5=0;
    if((A1-1)<10){
        r1 = 100 - (A1-1)*10;
    }
    if((A2-2)<10){
        r2 = 100 - (A2-2)*10;
    }
    if((A3-3)<10){
        r3 = 100 - (A3-3)*10;
    }
    if((A4-4)<10){
        r4 = 100 - (A4-4)*10;
    }
    if((A5-5)<10){
        r5 = 100 - (A5-5)*10;
    }
    cout << r1+r2+r3+r4+r5;

    return 0;
}

