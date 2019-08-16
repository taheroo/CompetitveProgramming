#include <bits/stdc++.h>

using namespace std;

// Complete the isValid function below.
string isValid(string s) {
    string answer = "NO";
    //map containing all characters occurrence
    map <char, int> alphabets;
    for(int i=0; i<s.size(); i++){
        map<char, int>::iterator it = alphabets.find(s[i]);
        if(it == alphabets.end()){
            alphabets.insert(pair<char, int>(s[i], 1));
        }else{
            it->second = it->second + 1;
        }
    }
    map<char, int>::iterator it;
    for(it = alphabets.begin(); it != alphabets.end(); it++){
        cout << it->first<<" : "<< it->second<<endl;
    }

    map <int, int> numbers;
    //map<char, int>::iterator it;
    for(it = alphabets.begin(); it != alphabets.end(); it++){
        map<int, int>::iterator itFindNumber = numbers.find(it->second);
        if(itFindNumber == numbers.end()){
            numbers.insert(pair<int, int>(it->second, 1));
        }else{
            itFindNumber->second = itFindNumber->second + 1;
        }
    }

    map<int, int>::iterator itNumbers;
    for(itNumbers = numbers.begin(); itNumbers != numbers.end(); itNumbers++){
        cout << itNumbers->first<<" : "<< itNumbers->second<<endl;
    }
    if(numbers.size() > 2){
        answer = "NO";
    }else if(numbers.size() == 1){
        answer = "YES";
    }else{
        int fa,sa,fb,sb;
        int x=1;
        for(itNumbers = numbers.begin(); itNumbers != numbers.end(); itNumbers++){
                if(x == 1){
                    fa = itNumbers->first;
                    sa = itNumbers->second;
                }else{
                    fb = itNumbers->first;
                    sb = itNumbers->second;
                }
            x++;
        }


        if(fa == 1 && sa == 1){
            answer = "YES";
        }else{
            if((sb-sa) != 1 && sa != 1 && sb != 1){
                answer = "NO";
            }else{
                if(sb == 1 && (fb-fa) == 1){
                    answer = "YES";
                }
            }
        }
    }
    return answer;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = isValid(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
