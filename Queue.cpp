#include<iostream>
using namespace std;
class Queue{
    private: 
    int size; // no of elements present
    int capacity;// total capacity of dynamic array
    int *a = NULL;
    int front,rear;
    public:
    Queue()
    {
        capacity=1;
        size=0;
        a = new int[capacity];
        
    }
    Queue(int s)
    {
        this->capacity=s;
        size=0; 
        front=0;
        rear=0;
        a = new int[capacity];
    
    }
    void push_back(int val)
    {
        std::cout << "push-- enqueue ";
        
    if(size==capacity)
    return;
     
     a[rear]=val;
     rear++;
     size++;
    }
    
    int pop()
    {
        if(size==0)
        return -1;
        
        return a[front];
        
        
        std::cout << "pop - dequeue ";
        front++;
        size--;
    }
    int fronti()
    {
        if(size==0)
        return -1;
        
        return a[front];
    }
    int reari()
    {
        if(rear==capacity)
        return -1;
        
        return a[rear-1];
    }
    
    int search(int val)
    {
        std::cout << "Search ";
        for(int i=front;i<rear;i++)
        {
            if(a[i]==val)
                return i;
        }
        return -1;
    }
    void print()
    {
        std::cout << "Print ";
        for(int i=front;i<rear;i++)
        {
            std::cout<<a[i]<<" ";
        }
        cout << "No of elements currently in array " << size
             << "Capacity  " << capacity << "\n";
    }
};

int main() {
    std::cout << "Enqueue - Insert ";
    Queue da(100);
    da.push_back(10);
    da.push_back(20);
    da.push_back(30);
   cout <<da.pop()<<" dequeued - delete";
 
    cout << "Front "
         << da.fronti() << endl;
    cout << "Rear"
         << da.reari() << endl;
 
  
    da.print();
   
    
}
