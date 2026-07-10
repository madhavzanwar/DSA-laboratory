#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int main(){
    string word;
    cin>> word;
    string rev = word;

    reverse(word.begin(), word.end());

    if(rev == word){
        printf("This is a plalindrome");
    }
    else{
        printf("Not a palindrome");
    }
}