#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

int main(){
      // Map creation

      unordered_map<string, string> table;

      // Insertion
// 01: Using Squre bracket[]

      table["in"] = "India";

// 02: Using insert
      table.insert(make_pair("en", "England"));

// 03: Make pair
      pair<string, string> p;
      p.first = "br";
      p.second = "Brazil";
      table.insert(p);

      cout << table.size() << endl;

      cout << table.at("in") << endl;

      table.at("in") = "I'm Indian"; // modify value
      cout << table.at("in") << endl;

      // Checking Iterator    

      unordered_map<string, string> :: iterator it = table.begin();

      while(it != table.end()){
            pair<string, string> p = *it;
            cout << p.first << " " << p.second << endl;
            it++;
      }
      
      // find() method

      if(table.find("in") != table.end()){
            cout << "Key found" << endl;
      }
      else{
            cout << "Key not found" << endl;
      }

      // count() method

      if(table.count("in") == 0){
            cout << "Key not found" << endl;
      }
      if(table.count("in") == 1){
            cout << "Key found" << endl;
      }

      return 0;
}     