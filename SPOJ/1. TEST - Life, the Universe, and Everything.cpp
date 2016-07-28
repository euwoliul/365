//2016-07-27 03:33:03
//http://ideone.com/Vw9ZbB
//http://www.spoj.com/problems/TEST/
//Classic Problems 1
#include <iostream>
using namespace std;

int main()
{
    int i,a[1000],j,b=0,c=0;
x:
    cin>>j;

        if(j==42)
        {
            for(i=c; i<b; i++)
            {
                a[i]=j;
            }
            for(i=0; i<b; i++)
            {
                cout<<"\n";
                cout<<a[i];
            }
        }
        else
        {
            b++;
            for(i=c; i<b; i++)
            {
                a[i]=j;
            }
            c++;
            goto x;
        }

    return 0;
}

/*
Input:
1
2
88
42
99

Output:
1
2
88*/
