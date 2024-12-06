#include<iostream>
using namespace std;

class armstrong{
    public:
    void calc(int num){
        int n=num,equal=0,dig=0,orig=num;
         while(num!=0){
            n=num%10;
            num=num/10;
            dig+=1;
    }
    num=orig;
        while(num!=0){
            n=num%10;
            num=num/10;
            equal=equal+pow(n,dig);
    }
    if(orig==equal){
        cout<<"Number is arm strong";
    }
    else{
        cout<<"Not a arm strong number";
    }
    }
};

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    armstrong first;
    first.calc(n);
}