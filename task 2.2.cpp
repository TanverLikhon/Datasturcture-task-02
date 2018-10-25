///binary ITEM
    #include <iostream>
     using namespace std;
    int main()
    {
       int c, first, last, middle, n, ITEM, DATA[13]={11, 22, 30, 33, 40, 44, 55, 60, 66, 77, 80, 88, 99};
n=13;
     cout<<"Enter value to find\n";
      cin>>ITEM;

       first = 0;
       last = n - 1;
       middle = (first+last)/2;

       while (first <= last) {
          if (DATA[middle] < ITEM)
             first = middle + 1;
          else if (DATA[middle] == ITEM) {
             cout<<ITEM<<" found at location "<<middle+1<<endl;
             break;
          }
          else
             last = middle - 1;

          middle = (first + last)/2;
       }
       if (first > last)
       cout<<"NOT FOUND"<<endl;

       return 0;
    }
