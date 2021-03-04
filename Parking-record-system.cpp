//A person who works in parking of near by factory visits you after knowing he comes to 
know that you are a computer science engineer. He tells you that his work is utterly time
 consuming and frustating as he need to maintain records of vehicles entered that enters the 
parking, also have to calculate the total amount generated from the parked vehicles. Also, 
sometimes so happens that he forget that whether there's any room vacant for other 
vehicles. He is in a fix.
Help him by taking care of following things:



1.He knows whether the parking is vacant or not.
2. He do not waste his time in calculate the amount generated, manually
3. He knows that how many rikshaws, cars, buses are parked.
4. Could be able to check and hence reduce the number of particular vehicle if that vehicle leave parking.
5. Able to delete the entire data to start fresh from next day.

#include <iostream>

using namespace std;

int main()
{
    int u_input;
    int amt=0, count=0;
    int rikshaw_count=0,car_count=0,bus_count=0;
    
    cout<<"!\\__ WELCOME TO DIGITAL PARKING RECORD SYSTEM __/!";
    
    while(count<=50){
        cout<<endl<<endl;
    cout<<"Press 1 to enter rikshaw"<<endl;
    cout<<"Press 11 to enter rikshaw"<<endl;
    cout<<"Press 2 to enter car"<<endl;
    cout<<"Press 22 to delete car"<<endl;
    cout<<"Press 3 to enter bus"<<endl;
    cout<<"Press 33 to delete bus"<<endl;
    cout<<"Press 4 for show the record"<<endl;
    cout<<"Press 5 for delete the record"<<endl;
    cin>>u_input;
    cout<<"Choice Entered!"<<endl;
    
    //handling Rikshaw Record.
    if(u_input==1){
        
        amt+=100;
        rikshaw_count++;
        count++;
    }
    else if(u_input==11){
        rikshaw_count--;
        count--;
    }
    
    //Now handling car record.
    else if(u_input==2){
        amt+=200;
        car_count++;
        count++;
    }
    else if(u_input==22){
        car_count--;
        count--;
    }
    
    //Now handling bus Record.
    else if(u_input==3){
        amt+=300;
        bus_count++;
        count++;
    }
    else if(u_input==33){
        rikshaw_count--;
        count--;
    }
    
    //Now handling show data:
    else if(u_input==4){
        cout<<endl<<endl;
        cout<<"**********************************************************"<<endl;
            cout<<"\t\t\tPARKING DETAILS"<<endl;
        cout<<"The Total Amount ="<<amt<<endl;
        cout<<"Total number of vehicles in parking:\t"<<count<<endl;
        cout<<"Number of RIKSHAWS parked:\t"<<rikshaw_count<<endl;
        cout<<"Number of CARS parked:\t"<<car_count<<endl;
        cout<<"Number of BUSSES parked:\t"<<bus_count<<endl;
        cout<<"**********************************************************"<<endl;
    }
    else if(u_input==5){
        amt=0;
        count=0;
        cout<<"**********************************************************"<<endl;
        cout<<"oops! Full Data Deleted"<<endl;
        cout<<"**********************************************************"<<endl;
    }
    else{
        cout<<"Invalid Input"<<endl;
    }
    
}//end of while.

if(count>50){
    cout<<endl<<endl;
    cout<<"****************Parking is FULL**************************"<<endl;
}
    return 0;
}