#include<iostream>
#include <stdlib.h>
using namespace std;


int cost;
class MetroBus
 {
    public:
    string loc,dest;	
    int location, destination;
    public:
    void select()
    {
    cout << "Select current location:\n1. Saddar\n2. Defense\n3. Clifton\n4. Gulshan-e-Iqbal\n5. Dhorajee\n6. Gulistan-e-Johar\n7. Shahrah-e-Faisal\n8. Bahadurabad\n9. Tariq Road\n10. Liaquatabad\n11. F.B Area\n12. Sohrab Goth\n13. North Nazimabad\n14. North Karachi\n15. Surjani Town" << endl;
    cin>> location;
          
	if (location<=3)
    {
    cout << "\nYour bus is GREEN." << endl;
    cout << "\nEnter destination: \n1. Saddar\n2. Defense\n3. Clifton" << endl;
    cin >> destination;
              if (location==1 && destination==2)
              {
        	   loc="SADDAR";
        	   dest="DEFENCE";
               cout << "\nThe total distance is 7km."<<endl;
               cost=7*5;
      
               }
               else if (location==1 && destination==3)
               {
                    loc="SADDAR";
        	        dest="Clifton";
                cout << " The total distance is 9km."<<endl;
                cost=7*5;
          
                }
                else if (location==2 && destination==3)
                {
                        loc="Defense";
        	            dest="Clifton";
                cout << " The total distance is 2km: "<<endl;
                 cost=2*5;
               
                }
                else if (location==2 && destination==1)
                {
                        loc="Defense";
        	            dest="saddar";
                cout << " The total distance is 2km: "<<endl;
                 cost=2*5;
              
                }
                 else if (location==3 && destination==1)
                {
                        loc="Clifton";
        	            dest="saddar";
                cout << " The total distance is 2km: "<<endl;
                 cost=2*5;
              
                }
                 else if (location==3 && destination==2)
                {
                        loc="Clifton";
        	            dest="Defense";
                cout << " The total distance is 2km: "<<endl;
                 cost=2*5;
                
                }
    }
    
	else if (location>3 && location<=6)
    {
    	
        cout << "Your bus is RED." << endl;
        cout << "Enter destination: \n1. Gulshan-e-Iqbal\n2. Dhorajee\n3. Gulistan-e-Johar" << endl;
        cin >> destination;

            if (location==4 && destination==2)
            {
        	 loc="Gulshan-e-Iqbal";
         	 dest="Dhorajee";
        	
            cout << " The total distance is 6km: "<<endl;
            cost=6*5;
      
            }
            else if (location==4 && destination==3)
            {
                 loc="Gulshan-e-Iqbal";
         	     dest="Gulistan-e-Johar";
            cout << " The total distance is 7km: "<<endl;
             cost=7*5;
            
            }
            else if (location==5 && destination==1)
            {     
                  loc="Dhorajee";
         	     dest="Gulshan-e-Iqbal";
           
            cout << " The total distance is 6km: "<<endl;
             cost=6*5;
            
            }
            
            else if (location==5 && destination==3)
            {     
                  loc="Dhorajee";
         	     dest="Gulistan-e-Johar";
           
            cout << " The total distance is 6km: "<<endl;
             cost=6*5;
            
            }
             else if (location==6 && destination==1)
            {     
                  loc="Gulistan-e-Johar";
         	     dest="Gulshan-e-Iqbal";
           
            cout << " The total distance is 6km: "<<endl;
             cost=6*5;
            
            }
             else if (location==6 && destination==2)
            {     
                  loc="Gulistan-e-Johar";
         	     dest="Dhorajee";
           
            cout << " The total distance is 6km: "<<endl;
             cost=6*5;
            
            }
            
    }
    
    
    else if (location>6 && location<=9)
    {
        cout << "Your bus is BLUE." << endl;
        cout << "Enter destination: \n1. Shahrah-e-Faisal\n2. Bahadurabad\n3. Tariq Road\n" << endl;
        cin >> destination;

        if(location==7 && destination==2)
        {        
        	     loc=" Shahrah-e-Faisal";
         	     dest="Bahadurabad";
        	
        	
        cout << " The total distance is 4km: "<<endl;
        cost=4*5;
        
        }
            else if (location==7 && destination==3)
            {   
                loc=" Shahrah-e-Faisal";
         	     dest="Tariq Road";
            	
		    cout << " The total distance is 4km: "<<endl;
             cost=4*5;
        
            }
                else if (location==8 && destination==1)
               {
               	    loc=" Bahadurabad ";
         	        dest="Shahrah-e-Faisal";
               	   
                cout << " The total distance is 2km: "<<endl;
              cost=2*5;
           
               }
               
               else if (location==8 && destination==3)
               {
               	    loc=" Bahadurabad ";
         	        dest="Tariq Road";
               	   
                cout << " The total distance is 2km: "<<endl;
              cost=2*5;
           
               }
               
               else if (location==9 && destination==1)
               {
               	    loc=" Tariq Road ";
         	        dest="Shahrah-e-Faisal";
               	   
                cout << " The total distance is 2km: "<<endl;
              cost=2*5;
           
               }
               
               else if (location==9 && destination==2)
               {
               	    loc=" Tariq Road ";
         	        dest="Bahadurabad ";
               	   
                cout << " The total distance is 2km: "<<endl;
              cost=2*5;
           
               }
    }
    
    else if (location>9 && location<=12)
    {
        cout << "Your bus is ORANGE." << endl;
        cout << "Enter destination: \n1. Liaquatabad\n2. F.B Area\n3. Sohrab Goth\n" << endl;
        cin >> destination;

            if (location==10 && destination==2)
            {   
                 loc="Liaquatabad ";
         	     dest=" F.B Area";
                 cout << " The total distance is 4km: "<<endl;
                 cost=4*5;
            
            }
                else if (location==10 && destination==3)
                {
                	loc="Liaquatabad ";
         	        dest="Sohrab Goth ";
                    cout << " The total distance is 8km: "<<endl;
                    cost=8*5;
                
                }
                    else if (location==11 && destination==1)
                    {
                    	loc="F.B Area";
         	            dest="Liaquatabad ";
                    cout << " The total distance is 4km: "<<endl;
                     cost=4*5; 
                    
                    }
                    
                    else if (location==11 && destination==3)
                    {
                    	loc="F.B Area";
         	            dest="Sohrab Goth ";
                    cout << " The total distance is 4km: "<<endl;
                     cost=4*5; 
                    
                    }
                    
                      else if (location==12 && destination==1)
                    {
                    	loc="Sohrab Goth ";
         	            dest="Liaquatabad";
                    cout << " The total distance is 4km: "<<endl;
                     cost=4*5; 
                    
                    }
                    else if (location==12 && destination==2)
                    {
                    	loc="Sohrab Goth ";
         	            dest="F.B Area ";
                    cout << " The total distance is 4km: "<<endl;
                     cost=4*5; 
                    
                    }
                    
                    
    }
    
    else if (location>12 && location<=15)
    {
        cout << "Your bus is YELLOW." << endl;
        cout << "Enter destination: \n1. North Nazimabad\n2. North Karachi\n3. Surjani Town" << endl;
        cin >> destination;

        if (location==13 && destination==2)
        {
        		        loc="North Nazimabad";
         	            dest=" North Karachi ";
         cout << " The total distance is 6km: "<<endl;
         cost=6*5;
     
        }
                else if (location==13 && destination==3)
               {   
                        loc="North Nazimabad";
         	            dest="Surjani Town ";
               cout << " The total distance is 12km: "<<endl;
               cost=12*5;
            
                }
                else if (location==14 && destination==1)
                {
                        loc=" North Karachi ";
         	            dest="North Nazimabad ";
                cout << " The total distance is 6km: "<<endl;
                 cost=6*5;
                
                }
                
                 else if (location==14 && destination==3)
               {   
                        loc="North Karachi";
         	            dest="Surjani Town ";
               cout << " The total distance is 12km: "<<endl;
               cost=12*5;
            
                }
                else if (location==15 && destination==1)
                {
                        loc="Surjani Town";
         	            dest=" North Nazimabad";
                cout << " The total distance is 6km: "<<endl;
                 cost=6*5;
                
                }
                
                  else if (location==15 && destination==2)
                {
                        loc="Surjani Town";
         	            dest="North Karachi ";
                cout << " The total distance is 6km: "<<endl;
                 cost=6*5;
                
                }
    }
  }
};



