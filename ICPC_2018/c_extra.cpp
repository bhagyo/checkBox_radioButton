/****** HAREE KRISHNA   ******/

/*
                     শুনেছি তোমার ভীষণ রাগ ??
                        সে কি  রাগ,নাকি
                     মগজ কোণে পচন ধরা
                        পুরনো কোডের বাগ ?
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long int lld;
typedef unsigned long long int llu;

#define sf scanf
#define pf printf
#define ff first
#define ss second
#define pii pair<int,int>
#define PI acos(-1.0)
#define sq(x) (x)*(x)
#define nn printf("\n")
#define mem(arr,val) memset(arr,val,sizeof(arr))
#define TEST int test,zz;scanf("%d",&zz);getchar();for(test=1;test<=zz;test++)

#define sci(x) scanf("%d",&x)
#define sci2(x,y) scanf("%d %d",&x,&y)
#define sci3(x,y,z) scanf("%d %d %d",&x,&y,&z)

#define pfi(x) printf("%d\n",x)
#define pfi2(x,y) printf("%d %d\n",x,y)
#define pfi3(x,y,z) printf("%d %d %d\n",x,y,z)

#define scs(str) scanf("%s",str)

#define pfs(str) printf("%s\n",str)

#define pb push_back

/*
ASCII Vlaue
A=65,Z=90,a=97,z=122,0=48,9=57
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
*/
#define chk1 printf("chek1\n")
#define chk2 printf("chek2\n")
#define chk3 printf("chek3\n")
#define sz 10005
#define sz1 201

/******   start your code   *******/


lld asol(lld k)
{
    double jj=floor(sqrt(k));
    jj=ceil(jj/2.0);
    lld j=lld(jj);
    return j;
}
int main()
{
    lld i,j,k,l,m,n,lft,rgt,vag,cnt,sto_lft,sto_rgt,tot_bijor;
    double arekta;
    TEST
    {
        scanf("%lld %lld",&lft,&rgt);
        if(lft>rgt) swap(lft,rgt);

        cnt=asol(rgt)-asol(lft-1); // total perfect bijor number
        //pf("1.cnt = %lld, rgt = %lld\n",cnt,rgt);

        vag=(2*1LL);
        sto_rgt=rgt/vag; //automatic floor in integer division

        while(sto_rgt>0)
        {
            //arekta=(double)(lft)/(double)(vag);
            //sto_lft=lld(ceil(arekta));

            if(lft%vag ==0)  sto_lft = lft/vag;
            else sto_lft= (lft/vag) +1;

            if(sto_lft>sto_rgt) break;

            cnt+=(asol(sto_rgt)-asol(sto_lft-1));// summing them all

            //pf("2.cnt = %lld, rgt = %lld\n",cnt,sto_rgt);

            vag*=(2LL);

            sto_rgt=rgt/vag;
        }
        pf("Case %d: %lld\n",test,cnt);
    }
    return 0;
}

/*
3
1 3
5 10
10 15

Outp
*/
