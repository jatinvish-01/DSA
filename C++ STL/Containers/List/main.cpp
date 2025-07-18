#include <iostream>
#include <list>
using namespace std;

int main(){

      list<int> mylist;

      mylist.push_back(10);
      mylist.push_back(20);
      mylist.push_back(30);
      mylist.push_back(40);
      mylist.push_back(10);

      // Use all member function

      // Traversing using iterator in list
      
      cout << "Before removing" << endl;

      list<int> :: iterator it = mylist.begin();

      while(it != mylist.end()){
            cout << *it << " ";
            it++;
      }cout << endl;

      
      mylist.remove(10); // remove method to remove 10 from the list
      

      cout << "After removing" << endl;

      list<int> :: iterator it2 = mylist.begin();

      while(it2 != mylist.end()){
            cout << *it2 << " ";
            it2++;
      }cout << endl;

      return 0;
}