class seat : public MetroBus
{
	public:
		int seatt;
	public:
		
		void no_of_seat()
		{
		    cout<<"Enter a number of seat"<<endl;
			cin>>seatt;
			seatt=seatt-1;
		}
	
};

class type : public seat
{
	public:
		int select1;
		int price;
		char typee[20];
		int arry[15]={ 1,2,3,4,5,6,7,8,9,10 };
		int arryy[15]={11,12,13,14,15,16,17,18,19,20 };
	public:
		
		void category()
		{
			
			cout<<"Enter seat category"<<endl;
			cout<<"1. "<<"business"<<endl;
			cout<<"2. "<<"economy"<<endl;
			cin>>select1;
			switch(select1)
			{
				case 1:
					price =15;
					cout<<"your busines class seat are"<<endl;
					
					for (int i=0; i<=seatt; i++)
					{
					 cout<<arry[i]<<endl;
					}
					cout<<"price of ticket are:"<<seatt*price<<endl;
				break;	
				
				case 2:
					price =10;
					cout<<"your economy class seat are"<<endl;
					
					for (int i=0; i<=seatt; i++)
					{
					 cout<<arryy[i]<<endl;
					}
					cout<<"price of ticket are:"<<seatt*price<<endl;
				break;	
			}
		}
	
};

