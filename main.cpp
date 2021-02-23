#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    while(1)
    {
        cout<<"1.Addition"<<endl<<"2.Subtraction"<<endl
            <<"3.Multiplication"<<endl<<"4.Divison"<<endl<<"5.Exit"<<endl<<endl;
        cin>>c;
        {
            switch(c)
            {
            case 1:

                a=rand()%100;
                b=rand()%100;
                cout<<"Enter Two Numbers: "<<a<<" "<<b<<endl;
                cin>>c;
                if(a+b==c)
                {
                    cout<<"Correct Ans!"<<endl;
                }
                else
                {
                    cout<<"Wrong"<<endl;
                }
                cout<<endl<<endl;
                continue;


            case 2:
                a=rand()%100;
                b=rand()%100;
                cout<<"Enter Two Numbers: "<<a<<" "<<b<<endl;
                cin>>c;
                if(a-b==c)
                {
                    cout<<"Correct Ans!"<<endl;
                }
                else
                {
                    cout<<"Wrong"<<endl;
                }
                cout<<endl<<endl;
                continue;


            case 3:
                a=rand()%100;
                b=rand()%100;
                cout<<"Enter Two Numbers: "<<a<<" "<<b<<endl;
                cin>>c;
                if(a*b==c)
                {
                    cout<<"Correct Ans!"<<endl;
                }
                else
                {
                    cout<<"Wrong"<<endl;
                }
                cout<<endl<<endl;
                continue;


            case 4:
                a=rand()%100;
                b=rand()%100;
                cout<<"Enter Two Numbers: "<<a<<" "<<b<<endl;
                cin>>c;
                if(a/b==c)
                {
                    cout<<"Correct Ans!"<<endl;
                }
                else
                {
                    cout<<"Wrong"<<endl;
                }
                cout<<endl<<endl;
                continue;


            case 5:
                exit(0);


            }
        }
    }
}
