#include <iostream>
#include <list>
using namespace std;

int main(){

      list<int> arr;
      arr.push_back(11);
      arr.push_back(22);
      arr.push_back(33);

      arr.insert(arr.begin(), 100);
      arr.insert(arr.end(), 200);

       list<int> :: iterator it = arr.begin();

      while(it != arr.end()){
            cout << *it << " ";
            it++;
      }cout << endl;

      return 0;
}