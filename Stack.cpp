#include<iostream>
using namespace std;
class Stack
{
    private: 
    int size; // no of elements present
    int capacity;// total capacity of dynamic array
    int *a = NULL;
    int  top;
    public:
    Stack()
    {
        capacity=1;
        size=0;
        top=0;
        a = new int[capacity];
        
    }
    Stack(int s)
    {
        this->capacity=s;
        size=0; 
        top=0;
        a = new int[capacity];
    
    }
    void push_back(int val)
    {
        std::cout << "push-- enqueue ";
        
    if(size==capacity)
    return;

        a[top++]=val;
        size++;
    }
    
    int pop()
    {
        if(size==0)
        return -1;
        
        int ans= a[top-1];
        
        
        std::cout << "pop - dequeue ";
        top--;
        size--;
        return ans;
    }
    int topi()
    {
        if(size==0)
        return -1;
        
        return a[top-1];
    }
   
    
    int search(int val)
    {
        std::cout << "Search ";
        for(int i=0;i<size;i++)
        {
            if(a[i]==val)
                return i;
        }
        return -1;
    }
    void print()
    {
        std::cout << "Print ";
        for(int i=0;i<size;i++)
        {
            std::cout<<a[i]<<" ";
        }
        cout << "No of elements currently in array " << size
             << "Capacity  " << capacity << "\n";
    }
};

int main() {
   
    Stack da(100);
    da.push_back(10);
    da.push_back(20);
    da.push_back(30);
    da.print();
   cout <<da.pop()<<" dequeued - delete";
   da.print();
 
    cout << "Top "
         << da.topi()<< endl;
   
  
    da.print();
   
    
}
