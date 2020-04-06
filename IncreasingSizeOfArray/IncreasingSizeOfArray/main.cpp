//
//  main.cpp
//  IncreasingSizeOfArray
//
//  Created by Gorakh Chavan on 20/03/20.
//  Copyright © 2020 Gorakh Chavan. All rights reserved.
//

#include <iostream>
using namespace std;


int main()
{
    int *p;
    p=new int[5];
    p[0]=1;
    p[1]=2;
    p[2]=3;
    p[3]=4;
    p[4]=5;
    int *g;
    g=new int[10];
    for(int i=0;i<5;i++)
      {
          g[i]=p[i];
      }
    delete []p;
    p=g;
    g=NULL;
    for(int i=0;i<5;i++)
    {
        cout<<p[i];
    }
    
    return 0;
}
