#include<iostream>
using namespace std;
class DA{
    private: 
    int size; // no of elements present
    int capacity;// total capacity of dynamic array
    int *a = NULL;
    public:
    DA()
    {
        capacity=1;
        size=0;
        a = new int[capacity];
        
    }
    DA(int s)
    {
        this->capacity=s;
        size=0;
        a = new int[capacity];
    
    }
    
    void push_back(int val)
    {
        std::cout << "push ";
      if(size==capacity)
          growArray();
        
     a[size]=val;
     size++;
    }
    
    void pop()
    {
        std::cout << "pop ";
     a[size-1]=0;
     size--;
        
    if(size==capacity/2)
        shrinkArray();
    }
    void growArray()
    {
          std::cout << "Grow ";
        int *temp=new int[capacity*2];
        capacity=capacity*2;
        for(int i=0;i<size;i++)
        {
            temp[i]=a[i];
        }
        delete []a;
        a=temp;
    }
    void shrinkArray()
    {
         std::cout << "Shrink ";
        int *temp=new int[size];
        capacity=size;
        for(int i=0;i<size;i++)
        {
            temp[i]=a[i];
        }
        delete []a;
        a=temp;
    }
    void insert(int val, int index)
    {
         std::cout << "Ins Idx";
         if(size==capacity)
          growArray();
        
        for(int i=size-1;i>=index;i--)
        {
            a[i+1]=a[i];
        }
        a[index]=val;
        capacity++;
    }
    void deleteIdx(int index)
    {
         std::cout << "Del Idx ";
        for(int i=index;i<=size-1;i++)
        {
            a[i]=a[i+1];
        }
        a[size-1]=0;
        size--;
        if(size==capacity/2)
        shrinkArray();
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
    std::cout << "Push ";
    DA da;
    da.push_back(1);
    da.push_back(2);
    da.push_back(3);
    da.push_back(4);
    da.push_back(5);
    da.push_back(6);
    da.push_back(7);
    da.push_back(8);
    da.push_back(9);
    da.push_back(10);
    da.push_back(11);
 
    da.print();
    da.shrinkArray();
    da.print();
    int i=da.search(5);
    std::cout<<i;
    da.insert(20,4);
    da.print();
    da.deleteIdx(4);
    da.print();
    
}
