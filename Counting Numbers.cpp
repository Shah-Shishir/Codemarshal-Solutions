/***

            Bismillahir Rahmanir Rahim
            Read the name of Allah, who created you!!!
            Author : Shah Newaj Rabbi Shishir
            Department of CSE, City University, Bangladesh.

***/

#include <bits/stdc++.h>
using namespace std;

#define sf scanf
#define pf printf
#define scase sf ("%d",&tc)
#define sn sf ("%d",&n)
#define whilecase while (tc--)
#define eof while (cin >> n)
#define forloop for (pos=1; pos<=tc; pos++)
#define arrayloop (i=0; i<n; i++)
#define cinstr cin >> str
#define getstr getline (cin,str)
#define pcase pf ("Case %d: ",pos)
#define pb push_back
#define in insert
#define llu unsigned long long
#define lld long long
#define u unsigned int

int main (void)
{
    /*freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);*/

    int tc,pos,n,i,arr[100005],f[101],maxi;

    cin >> tc;

    for (pos=1; pos<=tc; pos++)
    {
        cin >> n;

        memset (f,0,sizeof(f));

        for (i=0; i<n; i++)
        {
            cin >> arr[i];
            f[arr[i]]++;
        }

        maxi = f[0];

        for (i=1; i<101; i++)
            if (f[i] > maxi)
                maxi = f[i];

        for (i=100; i>=0; i--)
        {
            if (maxi == f[i])
            {
                pf ("Case %d: %d %d\n",pos,i,f[i]);
                break;
            }
        }
    }

    return 0;
}
