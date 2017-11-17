/*https://www.hackerrank.com/challenges/abstract-classes-polymorphism/problem*/
//Given
#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <set>
#include <cassert>
using namespace std;

struct Node{
   Node* next;
   Node* prev;
   int value;
   int key;
   Node(Node* p, Node* n, int k, int val):prev(p),next(n),key(k),value(val){};
   Node(int k, int val):prev(NULL),next(NULL),key(k),value(val){};
};

class Cache{
   
   protected: 
   map<int,Node*> mp; //map the key to the node in the linked list
   int cp;  //capacity
   Node* tail; // double linked list tail pointer
   Node* head; // double linked list head pointer
   virtual void set(int, int) = 0; //set function
   virtual int get(int) = 0; //get function

};
//!Given
class LRUCache : public Cache{
    public:
        LRUCache(int n){
            cp = n;
            tail = nullptr;
            head = nullptr;
        }
    
        virtual void set(int k , int v){
            //remove the first cache if full
            if (mp.size() == cp){
               Node* temp = head->next;
               temp->prev = nullptr;
               mp.erase(mp.find(head->key));
               head = temp;
            }

            //start insert
            Node* n = new Node(tail, nullptr, k, v);

            
            //first item
            if (mp.size() == 0){
                head = n;
            }else{
                (tail->next) = n;
            }
            
            //change tail pointer
            tail = n;
            mp[k] = n;
        }
    
        virtual int get(int key){
            try{
                Node* temp = mp.at(key);
                int val = temp->value;
                if(temp->prev == nullptr){
                    head = temp->next;
                }else{
                    temp->prev->next = temp->next;
                }
                
                if(temp->next == nullptr){
                    tail = temp->prev;
                }else{
                    temp->next->prev = temp->prev;
                }
                mp.erase(key);
                set(key, val);
                return val;
                
            }catch (std::out_of_range e){
                return -1;
            }
        }
};

//Given
int main() {
   int n, capacity,i;
   cin >> n >> capacity;
   LRUCache l(capacity);
   for(i=0;i<n;i++) {
      string command;
      cin >> command;
      if(command == "get") {
         int key;
         cin >> key;
         cout << l.get(key) << endl;
      } 
      else if(command == "set") {
         int key, value;
         cin >> key >> value;
         l.set(key,value);
      }
   }
   return 0;
}
