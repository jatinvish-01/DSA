#include <iostream>
#include <queue>
using namespace std;

int main(){

      // Creation Queue
      queue<int> q;

      // Insertion
      q.push(10);
      q.push(20);
      q.push(30);
      q.push(40);

      cout << q.size() << endl;

      // Pop Method

      q.pop();
      cout << q.size() << endl;
 
      // Front, and Back Method

      cout << "Front: " << q.front() << endl;
      cout << "Back: " << q.back() << endl;


      // empty Method

      if(q.empty() == true){
            cout << "Queue is empty" << endl;
      }
      else{
            cout << "Queue is not empty" << endl;

      return 0;
      }
}