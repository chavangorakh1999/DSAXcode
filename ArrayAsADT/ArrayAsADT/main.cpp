//
//  main.cpp
//  ArrayAsADT
//
//  Created by Gorakh Chavan on 20/03/20.
//  Copyright © 2020 Gorakh Chavan. All rights reserved.
//

#include <iostream>
using namespace std;
//Array Using pointer
//struct Array
//{
//    int *A;
//    int size;
//    int length;
//};
//void display(struct Array arr)
//{
//    cout<<"Array elements are"<<endl;
//    for(int i=0;i<arr.length;i++)
//    {
//        cout<<arr.A[i]<<" ";
//    }
//};
//
//int main()
//{
//    struct Array arr;
//    int n;
//    cout<<"Enter Size of Array"<<endl;
//    cin>>arr.size;
//    arr.A=new int[arr.size];
//    arr.length=0;
//    cout<<"Enter number of elements you want to enter"<<endl;
//    cin>>n;
//    cout<<"Enter Array elements";
//    for(int i=0;i<n;i++)
//    {
//        cin>>arr.A[i];
//    }
//    arr.length=n;
//    display(arr);
//
//
//    return 0;
//}
//Simple Declaration of array

struct Array
{
   
    int *A;
    int size;
    int length;
};
void display(struct Array arr)
{
    cout<<"Array elements are"<<endl;
    for(int i=0;i<arr.length;i++)
    {
        cout<<arr.A[i]<<" ";
    }
}
void append(struct Array *arr,int x)
{
  if(arr->length<arr->size)
  {
      arr->A[arr->length++]=x;
  }
}
void insert(struct Array *arr,int index,int x)
{
  if(index>=0 && index<=arr->length)
  {
      for(int i=arr->length;i>index;i--)
      {
          arr->A[i]=arr->A[i-1];
          
      }
      arr->A[index]=x;
      arr->length++;
      
  }
}
int Delete(struct Array *arr,int index)
{
    int x=0;
    x=arr->A[index];
    if(index>=0 && index<arr->length)
    {
        for(int i=index;i<arr->length-1;i++)
    {
        arr->A[i]=arr->A[i+1];
        
    }
        arr->length--;
        return x;
    }
    
    
    return 0;
    
}
void Swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int LinearSearch(struct Array *arr,int key)
{
    for(int i=0;i<arr->length;i++)
    {
        if(key==arr->A[i])
        {
            //Linear search using Transposition
            swap(arr->A[i],arr->A[i-1]);
            //Linear Search using Move to head method
            swap(arr->A[i],arr->A[0]);
            return i;
        }
        
    }
    return -1;
}
//itterative version of binary search using loop
int BinarySearch(struct Array arr,int key)
{
    int l=0,m=0;
    int h=arr.length-1;
  
    
   while(l<=h)
    {
        m=(l+h)/2;
        
        if(arr.A[m]==key)
        {
            return m;
        }
        else if(arr.A[m]<key)
        {
            l=m+1;
        }
        else
        {
            h=m-1;
        }
    }
        
    return -1;
}
//Get the value for that index
int Get(struct Array arr,int index)
{
  if(index>=0&&index<arr.length)
  {
      cout<<arr.A[index];
  }
    return -1;
}

int Set(struct Array arr,int index,int x)
{
  if(index>=0&&index<arr.length)
  {
      arr.A[index]=x;
  }
    return -1;
}

int Max(struct Array arr)
{
    int max=arr.A[0];
    for(int i=1;i<arr.length;i++)
    {
       if(max<arr.A[i])
       {
           max=arr.A[i];
       }
    
    }
    return max;
}

int Min(struct Array arr)
{
    int min=arr.A[0];
    for(int i=1;i<arr.length;i++)
    {
       if(min>arr.A[i])
       {
           min=arr.A[i];
       }
    
    }
    return min;
}
int sum(struct Array arr)
{
    int sum=0;
    for(int i=0;i<arr.length;i++)
    {
        sum=sum+arr.A[i];
    }
    return sum;
    
}
int Avg(struct Array arr)
{
    int sum=0;
    for(int i=0;i<arr.length;i++)
    {
        sum=sum+arr.A[i];
    }
    return sum/arr.length;
    
}
//Recursive form of binary search
//but as it is tail recursion itterative version is prefered
int RBinarySearch(struct Array arr,int l,int h,int key)
{
    
    int m=0;
    
    
    while(l<=h)
    {
        m=(l+h)/2;
        if(key==arr.A[m])
        {
            return m;
        }
        else if(key>arr.A[m])
        {
            return RBinarySearch(arr,m+1,h,key);
        }
       else
       {
           return RBinarySearch(arr,l,m-1,key);
       }
    
    }
    return -1;
}
//this is reversed by creating another auxilary array
void Reverse(struct Array *arr)
{
    int *b;
    b=new int[arr->length];
    for(int i=arr->length-1,j=0;i>=0;i--,j++)
    {
        b[j]=arr->A[i];
    }
    for(int i=0;i<arr->length;i++)
    {
        arr->A[i]=b[i];
    }
    
}
//By swaping the elements last to first
void Reverse2(struct Array *arr)
{
    int temp;
    for(int i=0,j=arr->length-1;i<j;i++,j--)
    {
        temp=arr->A[i];
        arr->A[i]=arr->A[j];
        arr->A[j]=temp;
    }
}
void LShift(struct Array *arr)
{
    for(int i=0;i<arr->length;i++)
    {
        arr->A[i]=arr->A[i+1];
    }
}
void LRotate(struct Array *arr)
{
    int temp=arr->A[0];
    for(int i=0;i<arr->length;i++)
    {
        arr->A[i]=arr->A[i+1];
    }
    arr->A[arr->length-1]=temp;
    
}
void InsertInSort(struct Array *arr,int x)
{
    int i=arr->length-1;
    
    while(arr->A[i]>=x)
    {
        arr->A[i+1]=arr->A[i];
        i--;
        
        
    }
    arr->A[i+1]=x;
    
}
int CheckSorted(struct Array arr)
{
    for (int i=0;i<arr.length-1;i++)
    {
        if(arr.A[i]>arr.A[i+1])
            return 0;
    }
    return 1;
}
void NegativPositive(struct Array *arr)
{
    int i=0,j=arr->length-1;
    
    while(i<j)
    {
    while(arr->A[i]<0)
    {
        i++;
    }
    while(arr->A[j]>=0)
    {
        j--;
    }
        if(i<j)
        {
    Swap(&arr->A[i], &arr->A[j]);
        }
        
    }
}

