#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    string ransomNote = "aa";
    string magazine = "aab";
        int record[26] = {0};
        if(ransomNote.size() > magazine.size()){
            return false;
        }
        else{
            for(int i=0;i<ransomNote.size();i++){
                record[ransomNote[i]-'a']++;
            }
            for(int i=0;i<magazine.size();i++){
                record[magazine[i]-'a']--;
            }
            for(int i=0;i<26;i++){
                if(record[i]<0){
                    return false;
                }
            }
        }
        return true;
    return 0;
}
