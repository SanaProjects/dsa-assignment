#include<iostream>
using namespace std;

void select(int [], int);

int main()
{
    int *p,n,i;
    cout<<endl<<"Enter the no. to be entered  :";
    cin>>n;

    p = new int[n];

    for(i=0; i<n; i++)
    {
        cout<<endl<<"Enter values : ";
        cin>>p[i];
    }

    select(p, n);

    cout<<endl<<"After Sorting...";

    for(i=0; i<n; i++)
    {
        cout<<endl<<p[i];
    }    

    return 0;
}

void select(int a[], int s)
{
    int i,j,t;

    for(i=0; i<s-1; i++)
    {
        for(j=i+1; j<s; j++)
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
}
