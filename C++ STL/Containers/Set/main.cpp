#include <iostream>
#include <set>
using namespace std;

int main(){

      // Creation
      set<int> st;

      // Insertion
      st.insert(10);
      st.insert(15);
      st.insert(8);
      st.insert(4);

      // Traverse

      set<int> :: iterator it = st.begin();

      while(it != st.end()){
            cout << *it << endl;
            it++;
      }


      return 0;
}
