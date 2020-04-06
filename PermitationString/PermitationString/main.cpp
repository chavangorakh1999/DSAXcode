//
//  main.cpp
//  PermitationString
//
//  Created by Gorakh Chavan on 03/04/20.
//  Copyright © 2020 Gorakh Chavan. All rights reserved.
//

//#include <iostream>
//using namespace std;
//void perm(char s[],int k)
//{
//    static int a[10]={0};
//    static char res[10];
//    int i;
//    if(s[k]=='\0')
//    {
//        res[k]='\0';
//        cout<<res<<endl;
//    }
//    else
//    {
//        for(i=0;s[i]!='\0';i++)
//        {
//            if(a[i]==0)
//            {
//                res[k]=s[i];
//                a[i]=1;
//                perm(s,k+1);
//                a[i]=0;
//            }
//
//        }
//
//    }
//}
//
//int main()
//{
//    char s[]="GOR";
//    perm(s,0);
//    return 0;
//}
#include<iostream>
using namespace std;


class Diagonal
{
private:
  int n;
  int *A;
    int sum;
    

public:
  
  Diagonal(int n)
  {
    this->n=n;
    A=new int[n*n];
      sum=0;

  }
  int Sum();
  void set(int i,int j,int x,int d);
  int get(int i, int j);
    void DupliInRow();
    void DupliInCol();
    
  void display();
  ~Diagonal()
  {
    delete []A;
  };
};
int  Diagonal::Sum()
{
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<n;j++)
      {
         if(i==j)
         sum=sum + A[n*(i-1)+(j-1)];
      }
    }
    return sum;
  
}
void Diagonal::set(int i,int j,int l,int d)
{

    A[d*(i-1)+j-1]=l;
}


void Diagonal::display()
{
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      //if(i==j)
        cout<<A[n*(i-1)+(j-1)]<<" ";
      // else
      //   cout<<"0"<<" ";
    }
    cout<<endl;
  }

}


int main()
{
  int x,d,l;
     
  
  cout<<"NO of Matrix:";
  cin>>x;
    
    
  while(x>0)

  {
    cout<<"Dimension:";
    cin>>d;
   Diagonal lm(d);
    for(int i=0;i<d;i++)
    {
      for(int j=0;j<d;j++)
      {
        cout<<"Enter Element:";
        cin>>l;
        lm.set(i,j,l,d);
      }
      
    }
    x--;
      lm.display();
      cout<<lm.Sum();
      cout<<endl;
  
  }

  
  
  
  return 0;
}

