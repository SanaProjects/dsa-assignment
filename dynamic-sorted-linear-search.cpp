#include<iostream>
#include<iomanip>
using namespace std;

void select(int [], int);

int linear(int[], int, int);

int main()
{
    int *p, s, pos, v, i;

    cout<<endl<<"Enter the no. of value to be entered : ";
    cin>>s;

    p = new int[s];

    for(i=0; i<s; i++)
    {
        cout<<endl<<"Enter the elements : ";
        cin>>p[i];

    }

    select(p,s);

    cout<<endl<<"After sorting..."<<endl;

    for(i=0; i<s; i++)
    {
        cout<<setw(5)<<p[i];
    }

    cout<<endl;

    cout<<endl<<"Enter the element to searched :";
    cin>>v;

    pos=linear(p,s,v);

    if (pos==0)
    {
        cout<<v<<" Not found";
    }
    else if (pos==2)
    {
        cout<<v<<" is in "<<pos<<"nd position";
    }
    else if (pos==3)
    {
        cout<<v<<" is in "<<pos<<"rd position";
    }
    else
    {
        cout<<v<<" is in "<<pos<<"th position";
    }


    return 0;
}

void select(int a[], int n)
{
    int i, j, t;

    for (i=0; i<n-1; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if (a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
}

int linear(int a[], int s, int v)
{
    int i,f=0;

    for(i=0; i<s; i++)
    {
        if (a[i]==v)
        {
            f=1;
            return (i+1);
        }
    }
    return(f);
}