struct Array* Merge(struct Array *arr,struct Array *brr)
{
    int i,j,k;
    i=j=k=0;
    struct Array *crr=new struct Array[sizeof(struct Array)];
    while(i<arr->length&&j<brr->length)
    {
        if(arr->A[i]<brr->A[j])
            crr->A[k++]=arr->A[i++];
        else
            crr->A[k++]=brr->A[j++];
        
    }
    for(;i<arr->length;i++)
        crr->A[k++]=arr->A[i];
    for(;j<brr->length;j++)
        crr->A[k++]=brr->A[j];
    crr->length=arr->length+brr->length;
    crr->size=arr->size+brr->size;
    
    
    return crr;
}

struct Array* Union(struct Array *arr,struct Array *brr)
{
    int i,j,k;
    i=j=k=0;
    struct Array *crr=new struct Array[sizeof(struct Array)];
    while(i<arr->length&&j<brr->length)
    {
        if(arr->A[i]<brr->A[j])
            crr->A[k++]=arr->A[i++];
        else if(brr->A[j]<arr->A[i])
            crr->A[k++]=brr->A[j++];
        else
        { crr->A[k++]=arr->A[i++];
            j++;}
        
    }
    for(;i<arr->length;i++)
        crr->A[k++]=arr->A[i];
    for(;j<brr->length;j++)
        crr->A[k++]=brr->A[j];
    crr->length=k;
    crr->size=arr->size+brr->size;
    
    
    return crr;
}
struct Array* Intersection(struct Array *arr,struct Array *brr)
{
    int i,j,k;
    i=j=k=0;
    struct Array *crr=new struct Array[sizeof(struct Array)];
    while(i<arr->length&&j<brr->length)
    {
        if(arr->A[i]<brr->A[j])
        {
            
            i++;
        }
         
        else if(brr->A[j]<arr->A[i])
        {
        
            j++;
        }
        else
        { crr->A[k++]=arr->A[i++];
            j++;}
        
    }
    crr->length=k;
    crr->size=arr->size+brr->size;
    
    
    return crr;
}
struct Array* Difference(struct Array *arr,struct Array *brr)
{
    int i,j,k;
    i=j=k=0;
    struct Array *crr=new struct Array[sizeof(struct Array)];
    while(i<arr->length&&j<brr->length)
    {
        if(arr->A[i]<brr->A[j])
            crr->A[k++]=arr->A[i++];
        else if(brr->A[j]<arr->A[i])
        {
            j++;
            
        }
        else
        {   i++;
            j++;
        }
        
    }
    for(;i<arr->length;i++)
        {crr->A[k++]=arr->A[i];}
    
    crr->length=k;
    crr->size=arr->size+brr->size;
    
    
    return crr;
}
int main()
{
    struct Array arr;
    int ch,x,index;
    cout<<"Enter size of array:";
    cin>>arr.size;
    arr.A=new int[arr.size*sizeof(int)];
    arr.length=0;

    cout<<"\n\nMenu\n";
    cout<<"1. Insert\n";
    cout<<"2. Delete\n";
    cout<<"3. Search\n";
    cout<<"4. Sum\n";
    cout<<"5. Display\n";
    cout<<"6.Exit\n";


    do{
        cout<<"enter you choice ";
        cin>>ch;
    switch(ch)
    {

        case 1: {cout<<"Enter an element and index";
            cin>>x;
            cin>>index;
            insert(&arr, index, x);
            break;}
        case 2: {cout<<"Enter index ";
            cin>>index;
            x=Delete(&arr, index);
            cout<<"Deleted Element is"<<x;
            break;}
        case 3:{cout<<"Enter element to search ";
            cin>>x;
            index=LinearSearch(&arr,x);
            cout<<"Element index "<<index;
            break;}
        case 4:{cout<<"Sum is"<<sum(arr);

            break;}
    case 5:display(arr);

    }
    }while(ch<6);

////    append(&arr,100);
////    insert(&arr, 0, 100);
////    insert(&arr,5,100);
////    cout<<Delete(&arr,3)<<endl;
////    cout<<LinearSearch(&arr, 4)<<endl;
////    cout<<RBinarySearch(arr,0,arr.length,12)<<endl;
////    Reverse(&arr);
////    LRotate(&arr);
////    LRotate(&arr);
////    LRotate(&arr);
////    Reverse2(&arr);
////    InsertInSort(&arr, 5);
////   NegativPositive(&arr);
////    struct Array *crr;
////    crr=Difference(&arr, &brr);
//
//
//
    return 0;
    }

 
