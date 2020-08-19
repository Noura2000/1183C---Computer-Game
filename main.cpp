#include <iostream>

using namespace std;

int main()
{
    long long q,k,n,a,b;
    cin>>q;
    while(q--)
    {
        cin>>k>>n>>a>>b;
        long long lw=-1,hi=n,md;
        while(lw<hi)
        {
            md=lw+(hi-lw+1)/2;
            if(a*md+b*(n-md)>=k) hi=md-1;
            else lw=md;
        }
        cout<<lw<<endl;
    }
    return 0;
}
