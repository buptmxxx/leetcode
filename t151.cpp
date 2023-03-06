#include<iostream>
#include<vector>
using namespace std;
void reverse_words(string &s,int start,int end) {
    for(int i=start,j=end;i<j;i++,j--) {
        swap(s[i],s[j]);
    }
}
int main(int argc, char const *argv[])
{
    string s = " the    skxy is blue";
    string s1 = "";
    string ans = "";
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
    if(s1[0]==' '){
        s1.erase(0,1);
    }
    if(s1[s1.length()-1]==' '){
        s1.erase(s1.length()-1,1);
    }
    reverse_words(s1,0,s1.length()-1);
    int start = 0;
    for (int i = 0; i <= s1.length(); i++)
    {
        if(s1[i]==' '||i==s1.length()){
            reverse_words(s1,start,i-1);
            start = i+1;
        }
    }
    
    cout<<s1;

    
    // // return s1;

    return 0;
}
