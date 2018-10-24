///bubble sort
///1702028
#include<iostream>
using namespace std;
int C,D;
int main()
{
    int i,j;
    char arr[]="PEOPLE";
     for( i=1; i<6; i++)
    {
        for(j=0;j<6-i;j++)
        {
            if(arr[j]>arr[j+1])

            {
                char temp;
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                D++;
            }
C++;
        }
    }
    cout<<"After sorting the string : "<<endl;
    for(i=0;i<6;i++)cout<<arr[i];
    cout<<"Number of Comparison : "<<C<<endl;
    cout<<"Number of Interchange : "<<D<<endl;
    return 0;
}
