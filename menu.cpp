#include <iostream>
#include <string>
using namespace std;
class stack{
private:
    int top;
    int arry[5];
public:
    stack(){
        top=-1;
        for(int i=0;i<5;i++){
            arry[i]=0;
        }
    }
    bool isEmpty(){
        if(top==-1)
            return true;
        else
            return false;
    }
    bool isFull(){
        if(top==4)
            return true;
        else
            return false;
    }
    void push(int val){
        if(isFull()){
            cout<<"stack overflow";
        }
        else{
            top++;//top=0then 1 after ++
            arry[top]=val;
        }
    }
    int pop(){
        if(isEmpty()){
            cout<<"stack underflow";
            return 0;
        }
        else{
            int popvalue = arry[top];
            arry[top]=0;
            top--;
            return popvalue;
        }
    }
    int count(){
        return(top+1);
    }
    int peak(int pos){
        if(isEmpty()){
            cout<<"stack underflow"<<endl;
            return 0;
        } else{
            return arry[pos];
        }
    }
    void change(int pos,int val){
        arry[pos]=arry[val];
        cout<<"value change at the location"<<pos<<endl;
    }
    void display(){
        cout<<"all values in stack are: "<<endl;
        for(int i=4;i>=0;i--){
            cout<<arry[i]<<endl;
        }
    }
};
int main(){
    stack s1;
    int option,position,value;
    do{
        cout<<"what operation do you want to perform?select option.ENTER 0 TO EXIT"<<endl;
        cout<<"1.push()"<<endl;
        cout<<"2.pop()"<<endl;
        cout<<"3.isEmpty()"<<endl;
        cout<<"4.isFull()"<<endl;
        cout<<"5.peek()"<<endl;
        cout<<"6.count()"<<endl;
        cout<<"7.change()"<<endl;
        cout<<"8.display"<<endl;
        cout<<"9.Clear Screen"<<endl;
        cin>>option;
        switch(option){
            case 0:
                break;
            case 1:
                cout<<"enter an item to push in the stack"<<endl;
                cin>>value;
                s1.push(value);
                break;
            case 2:
                cout<<"popFunction - pooped value"<<s1.pop()<<endl;
                break;
            case 3:
                if(s1.isEmpty()) {
                    cout << "stack is empty" << endl;
                }else
                    cout<<"stack is not empty"<<endl;
                break;
            case 4:
                if(s1.isFull())
                    cout<<"stack is full"<<endl;
                else
                    cout<<"stack is not full"<<endl;
                break;
            case 5:
                cout<<"enter the position to peak"<<endl;
                cin>>position;
                cout<<"peak position called- Value at position"<<position<<"is"<<s1.peak(position)<<endl;
                break;
            case 6:
                cout<<"Count function called - number of items in the stack are: "<<s1.count()<<endl;
                break;
            case 7:
                cout<<"Change Function Called- "<<endl;
                cout<<"enter position of item you want to change: ";
                cin>>position;
                cout<<endl;
                cout<<"enter the value of the item you want to change: ";
                cin>>value;
                s1.change(position,value);
                break;
            case 8:
                cout<<"display function called: "<<endl;
                s1.display();
                break;
            case 9:
                system("cls");
                break;
            default:
                cout<<"enter proper option number"<<endl;


        }

    }while(option !=0);

    return 0;
}
