//
//  main.cpp
//  StaticVsDynamicArrayAllocation
//
//  Created by Gorakh Chavan on 19/03/20.
//  Copyright © 2020 Gorakh Chavan. All rights reserved.
//

#include <iostream>
using namespace std;


//int main()
//{
////    int a[5]={1,3,5,78,5};
////    for (int i=0;i<5;i++)
////    {
////        cout<<a[i]<<endl;
////    }
//    int *p;
//    p=new int[5];
//    cout<<"enter Values";
//    for (int i=0;i<5;i++)
//    {
//        cin>>p[i];
//    }
////    p[0]=1;
////    p[1]=2;
////    p[2]=3;
////    p[3]=4;
////    p[4]=5;
////
//    cout<<"now it starts printing "<<endl;
//    for (int i=0;i<5;i++)
//    {
//        cout<<p[i]<<endl;x
//    }
int a[1000001];
int main()
{
    int i,n,j,k,count=0;
  
     cin>>n>>k;
     for(i=0;i<n;i++)
     {
         cin>>a[i];
     }
   std::sort(a, a+n);
//    for(int i=0;i<n;i++)
//    {
//        cout<<a[i];
//    }
//
    i=0;
    j=i+1;
    while(i<n)
    {
        if(a[i]-a[j]==k)
        {
            count++;
            i++;
            j++;
        }
        else if(a[i]-a[j]>k)
        {
            j++;
        }
        else if(a[i]-a[j]<k)
        {
            i++;
        }
        }
        cout<<count;
    return 0;
}
