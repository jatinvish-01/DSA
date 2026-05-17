#include <iostream>
#include <vector>
#include <list>
#include <forward_list>
using namespace std;

int main(){

      std::list<int> myList{10,20,30,40};

      std::list<int>::iterator it = myList.begin(); 

      while(it != myList.end()){
            // write
            (*it) = (*it) + 3;

            //Read
            cout << *it << " ";
            it++;
      }cout << endl;


      // Backward moving
      std::list<int>::iterator it = myList.end();
      while(it != myList.begin()){
            it--;
            (*it) = (*it) + 5;
            cout << *it << " ";
      }
      cout << endl;
 
      return 0;
}