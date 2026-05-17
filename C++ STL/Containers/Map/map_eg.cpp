#include <iostream>
#include <unordered_map>
#include <map>
using namespace std;

int main(){

      map<int, string> table;

      table.insert(make_pair(2, "England"));
      table.insert(make_pair(1, "India"));
      table.insert(make_pair(3, "Brazil"));

      map<int, string> :: iterator it = table.begin();

      while(it != table.end()){
            pair<int, string> p = *it;
            cout << p.first << " " << p.second << endl;
            it++;
      }
}