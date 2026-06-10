#include <iostream> 
using namespace std;
void f1(int ar[] ,int size  ){
   for(int i=0;i<size;i++){
    cout << "Enter number " << i << ": ";
    cin>>ar[i];
   }
}


int main(){
const int size = 10;
int ar[size];
    f1(ar,size);
cout<< ar[0]<<endl;
return 0;
}  