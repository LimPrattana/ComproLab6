#include<iostream>
using namespace std;

int main(){
int num[100],even=0,odd=0;
int i=0;
cout << "Enter an integer: ";
    cin >> num[0];
while (num[i]!=0)
{   if(num[i]%2==0){
    even ++;
}
else{
    odd ++;
}
    i++;
    cout << "Enter an integer: ";
    cin >> num[i];
    
}

    

    cout << "#Even numbers = "<<even<<endl;
    cout << "#Odd numbers = "<<odd;
    return 0;
}
