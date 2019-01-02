#include<bits/stdc++.h>
using namespace std;
const int maxn=2000001;
int a[maxn]= {},n=0,ans=0;
int main()
{

    int t=20;
    while(t--)
    {

        memset(a,0,sizeof(a));
        a[0]=3;
        ans=0;
        for(int i=0 ; i<n ; i++)//代表n次旋风斩
        {
            int ans0=ans+1;//代表场上所有出现过的奴隶主的数量
            for(int j=0; j<ans0; j++ )
            {
                a[j]--;
                if(a[j]>0)
                {
                    ans++;
                    a[ans]=3;
                }
            }
        }
        int b=0;
        for(int i=0 ; i<maxn ; i++)
        {
            if(a[i]>0)
            {
                ++b;
            }
        }
        n++;
        printf("%d ",b);
    }
    return 0;
}
