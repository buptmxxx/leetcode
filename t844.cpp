#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    string s = "isfcow#";
    string t = "isfco#w#";
    int slow = 0;
    for (int fast = 0;fast<s.length();fast++){
        if(s[fast]!='#'){
            s[slow] = s[fast];
            slow++;
        }
        else{
            if(slow>0)slow--;
        }
    }
    int slow1 = 0;
    for (int fast1 = 0;fast1<t.length();fast1++){
        if(t[fast1]!='#'){
            t[slow1] = t[fast1];
            slow1++;
        }
        else{
            if(slow1>0)slow1--;
        }
    }
    
    int index = 0;
    if(slow!=slow1){
        return 0;
    }
    for(int i=0;i<index;i++){
        if(s[i]!=t[i]){
            return 0;
        }
    }
    return 1;
}

