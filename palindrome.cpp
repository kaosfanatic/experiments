#include <iostream>
#include <string>

using namespace std;



bool is_Palindrome(string s){
  
  int j = s.length() - 1;
  
  if(s.length() == 0)
     return true;
  
  for(int i = 0; i < s.length()/2; i++){
     if(s[i] == s[j])
       j--;
     else
       return false;
  }
  
  return true;
  
  
}

int main(){
  
  char s[25];
  
  do{
  cout<<"Input string: ";
  cin.getline( s,25);
  }while(s == NULL);
  
  
  if(s != NULL){
    cout<<'\"'<<s<<"\" is ";
    if(is_Palindrome(s))
      cout<<"a palindrome."<<endl;
    else
      cout<<"not a palindrome."<<endl;
  }
  else
     cout<<"Invalid input\n";
  
  return 0;
}