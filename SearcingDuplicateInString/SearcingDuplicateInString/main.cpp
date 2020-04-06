//
//  main.cpp
//  SearcingDuplicateInString
//
//  Created by Gorakh Chavan on 31/03/20.
//  Copyright © 2020 Gorakh Chavan. All rights reserved.
//

#include <iostream>
#include<string.h>
using namespace std;

int main()
{
    char A[]="fingding";
    int H=0,x=0;
    
    for(int i=0;A[i]!='\0';i++)
    {
        x=1;
        x=x<<(A[i]-97);
        if((x&H)>0)
        {
            cout<<A[i]<<" is duplicated."<<endl;
        }
        else{
            H=(x|H);
        }
        
        
    }
    
    return 0;
}
