//
//  main.cpp
//  StudentChallenge
//
//  Created by Gorakh Chavan on 26/03/20.
//  Copyright © 2020 Gorakh Chavan. All rights reserved.
//

#include <iostream>
using namespace std;
int Min(int *A,int length)
{
    
    int min=A[0];
    for(int i=1;i<length;i++)
    {
       if(min>A[i])
       {
           min=A[i];
       }
    
    }
    return min;
}
int Max(int *A,int length)
{
    int max=0;
    for(int i=0;i<length;i++)
    {
        if(max<A[i])
        {
            max=A[i];
        }
    }
    return max;
}

//By hashing technique or methadology we can identyfy the missing elements
void FindMissing(int *A,int min,int max,int length)
{
    int l,h,n;
    int *p;
    p=new int[max];
    l=min;
    h=max;
    n=length;
    
    for(int i=0;i<n;i++)
    {
        p[A[i]]++;
    }
    for(int j=l;j<=max;j++)
    {
        if(p[j]==0)
        {
            cout<<j<<" ";
        }
    }
    
    
    
}
//Finding duplicate elements
void FindDuplicate(int *A,int length)
{
    int Lastduplicate=0;
    for(int i=0;i<length-1;i++)
    {
        if(A[i]==A[i+1]&&Lastduplicate!=A[i])
        {
            cout<<A[i]<<" "<<endl;
            Lastduplicate=A[i];
        }
    }
    
}
void DuplicateCount(int *A,int length)
{
    int j=0;
    for(int i=0;i<length-1;i++)
    {
        if(A[i]==A[i+1])
        {
            j=i+1;
            while(A[i]==A[j])
            {
                j++;
            }
            
            cout<<A[i]<<" is "<<j-i<<" Times"<<endl;
            i=j-1;
        }
            
    }
}
int Count(int *A)
{
    int i=0;
    while(A[i])
    {
        i++;
    }
    return i;
}
//int main()
//{
//    //int z,y;
//    int A[20]={3,4,6,6,6,6,6,8,8,8,8,8,9,15,15,15};
//       int length=Count(A);
//
//   // z=Min(A, length);
//   // y=Max(A,length);
//
//   // FindMissing(A, z, y, length);
//    DuplicateCount(A,length);
//    return 0;
//}
#include<iostream>
   using namespace std;
   int main()
   {
       int n;
   cin>>n;
      


   for(int i=0;i<n;i++)
   {
       cout<<"*";
       
   }
       




       return 0;
   }
