//
//  main.cpp
//  2DArrayMethods
//
//  Created by Gorakh Chavan on 20/03/20.
//  Copyright © 2020 Gorakh Chavan. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    //Normal 2D Array declaration
    int A[3][4]={{1,2,3,4},{2,4,6,8},{3,5,7,9}};
    for (int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
   // Partial in heap Using pointer
    int *a[3];
    a[0]=new int[4];
    a[1]=new int[4];
    a[2]=new int[4];
    for (int i=0;i<3;i++)
            {
                for(int j=0;j<4;j++)
                {
                    a[i][j]=0;
                }
                cout<<endl;

            }
    a[1][2]=6;
    for (int i=0;i<3;i++)
        {
            for(int j=0;j<4;j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;

        }
    //Fully in heap Using double pointer
    int **a;
    a=new int*[3];
    a[0]=new int[4];
    a[1]=new int[4];
    a[2]=new int[4];
     for (int i=0;i<3;i++)
                {
                    for(int j=0;j<4;j++)
                    {
                        a[i][j]=0;
                    }
                    cout<<endl;
    
                }
        a[1][2]=6;
        for (int i=0;i<3;i++)
            {
                for(int j=0;j<4;j++)
                {
                    cout<<a[i][j]<<" ";
                }
                cout<<endl;
    
            }
    
        return 0;
}
