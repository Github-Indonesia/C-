#include <iostream>
using namespace std;
int main()
{
    int a[3][3], b[3][3], c[3][3];
    int m, n;
    cout<<"Berikan matriks pertama (3x3): \n\n";
    for(m=0; m<3; m++)
    {
        for(n=0; n<3; n++)
        {
            cin>>a[m][n];
        }
    }
    cout<<endl;
    cout<<"Berikan matriks kedua (3x3): \n\n";
    for(m=0; m<3; m++)
    {
        for(n=0; n<3; n++)
        {
            cin>>b[m][n];
        }
    }
    cout<<endl;
    cout<<"Hasil: \n\n";
    for(m=0; m<3; m++)
    {
        for(n=0; n<3; n++)
        {
            c[m][n]=a[m][n]+b[m][n];
        }
    }
    for(m=0; m<3; m++)
    {
        for(n=0; n<3; n++)
        {
            cout<<a[m][n];
        }
        if(m==1)
        {
            cout<<" +";
        }
        else
        {
            cout<<"\t";
        }
        for(n=0; n<3; n++)
        {
            cout<<" "<<b[m][n];
        }
        if(m==1)
        {
            cout<<" =";
        }
        else
        {
            cout<<"\t";
        }
        for(n=0; n<3; n++)
        {
            cout<<" "<<c[m][n];
        }
        cout<<endl;
    }
}
