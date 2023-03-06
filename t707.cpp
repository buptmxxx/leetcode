#include<iostream>
using namespace std;
class MyLinkedList {
public:
    struct LinkedNode {
        int val;
        LinkedNode* next;
        LinkedNode(int val):val(val), next(nullptr){}
    };
    MyLinkedList() {
        dummy_Head = new LinkedNode(0);
        size = 0;
    }
    int get(int index) {
        if(index<size&&index>=0){

            LinkedNode* cur_index = dummy_Head->next;
            for(int i=0;i<index;i++){
                cur_index = cur_index->next;
            }
            return cur_index->val;
        }
        else{
            return -1;
        }

    }
    
    void addAtHead(int val) {
        addAtIndex(0,val);

    }
    
    void addAtTail(int val) {
        addAtIndex(size,val);
    }
    
    void addAtIndex(int index, int val) {
        if(index>size){
            return;
        }
        else{
            LinkedNode* new_node = new LinkedNode(val);
            LinkedNode* cur_index = dummy_Head;
            for(int i=0;i<index;i++){
                cur_index = cur_index->next;
            }
            new_node->next = cur_index->next;
            cur_index->next = new_node;
            size++;
        }
        
    }
    
    void deleteAtIndex(int index) {
        if(index>=size||index<0){
            return;
        }
        else{
            LinkedNode* cur_index = dummy_Head;;
            for(int i=0;i<index;i++){
                cur_index = cur_index->next;
            }
            LinkedNode* tmp = cur_index->next;
            cur_index->next = cur_index->next->next;
            delete tmp;
            size--;
        }
        
    }
    private:
        int size;
        LinkedNode* dummy_Head;
};
int main(int argc, char const *argv[])
{
    MyLinkedList* obj = new MyLinkedList();
    obj->addAtHead(2);
    obj->deleteAtIndex(1);
    obj->addAtHead(2);
    obj->addAtHead(7);
    obj->addAtHead(3);
    obj->addAtHead(2);
    obj->addAtHead(5);
    obj->addAtTail(5);
    cout<<obj->get(5)<<" ";
    obj->deleteAtIndex(6);
    obj->deleteAtIndex(4);
    return 0;
}
