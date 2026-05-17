#include <iostream>
#include <queue>
using namespace std;

int main(){
      // Creation
      deque<int> dq;

      dq.push_back(10);
      dq.push_back(20);
      dq.push_back(30);
      dq.push_back(40);

      dq.push_front(100);
      dq.push_front(200);
      dq.push_front(300);
      dq.push_front(400);
//    400, 300, 200, 100, 10, 20, 30, 40

      dq.pop_front(); 
//    300, 200, 100, 10, 20, 30, 40 

      dq.pop_back();    
//    300, 200, 100, 10, 20, 30

      cout << dq.size() << endl;

      deque<int> :: iterator it = dq.begin();
      while(it != dq.end()){
            cout << *it << " ";
            it++;
      }cout << endl;

      return 0;
}