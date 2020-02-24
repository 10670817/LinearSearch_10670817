#include <iostream>

using namespace std;

int main()
{
    int n,item,a[100],k,i,temp=0;
    cout<<"Enter The Number of Elements: ";
    cin>>n;
    cout<<"Enter The Elements: "<<endl;
    for(i=0;i<n;i++){
            cin>>a[i];
    }
    cout<<"Enter the item you want to search: ";
    cin>>item;
    for(i=0;i<n;i++)
    {
        if(item==a[i])
            {
            temp=1;
            k=i+1;
    }
    }
    if(temp==1){
        cout<<"Item found at "<<k<<"position";

    }
    else{
        cout<<"Item Not found"<<endl;
    }

    return 0;
}
