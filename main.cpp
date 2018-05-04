#include <iostream>
#include <iomanip> ///for setbase()

using namespace std;
int tree[1000];
int T1,T2,C1,C2,n,min;
string posibilities[1000];int pos;

int generate_pos()
{int cnt=0;
    while(true)///convert base 10 numbers to base 2
    {
        posibilities[cnt]= setbase(2)<<cnt;
        if(posibilites[cnt].length()>n)
            break;
    }
    for(int i=0;i<n;i++)
    {
        if(posibilites[cnt].length()<n)///add 0 at beginning for shorter numbers
        {
            char ch[1000];
            for(int j=1000;j>1;j++)
                ch[i-1]=ch[i];
            ch[0]='0';
            posibilities[cnt]=ch[1000];
        }
    }
}

int turns()///take turns
{int sum;
    for(int i=0;i<n;i++)
    {
        sum = 0;
        char ch[n];
        for(int j=0;j<n;j++)
        {
            if(ch[j] == '0')
                sum=sum+T1*tree[n];
            if(ch[j-1] == '0')
                sum=sum+C1;
            if(ch[j] == '1')
                sum=sum+T1*tree[n];
            if(ch[j-1] == '1')
                sum=sum+C1;
        }
        if(min>sum)
            min=sum;
    }
}

int main()
{
    cin>>n;
    for(int i=0;i<n;i++)    cin>>tree[i];
    cin>>T1>>T2>>C1>>C2;
    generate_pos();
    turns();
    cout<<min;
    return 0;
}
