//#include <cmath>
//#include <cstdio>
//#include <vector>
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//
//int main() {
//    int nseq,size;
//    int seq;
//    int nquery;
//    int lostans=0, a;
//
//    cin>>nseq;
//    cin>>nquery;
//
//    vector<vector<int>> v(nseq, vector<int>());
//    vector<int> q;
//
//    for(int i=0; i<nquery; i++) {
//        for(int j=0; j<3; j++){
//            cin>>a;
//            q.push_back(a);
//        }
//
//        if (q[0] == 1) {
//            v[(q[1] ^lostans) % nseq].push_back(q[2]);
//        } else {
//            seq = (q[1] ^ lostans) % nseq;
//            size = v[seq].size();
//            lostans = v[seq][q[2] % size];
//            cout<<v[seq][q[2] % size]<<endl;
//        }
//        q.clear();
//    }
    #include<iostream>
    using namespace std;
    int main()
    {
        int n,k;
    cin>>n;
    k=n;
    while(k!=0){


    for(int i=0;i<k-1;i++)
    {
        cout<<" ";
        
    }

    }


        return 0;
    }
    
