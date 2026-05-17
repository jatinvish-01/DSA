#include <iostream>
#include <unordered_set>
#include <set>
using namespace std;

int main(){

      unordered_set<int> st;  

      st.insert(10);
      st.insert(15);
      st.insert(8);     
      st.insert(4);

      unordered_set<int> :: iterator it = st.begin();

      while(it != st.end()){
            cout << *it << endl;
            it++;
      }
      // find()
      if(st.find(15) != st.end()){
            cout << "Found" << endl;
      }
      else{
            cout << "Not found" << endl;
      } 

      // count()

      if(st.count(156) == 1){
            cout << "Found" << endl;
      }
      if(st.count(156) == 0){
            cout << "not Found" << endl;
      } 


      return 0;
}
