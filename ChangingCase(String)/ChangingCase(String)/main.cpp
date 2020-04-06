//
//  main.cpp
//  ChangingCase(String)
//
//  Created by Gorakh Chavan on 29/03/20.
//  Copyright © 2020 Gorakh Chavan. All rights reserved.
//

#include <iostream>
#include<string.h>
using namespace std;

int main()
{
//    char n[]="GORakh";
//    for(int i=0;n[i]!='\0';i++)
//    {
//        if(n[i]>='A'&&n[i]<='Z')
//        {
//            n[i] +=32;
//        }
//        else if(n[i]>='a'&&n[i]<='z')
//        {
//            n[i] -=32;
//        }
//    }
//    cout<<n;
    char n[]="";
    int vcount=0,ccount=0;
    gets(n);
    for (int i=0;n[i]!='\0';i++)
    {
        if(n[i]=='A'||n[i]=='a'||n[i]=='E'||n[i]=='e'||n[i]=='I'||n[i]=='i'||n[i]=='O'||n[i]=='o'||n[i]=='U'||n[i]=='u')
        {
            vcount++;
        }
        else if((n[i]>'A'&&n[i]<'Z')||(n[i]>'a'&&n[i]<'z'))
        {
            ccount++;
        }
        
        
        
    }
    cout<<"Vowels are"<<vcount<<endl;
    cout<<"Constants are "<<ccount<<endl;
    
    
    
    return 0;
}
