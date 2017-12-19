#include <iostream>
#include <string>

using namespace std;



bool is_Palindrome(string s){
  
  int j = s.length() - 1;
  
  for(int i = 0; i < s.length(); i++){
     if(s[i] == s[j])
       j--;
     else
       return false;
  }
  
  return true;
  
  
}

int main(){
  
  string s = "mom";
  
  cout<<'\"'<<s<<"\" is ";
  
  if(is_Palindrome(s))
    cout<<"a palindrome."<<endl;
  else
    cout<<"not a palindrome."<<endl;
  
  return 0;
}