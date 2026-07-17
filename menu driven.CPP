#include<iostream>
using namespace std;
int main(){
    float a,b,rem;
    int ch,q;
    cout<<"Arithmetic operations:";
    cout<<"\n1.Addition\n2.Substraction\n3.multiplication\n5.Division";
    cout<<"\nEnter your choice:\n";
    cin>>ch;

    switch(ch){
        case 1:{

            cout<<"enter your number:";
            cin>>a>>b;
            rem=a+b;
            cout<<"result="<<rem;
    }
    break;

    case 2:{

            cout<<"enter your number:";
            cin>>a>>b;
            rem=a-b;
             cout<<"result="<<rem;
    }
    break;

    case 3:{

            cout<<"enter your number:";
            cin>>a>>b;
            rem=a*b;
            cout<<"result="<<rem;
    }
    break;
    case 4:{

            cout<<"enter your number:";
            cin>>a>>b;
            rem=a/b;
            cout<<"result="<<rem;
    }
    break;
}

    return 0;
}