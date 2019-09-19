/***

            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!!!
            Author : Shah Newaj Rabbi Shishir,
            Department of CSE, City University, Bangladesh.

***/

#include <bits/stdc++.h>
using namespace std;

#define             jeno_joyer_khuda_thake      int main (void)
#define             kaj_shesh                   return 0
#define             sf                          scanf
#define             pf                          printf
#define             ssf                         sscanf
#define             spf                         sprintf
#define             fsf                         fscanf
#define             fpf                         fprintf
#define             fast                        ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define             scase                       sf ("%d",&tc)
#define             whilecase                   while (tc--)
#define             sn                          sf ("%d",&n)
#define             eof                         while (cin >> n)
#define             pcase                       pf ("Case %d: ",pos)
#define             llu                         unsigned long long
#define             lld                         long long
#define             U                           unsigned int
#define             for0(i,n)                   for (i=0; i<n; i++)
#define             for1(i,n)                   for (i=1; i<=n; i++)
#define             forab(i,a,b)                for (i=a; i<=b; i++)
#define             rof0(i,n)                   for (i=n-1; i>=0; i--)
#define             rof1(i,n)                   for (i=n; i>=1; i--)
#define             rofab(i,a,b)                for (i=b; i>=a; i--)
#define             c(str)                      cin >> str
#define             g(str)                     	getline (cin,str)
#define             vi                          vector <int>
#define             vlld                        vector <lld>
#define             si                          set <int>
#define             slld                        set <lld>
#define             ss                          set <string>
#define             vs                          vector <string>
#define             pii                         pair <int,int>
#define             mii                         map <int,int>
#define             msi                         map <string,int>
#define             pb                          push_back
#define             in                          insert
#define             B                           begin()
#define             E                           end()
#define             rB                          rbegin()
#define             rE                          rend()
#define             F                           first
#define             S                           second
#define             iterate(it,x)               for (it=x.B; it!=x.E; it++)
#define             riterate(rit,x)             for (it=x.rB; it!=x.rE; it++)
#define             sort(x)            	        sort (x.B,x.E)
#define             sortR(x,a,b)            	sort (x.B+a,x.B+b+1)
#define             rev(x)                  	reverse (x.B,x.E)
#define             revR(x,a,b)             	reverse (x.B+a,x.B+b+1)
#define             cl(x)                       x.clear()
#define             end1                        "\n"

const int MOD = 1000000007;
const int MAX = 1000005;
const double PI = acos(-1.0);

int SetBit (int n, int X) { return n | (1 << X); }
int ClearBit (int n, int X) { return n & ~(1 << X); }
int ToggleBit (int n, int X) { return n ^ (1 << X); }
bool CheckBit (int n, int X) { return (bool)(n & (1 << X)); }

int arr[12][12];

jeno_joyer_khuda_thake
{
    /*
		freopen ("input.txt","r",stdin);
		freopen ("output.txt","w",stdout);
    */

    int tc,pos,n,i,j,p,ans;

    sf ("%d",&tc);

    for (pos=1; pos<=tc; pos++)
    {
        sf ("%d",&n);

        for (i=0; i<n; i++)
            for (j=0; j<n; j++)
                sf ("%d",&arr[i][j]);

        ans = 0;

        if (n > 4)
        {
            for (i=0; i<n; i++)
            {
                for (j=0; j<n; j++)
                {
                    if (i <= n-2 && j <= n-5)
                    {
                        si st;

                        st.in(arr[i][j]);
                        st.in(arr[i][j+1]);
                        st.in(arr[i][j+2]);
                        st.in(arr[i][j+3]);
                        st.in(arr[i][j+4]);
                        st.in(arr[i+1][j]);
                        st.in(arr[i+1][j+1]);
                        st.in(arr[i+1][j+2]);
                        st.in(arr[i+1][j+3]);
                        st.in(arr[i+1][j+4]);

                        if (st.size() == 10)
                            ++ans;
                    }

                    if (i <= n-5 && j <= n-2)
                    {
                        si st;

                        st.in(arr[i][j]);
                        st.in(arr[i+1][j]);
                        st.in(arr[i+2][j]);
                        st.in(arr[i+3][j]);
                        st.in(arr[i+4][j]);
                        st.in(arr[i][j+1]);
                        st.in(arr[i+1][j+1]);
                        st.in(arr[i+2][j+1]);
                        st.in(arr[i+3][j+1]);
                        st.in(arr[i+4][j+1]);

                        if (st.size() == 10)
                            ++ans;
                    }

                    if (i == 0 && j <= n-1 && n == 10)
                    {
                        si st;

                        st.in(arr[i][j]);
                        st.in(arr[i+1][j]);
                        st.in(arr[i+2][j]);
                        st.in(arr[i+3][j]);
                        st.in(arr[i+4][j]);
                        st.in(arr[i+5][j]);
                        st.in(arr[i+6][j]);
                        st.in(arr[i+7][j]);
                        st.in(arr[i+8][j]);
                        st.in(arr[i+9][j]);

                        if (st.size() == 10)
                            ++ans;
                    }

                    if (i < n && j == 0 && n == 10)
                    {
                        si st;

                        st.in(arr[i][j]);
                        st.in(arr[i][j+1]);
                        st.in(arr[i][j+2]);
                        st.in(arr[i][j+3]);
                        st.in(arr[i][j+4]);
                        st.in(arr[i][j+5]);
                        st.in(arr[i][j+6]);
                        st.in(arr[i][j+7]);
                        st.in(arr[i][j+8]);
                        st.in(arr[i][j+9]);

                        if (st.size() == 10)
                            ++ans;
                    }
                }
            }
        }

        pf ("Case %d: %d\n",pos,ans);
    }

    kaj_shesh;
}
