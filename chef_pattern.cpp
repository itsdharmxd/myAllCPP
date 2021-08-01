#include <iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        string s,p,cp , o;
        cin>>s>>p;
        cp=p;
        sort(s.begin(), s.end());
        sort(p.begin(), p.end());
        for (auto si=s.begin(), pi=p.begin();*si!='\0' ;si++) {
                      if(*si==*pi){
                          auto sj=si;
                              for (;*sj!='\0';sj++) {
                              *sj=*(sj+1);
                             
                          }
                              *sj='\0';
                          pi++;
                          si--;
                      }
        } 
        
        char start=*cp.begin();
        int insert=1;
        for(auto si=s.begin();*si!='\0';si++){ 
            if(start<*si&&insert){
                for(auto pi=cp.begin();*pi!='\0';pi++){ 
                    o.push_back(*pi);
                }
                insert=0;
            }
            o.push_back(*si);

        }
        if (insert) {
            for (auto pi=cp.begin();*pi!='\0';pi++) {
                o.push_back(*pi);
            }

        }
        cout<<o<<endl;
         
        
        
    }
    
 

}