#include <iostream>
#include <vector>
using namespace std;

class heap
{
public:
    int *arr;
    int count;
    int size;
    int head_type;

    heap(int size)
    {
        count = 0;
        arr = new int[size];
        head_type = 0;
    }
};

heap *CreateHeap(int size, int heap_type)
{
    heap *h = new heap(size);

    if (h == NULL)
    {
        cout << "memory error\n";
        return h;
    }

    h->head_type = heap_type;
    return h;
}

int getMax(heap*h)
{
    if(h->count==0)
    return -1;
    return h->arr[0]; // max element 
}

int right(heap *h, int i)
{

    int r = (2 * i) + 2;

    if (r >= h->count)
        return -1;
    return r;
}

int left(heap *h, int i)
{
    int l = (2 * i) + 1;

    if (l >= h->count)
        return -1;
    return l;
}

int parent(heap *h, int i)
{
    if (i <= 0 || i >= h->count)
    {
        return -1;
    }

    return (i - 1) / 2;
}

void Hepify(heap*&h,int i)
{
    int l,r,largest;
    largest= i;
    l=left(h,i);
    r=right(h,i);

    if(l<h->count && (h->arr[l] > h->arr[largest]))
    {
        largest=i;
    }

    if(r<h->count && (h->arr[r] > h->arr[largest]))
    {
        largest=r;
    }

    if(largest != i)
    {
        swap(h->arr[i],h->arr[largest]);
        Hepify(h,largest);
    }
}

void resizeHeap(heap*&h)
{
    int* oldArray=h->arr;
    h->arr=new int[h->size*2];
    h->size=h->size*2;

    if(h->arr==NULL)
    {
        cout<<"Memory error\n";
        return ;
    }

    for(int i=0;i<h->size;i++)
    {
        h->arr[i]=oldArray[i];
    }
    delete oldArray;
}
void insert(heap*&h,int data)
{
    int i;
    if(h->count==h->size)
    resizeHeap(h);
    h->count++;
    i=h->count-1;

    while(i>=0 && data>h->arr[(i-1)/2])
    {
        h->arr[i]=h->arr[(i-1)/2];
        i=i-(1/2);
    }
    h->arr[i]=data;
}

void delHeap(heap*&h)
{
    if(h->count==0)
    return ;

    int data=h->arr[0];

    h->arr[0]=h->arr[h->count-1];
    h->count--;
    Hepify(h,0);
}

int main()
{
    heap*h=NULL;
    insert(h,1);
    

    return 0;
}