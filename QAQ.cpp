#include<iostream>
#include<string>

using namespace std;

int main(){
  
  string s;
  cin >> s;

  s.replace(0,s.find("Q") , {""});
  int Q = -1;
  for (int i = 0; i < s.size();i++){
    if (s[i] == 'Q')
      Q = i;
    //  cout << i<<" ";
    if((s[i]!='Q')&&(s[i]!='A')){
     
 //     cout << s[i];
      s.replace(i, 1,{""});
      i--;
    }
   // cout << endl;
  }
  if(Q==-1){
    cout << 0 << endl;
    
  }else{
  
  if(Q<s.size()-1){
    s.replace(Q+1, s.size()-1-Q, {""});
  }
  

  //  cout << s<<" "<<s.size()<<" "<<Q;
  int arr[s.size()] = {};
  int Q_count = 0;
  for (int i = 0; i < s.size(); i++)
  {
    if (s[i] == 'Q')
      Q_count++;

    if (s[i] == 'A')
      arr[i] = Q_count;
   }
  //  for (int i = 0; i < s.size(); i++)
  //  {
  //    cout << arr[i] << " ";
  //  }
  //  cout << endl;

   for (int i = 0; i < s.size();i++){
      if(s[i]=='A'){
        int num = arr[i];
        int index_multiple = 1;
        for (int j = i; j < s.size(); j++)
        {
         if(s[j]=='Q'){
           arr[j] = arr[j] + (num * index_multiple);
           index_multiple++;
         }
     
        }
     }
   }
  //  for (int i = 0; i < s.size(); i++)
  //  {
  //    cout << arr[i] << " ";
  //  }
   cout << arr[s.size() - 1]<<endl;
   }
}