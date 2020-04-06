//
//  main.cpp
//  StringAnagram
//
//  Created by Gorakh Chavan on 01/04/20.
//  Copyright © 2020 Gorakh Chavan. All rights reserved.
//

#include <iostream>
#include<string.h>
using namespace std;

int main()
{
    char a[]="elbow";
    char b[]="below";
    int H[26]={0};
    for(int i=0;a[i]!='\0';i++)
    {
        H[a[i]-97]++;
    }
    int i=0;
    for(i=0;b[i]!='\0';i++)
    {
        H[b[i]-97]--;
        
        if(H[b[i]-97]<0)
        {
            cout<<"Not an Anagram"<<endl;
            break;
        }
        
    }
    if(b[i]=='\0')
    cout<<"it is An Anagram"<<endl;
    
    
    return 0;
}
