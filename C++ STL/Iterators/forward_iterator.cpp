#include <iostream>
#include <vector>
#include <forward_list>
using namespace std;

int main(){

      std::forward_list<int> arr{10,20,30,40};

      std::forward_list<int>::iterator it = arr.begin();

      while(it != arr.end()){
            (*it) = (*it) + 5;
            it++;
      }cout << endl;

      it = arr.begin();
      while(it != arr.end()){
            cout << *it << " ";
            it++;
      }cout << endl;

      // Let's try backward moving

      std::forward_list<int>::iterator it = arr.end();

      // while(it != arr.begin()){
      //       cout << *it << " ";
      //       it--; // error
      // }



      return 0;
}