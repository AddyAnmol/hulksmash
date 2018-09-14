#include<iostream>

using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
            cin>>a[i][j];
    }
    int lrdsum=0,rldsum=0;
    for(int k=0;k<3;k++)
    {
        for(int l=0;l<3;l++)
        {
            if(k==l)
                lrdsum+=a[k][l];
            if((k+l)==2)
                rldsum+=a[k][l];
             }
    }
    if(lrdsum>rldsum)
        cout<<lrdsum-rldsum;
    else
        cout<<rldsum-lrdsum;
    return 0;
}
