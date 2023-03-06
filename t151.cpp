#include<iostream>
#include<vector>
using namespace std;
int main(int argc, char const *argv[])
{
    string s = " the    skxy is blue  ";
    string s1 = "";
    vector<int> v1;
    int length = s.length();
    for(int i=0;i<length;i++){
        if(s[i]==' '&&s[i+1]==' '){
            continue;
        }
        else if(s[i]==' '&&s[i+1]!=' '){
            s1.push_back(' ');;
        }
        else{
            s1.push_back(s[i]);
        }
        // if(s[s.length()])
    }
    s1  = s1.erase(0, s1.find_first_not_of(' ')); // 去掉前导空格
    s1.erase(s1.find_last_not_of(' ') + 1); // 去掉后缀空格;
    cout<<s1;
    // // return s1;

    return 0;
}