class Ticket: public MetroBus
{
		protected:
		char name[50];
		float id;
		int timeC;
		public:
	    void PassengerDetails()
		{   
		    cout<<"===Name must be in alphbets==="<<endl; 
			cout<<"Enter your name: ";
			cin.get(name,50) ;
			cin.ignore();
			cout<<"===ID must be CNIC Number==="<<endl; 
			cout<<"Enter your id number: ";
			cin>>id;
			cout<<"==Timing=="<<endl;
			cout<<"Choose your preferred Time: \n 1.Morning(6:00am-11:00am) \n 2.Afternoon(11:01am-4:30pm) \n 3.Evening(4:31pm-8:00pm) \n 4.Night(8:01pm-2:00am) \n";
			cin>>timeC;
			
	   }
	   
	   	void TicketDisplay()
		{
			system("cls");
			cout<<" \n \t YOUR TICKET: \n";
			    cout<<"  Passenger Name: "<<name<<endl;
		    	cout<<"  Passenger Id  : "<<id<<endl;
			
		
			switch(timeC)
        {
         case 1:
         
            cout<< " Your Bus Time : Morning(6:00am-11:00am)"<<endl;
           
            break;
        
         case 2:
         
            cout<< " Your Bus Time : Afternoon(11:01am-4:30pm)"<<endl;
           
            break;
        
         case 3:
         
            cout<< " Your Bus Time :  Evening(4:31pm-8:00pm) "<<endl;
           
            break;
        
         case 4:
         
            cout<< " Your Bus Time : Night(8:01pm-2:00am)"<<endl;
           
            break;
			
	    }
	    
	    	switch(location)
        {
         case 1:
         
            cout<< " Your Bus : Green  "<<endl;
           
            break;
        
         case 2:
         
            cout<< " Your Bus : Green  "<<endl;
           
            break;
        
         case 3:
         
            cout<< " Your Bus : Green  "<<endl;
           
            break;
        
         case 4:
         
            cout<< " Your Bus : Red  "<<endl;
           
            break;
         case 5:
         
            cout<< "  Your Bus :Red  "<<endl;
           
            break;
        
         case 6:
         
            cout<< " Your Bus : Red  "<<endl;
           
            break;
        
         case 7:
         
            cout<<" Your Bus : Blue  "<<endl;
           
            break;
        
         case 8:
         
            cout<< " Your Bus : Blue  "<<endl;
           
            break;
        
		case 9:
         
            cout<< " Your Bus : Blue  "<<endl;
           
            break;
        
         case 10:
         
            cout<< " Your Bus : Orange "<<endl;
           
            break;
        
         case 11:
         
            cout<< " Your Bus :Orange "<<endl;
           
            break;
        
         case 12:
         
            cout<< " Your Bus : Orange  "<<endl;
           
            break;
           
		 case 13:
         
            cout<< " Your Bus : Yellow  "<<endl;
           
            break;
        
         case 14:
         
            cout<< "Your Bus : Yellow "<<endl;
           
            break;
        
         case 15:
         
            cout<< " Your Bus : Yellow  "<<endl;
           
            break;    
			
	       } 
		     
		cout<<"  LOCATION     :  "<<loc<<endl;
	    cout<<"  DESTINATION  :  "<<dest<<endl;
	    cout<<" Cost in Rupees:  "<< cost <<endl; 
	
	    }   
			
	    
	    
	    
	  
	 
	    
        
};



int main()
{
 
 type t1;
 
 
 
 Ticket T1;
 T1.PassengerDetails();
 T1.select();
 t1.no_of_seat();
 t1.category();
 T1.TicketDisplay();
 
 
 }
