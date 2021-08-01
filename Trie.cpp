
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(a, b, c) for (ll a = b; a < c; a++)
#define repr(a, b, c) for (ll a = b; a >= c; a--)
#define fst first
#define snd second
#define pb push_back
#define pii  pair<ll,ll>
#define vi   vector<ll>
#define all(c) ((c).begin()), ((c).end())
#define test()                        \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define fast()                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define LOG2(X) ((unsigned)(8 * sizeof(unsigned long long) - __builtin_clzll((unsigned long long)(X)) - 1))



class Node{
    public:
    char ch;
    bool isterminal;
    unordered_map<char, Node *> children;
     Node(char c){
         ch = c;
         isterminal = false;
     }
};

class Trie{
    Node *root;

public:
    Trie(){
        root = new Node('\0');
    }

    void insert(string s){
        Node *temp = root;
        for (int i = 0; i < s.size();i++){
            char ch = s[i];
            if(temp->children.count(ch)==0){
                Node *new_node = new Node(ch);
                temp->children[ch] = new_node;
            }

            temp = temp->children[ch];
        }
        temp->isterminal = true;
    }

   bool search(string s){
       Node *temp = root;
       for (int i = 0; i < s.size();i++){
             if(temp->children.count(s[i])==0)
                 return false;
            temp= temp->children[s[i]];
       }
     if(temp->isterminal){
         return true;
     }
     return false;
   }
 
 

};

int solve()
{
    Trie trie ;

    trie.insert("Dharmesh");
    cout << trie.search("Dharmesh");

    return 0;
}

int main()
{
#ifndef ONLINE_JUDGE
    test()
#endif // !ONLINE_JUDGE
        int t = 1;
    //cin >> t;

    while (t--)
    {
        solve();
    }
    return 0;
}