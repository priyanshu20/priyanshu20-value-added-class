#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int tc;
    cin>>tc;
    while(tc)
    {
        int n,p;
        cin>>n;
        cin>>p;
        int parties[p];
        for(int i=0;i<p;i++)
        {
            cin>>parties[i];
        }
        int days=0;
        
        for(int i=1;i<=n;i++)
        {
            // cout<<"days"<<days<<" ";
            if((i%7==6) || (i%7==0))
                continue;
            else
            {
                for(int j=0;j<p;j++)
                    if(i%parties[j] == 0)
                    {
                        // cout<<i<<"day"<<endl;
                        days++;
                        break;
                    }
            }
        }
        cout<<days<<endl;
        tc--;
    }
    return 0;
}