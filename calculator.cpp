#include<iostream>
using namespace std;
//Simple Calculator 
class arithmetic
{
    private:
    long double x,y;
    public:
    arithmetic()
    {
        cout<<"Enter the two digits"<<endl;
        cin>>x>>y;
    }
    long double fun( )
     {   char op;
    
        
        bool flag=false;
        while(!flag)
        {cout<<"Choose Operation"<<endl;
        cout<<"+ for addition\n";
        cout<<"- for substraction\n";
        cout<<"* for multiplication\n";
        cout<<"/ for division\n";
        cout<<" press E to exit\n";
        cin>> op;
            switch(op)
            {
                case '+': 
                cout<<"addition is " <<x+y<<endl;
                break;
                case '-':
                cout <<"substracion is " <<x-y<<endl;
                break;
                case '*':
                cout<<"multiplication is " <<x*y<<endl;
                break;
                case '/':
                if(y!=0)
                {
                    cout<<"division is " <<x/y << endl;
                    break;
                }
                else{
                    cout<<"division by zero is not allowed!!"<<endl;
                    break;
                }
                case 'E':
                flag=true;
                break;
                default:
                cout<<"Invalid Operation\n";
                break;
}
        };

    };
    
};
   
    
   
int main()
{
    arithmetic obj1;
    obj1.fun();
    return 0;

}