#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);
bool isTooChaotic(vector<int> q);
void printVector(vector<int> q);
// Complete the minimumBribes function below.
void minimumBribes(vector<int> q) {
    int bribes = 0;
    if(!isTooChaotic(q)) {
        int flag;
        for(unsigned int k = 1; k < q.size(); k++) {
                flag=0;
            for (std::vector<int>::iterator it = q.begin() ; it != q.end()-k; ++it) {
                if(*it > *(it+1)) {
                    iter_swap(it, it+1);
                    //cout << "Swap "<<*it<<" and "<<*(it+1)<<endl;
                    //printVector(q);
                    bribes++;
                    flag=1;
                }
            }
            if(flag == 0)
                break;
        }
        cout << bribes <<endl;
    }else{
        cout << "Too chaotic"<<endl;
    }

}

void printVector(vector<int> q) {
    for (std::vector<int>::iterator it = q.begin() ; it != q.end(); ++it) {
        cout << *it <<" ";
    }
    cout<<endl;
}

bool isTooChaotic(vector<int> q) {
    int i = 1;
    for (std::vector<int>::iterator it = q.begin() ; it != q.end(); ++it) {
        if((*it - i) > 2)
            return true;
        i++;
    }
    return false;
}

int main()
{
    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        string q_temp_temp;
        getline(cin, q_temp_temp);

        vector<string> q_temp = split_string(q_temp_temp);

        vector<int> q(n);

        for (int i = 0; i < n; i++) {
            int q_item = stoi(q_temp[i]);

            q[i] = q_item;
        }

        minimumBribes(q);
    }

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
