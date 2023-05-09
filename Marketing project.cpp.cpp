#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int multiple(int a,int b);
int Store_price (int price ,int sum);

int main()
{
   int userchoice;
	int  switch_loop , quantity , price=0 , Q_price=1 ,Total_sum=0;
	cout<<endl;
	cout<<endl;
	cout<<"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;
	cout<<endl;
    cout<<"!!  !!!!  !!   ! !     !!! !!   ! !!!!!!   !!!!! !   !  !!!!  !!!!  !!!! !!! !!   !  !!!!!   !!     !!    !    !!!!  !  ! !!!!! !!!!!!! !!"<<endl;
    cout<<"!! !    ! ! !  ! !      !  ! !  ! !!!      !!    !!!!! !    ! !   ! !   ! !  ! !  ! !        ! !   ! !   ! !   !   ! !!!  !!!      !    !!"<<endl;
    cout<<"!! !    ! !  ! ! !      !  !  ! ! !!!        !!  !!!!! !    ! !!!!  !!!!  !  !  ! ! !  !!!   !  ! !  !  !!!!!  !!!!  !!   !!!      !    !!"<<endl;
    cout<<"!!  !!!!  !   !! !!!!! !!! !   !! !!!!!!  !!!!!  !   !  !!!!  !     !    !!! !   !!  !!!!!   !   !   ! !     ! !   ! !  ! !!!!!    !    !!"<<endl;
    cout<<endl;
    cout<<"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;
    cout<<endl;
cout<<"\n";
cout<<"LOGIN----REGISTRATION----SYSTEM"<<endl;
cout<<"\n";

 // open the file for reading and writing
    fstream file("users.txt", ios::in | ios::out | ios::app);

    // check if the file was opened successfully
    if (!file.is_open())
    {
        cout << "Error opening file." << endl;
        return 1;
    }

    // ask the user if they want to login or register
    cout << "Do you want to login or register? "<<endl;
    cout<<"1) Login press (l)"<<endl;
    cout<<"2) Register press (r)"<<endl;
    char choice;
    cin >> choice;

    // handle login
    if (choice == 'l')
    {
        string username, password;
        bool found = false;

        // get user input for username and password
        cout << "Enter username: ";
        cin >> username;
        cout << "Enter password: ";
        cin >> password;

        // search the file for the given username and password
        string line;
        while (getline(file, line))
        {
            if (line.find(username + " " + password) != string::npos)
            {
                found = true;
                break;
            }
        }

        // handle login success or failure
        if (found)
        {
            cout << "Login successful." << endl;
            cout<<endl;
             cout<<"Do you want to buy something"<<endl;
   cout<<endl;
   cout<<"If you buy anything type 1 if you don't want to buy anything so press any key to continue"<<endl;
   cout<<endl;
   cin>>userchoice;
   cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
  
   if(userchoice==0){
   	cout<<"Thankyou for Coming our market";
   }
   if(userchoice==1)
   {
     do{
   	cout<<endl;
	cout<<"\t\t\t\t\tOur Menue: "<<endl;
	cout<<endl;
   	cout<<"\t\t\t\t\tSelect any one: "<<endl;
   	cout<<"\t\t\t\t\t1. Food"<<endl;
   	cout<<"\t\t\t\t\t2. Communication Devices"<<endl;
   	cout<<"Choose (1-2): ";
   	cin>>userchoice;
   	  if(userchoice==1)
   	{
		
   	  	cout<<"\t\t\t\t\tMenue of Foods"<<endl;
   	  	cout<<"\t\t\t\t\tChoose which you want: "<<endl;
   	  	cout<<endl;
   	  	cout<<"\t\t\t\t\t1.Burgers"<<endl;
   	  	cout<<"\t\t\t\t\t2.Pizza"<<endl;
   	  	cout<<"\t\t\t\t\t3.Shawarama"<<endl;
   	  	cout<<"\t\t\t\t\t4.Deals"<<endl;
   	  	cout<<"\t\t\t\t\t5.No I don't need"<<endl;
    	cin>>userchoice;
   	  	if(userchoice==1)
   	  	{
   		do{
	     	// Declare Variables
    {
	cout<<"\t\t\t\t\t1. Shami Burger   RS. 110/-"<<endl;
    cout<<"\t\t\t\t\t2. Beff Burger    RS. 450/-"<<endl;
    cout<<"\t\t\t\t\t3. Zinger Burger  RS. 300/-"<<endl;
    cout<<"\t\t\t\t\t4. Cheese Burger  RS. 400/-"<<endl;  
    cout<<"\t\t\t\t\t5. Tower Buger    RS. 550/-\n"<<endl; }
	cout<<"Choose option 1 to 5 : ";
    cin>>userchoice;
    cout<<endl;
	cout<<"Enter quantity of product: ";
	cin>>quantity;
   switch(userchoice)
   {
   	      case 1:{
            price=110;
			break;}
		  case 2:{
		  	price=450;
			break;}
		  case 3:{
		  	price=300;
			break;}
		  case 4:{
		  	price=400;
			break;}
		  case 5:{
		  	price=550;
			break;}
		  default:{
		  	cout<<"Invalid! Type"<<endl;}
	}

	Q_price = multiple( price , quantity );                       // Quantity function

	Store_price( Q_price , Total_sum);                                 // Store price 
	Total_sum=Store_price(Q_price, Total_sum);	
	cout<<"\nDo you Want to Buy again ? Press (1).";
	cin>>switch_loop;
    cout<<endl;
   }while(switch_loop==1);
  cout<<"Your Total Price is: "<<"Rs"<<Total_sum<<endl;    
  cout<<"**************************************************************************************************************************************"<<endl;
} 
   if(userchoice==2)
   {
   		do{
    	cout<<"\t\t\t\t\tMenue of Pizzas"<<endl;
	cout<<"\t\t\t\t\t1. Chicken Fajjita              (small)            RS. 450/-"<<endl;
    cout<<"\t\t\t\t\t2. Chicken Fajjita              (meduim)           RS. 850/-"<<endl;
    cout<<"\t\t\t\t\t3. Chicken Fajjita              (Large)            RS. 1150/-"<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t4. Chicken Tikka                (small)            RS. 450/-"<<endl;
    cout<<"\t\t\t\t\t5. Chicken Tikka                (meduim)           RS. 850/-"<<endl;
    cout<<"\t\t\t\t\t6. Chicken Tikka                (Large)            RS. 1150/-"<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t7. Chicken Supreme              (small)            RS. 450/-"<<endl;
    cout<<"\t\t\t\t\t8. Chicken Supreme              (meduim)           RS. 850/-"<<endl;
    cout<<"\t\t\t\t\t9. Chicken Supreme              (Large)            RS. 1150/-"<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t10. Chicken Crown Crust pizza    (small)            RS. 550/-"<<endl;
    cout<<"\t\t\t\t\t11. Chicken Crown Crust pizza    (meduim)           RS. 950/-"<<endl;
    cout<<"\t\t\t\t\t12. Chicken Crown Crust pizza    (Large)            RS. 1300/-"<<endl;
    cout<<endl;
	cout<<"Choose option 1 to 12 : ";
    cin>>userchoice;
    cout<<endl;
	cout<<"Enter quantity of product : ";
	cin>>quantity;
   switch(userchoice)
   {
   	      case 1 :{
            price=450;
			break;}
		  case 2:{
		  	price=850;
			break;}
		  case 3:{
		  	price=1150;
			break;}
		  case 4:{
		  	price=450;
			break;}
		  case 5:{
		  	price=850;
			break;}
		  case 6:
		    price=1150;
		    break;
		  case 7:
		    price=450;
			break;
		  case 8:
		    price=850;
		  case 9:
		    price=1150;
		  case 10:
		    price=550;
		  case 11:
		    price=950;
		  case 12:
		    price=1300;						
		  default:{
		  	cout<<"Invalid! Type"<<endl;}
	}
	Q_price = multiple( price , quantity);                     
	Store_price( Q_price , Total_sum);                                
	Total_sum=Store_price(Q_price, Total_sum);	
	cout<<"\nDo you Want to Buy again ? Press (1).";
	cin>>switch_loop;
    cout<<endl;
   }while(switch_loop==1);
      cout<<"Your Total Price is: "<<"Rs"<<Total_sum<<endl;
      cout<<"******************************************************************************************************************************************"<<endl;
   }
 if(userchoice==3)
 {
do{
    {
	cout<<"\t1. Chicken Shawarma              RS. 150/-"<<endl;
    cout<<"\t2. Zinger Shawarma               RS. 300/-"<<endl;
    cout<<"\t3. Chicken Grilled Paratha Roll  RS. 400/-"<<endl;
    cout<<"\t4. Beef Shawarma                 RS. 500/-"<<endl;  
    cout<<"\t5. Chicken Beef Shawarma         RS. 550/-\n"<<endl; }
	cout<<"Choose option 1 to 5 : ";
    cin>>userchoice;
	cout<<"Enter quantity of product : ";
	cin>>quantity;
   switch(userchoice)
   {
   	      case 1:{
            price=150;
			break;}
		  case 2:{
		  	price=300;
			break;}
		  case 3:{
		  	price=400;
			break;}
		  case 4:{
		  	price=500;
			break;}
		  case 5:{
		  	price=550;
			break;}
		  default:{
		  	cout<<"Invalid! Type"<<endl;}
	}
	Q_price = multiple( price , quantity );                       // Quantity function
	Store_price( Q_price , Total_sum);                                 // Store price 
	Total_sum=Store_price(Q_price, Total_sum);	
	cout<<"\nDo you Want to Buy again ? Press (1).";
	cin>>switch_loop;
    cout<<endl;
   }while(switch_loop==1);
cout<<"Your Total Price is: "<<"Rs"<<Total_sum<<endl;
 }  
if(userchoice==4){
	cout<<"\t1. Family Deal             "<<endl;
    cout<<"\t2. Pizza Deals             "<<endl;
    cout<<"\t3. Special Combo           "<<endl;
    cout<<endl;
    cout<<"Choose (1-3)"<<endl;
    cin>>userchoice;	
    	if(userchoice==1){
do{
    	cout<<"\t1. 3 Medium Pizza , 3 Zinger Burger, 4 Chicken Shawarma, 2 Tower Burger ,2.5 Liter Drink (2800 Rs)"<<endl;
    	cout<<"\t2. 4 Large Pizza , 1 Cheese Burger, 3 Tower Burger ,6 Zinger Shawarma ,1.5 Liter Drink   (3500 Rs)"<<endl;
    	cout<<"\t3. 6 Shami Burger ,2 Small Pizza ,6 Chicken Shawarama, 1.5 Liter Drink                   (1800 Rs)"<<endl; 
	cout<<"Choose option 1 to 3 : ";
    cin>>userchoice;
	cout<<"Enter quantity of product : ";
	cin>>quantity;
   switch(userchoice)
   {
   	      case 1:{
            price=2800;
			break;}
		  case 2:{
		  	price=3500;
			break;}
		  case 3:{
		  	price=1800;
			break;}
		  default:{
		  	cout<<"Invalid! Type"<<endl;}
	}
	Q_price = multiple( price , quantity );                       
	Store_price( Q_price , Total_sum);                                  
	Total_sum=Store_price(Q_price, Total_sum);	
	cout<<"\nDo you Want to Buy again ? Press (1).";
	cin>>switch_loop;
    cout<<endl;
   }while(switch_loop==1);
cout<<"Your Total Price is: "<<"Rs"<<Total_sum<<endl;
   }
   	if(userchoice==2){
do{
    {
	cout<<"1. 3 Small Pizza, 1 Large Pizza                                  (1500 Rs)"<<endl;
  	cout<<"2. 2 Large Pizza, 3 Medium Pizza                                 (2500 Rs)"<<endl;
  	cout<<"3. 3 Large Pizza, 2 Medium Pizza, 1 Small Pizza, 2.5 Liter Drink (3500 Rs)"<<endl;
    }
	cout<<"Choose option 1 to 3 : ";
    cin>>userchoice;
	cout<<"Enter quantity of product : ";
	cin>>quantity;
   switch(userchoice)
   {
   	      case 1:{
            price=1500;
			break;}
		  case 2:{
		  	price=2500;
			break;}
		  case 3:{
		  	price=3500;
			break;}
		  default:{
		  	cout<<"Invalid! Type"<<endl;}
	}

	Q_price = multiple( price , quantity );                       
	Store_price( Q_price , Total_sum);                                
	Total_sum=Store_price(Q_price, Total_sum);	
	cout<<"\nDo you Want to Buy again ? Press (1).";
	cin>>switch_loop;
    cout<<endl;
   }while(switch_loop==1);
  cout<<"Your Total Price is: "<<"Rs"<<Total_sum<<endl;
   }
if(userchoice==3){
do{	
	{
	cout<<"1. 1 Zinger Burger , 1/2 Liter Drink                       (350 Rs)"<<endl;
  	cout<<"2. 3 Chicken Shawarama ,1/2 Liter Drink                    (400 Rs)"<<endl;
  	cout<<"3. 3 Shami Burger , 1 Tower Burger ,1 Liter Drink          (550 Rs)"<<endl;
    }
    	cout<<"Choose option 1 to 3 : ";
    cin>>userchoice;
	cout<<"Enter quantity of product : ";
	cin>>quantity;
   switch(userchoice)
   {
   	      case 1:{
            price=350;
			break;}
		  case 2:{
		  	price=400;
			break;}
		  case 3:{
		  	price=550;
			break;}
		  default:{
		  	cout<<"Invalid! Type"<<endl;}
	}
	Q_price = multiple( price , quantity );                      
	Store_price( Q_price , Total_sum);                                 
	Total_sum=Store_price(Q_price, Total_sum);	
	cout<<"\nDo you Want to Buy again ? Press (1).";
	cin>>switch_loop;
    cout<<endl;
   }while(switch_loop==1);
   cout<<"Your Total Price is: "<<"Rs"<<Total_sum<<endl;
  }
  }
  if(userchoice==5){
  	cout<<"Thankyou for Coming our Online Shopping Market"<<endl;
  }
  cout<<endl;
}
if(userchoice==2){
  cout<<endl;
  cout<<"\t1. Mobiles"<<endl;
  cout<<"\t2. Smart Watches"<<endl;
  cin>>userchoice;
  cout<<endl;
  if(userchoice==1){
	cout<<"We have three Varities of Mobile Companies: "<<endl;
	cout<<endl;
	cout<<"\t1. Samsung"<<endl;
	cout<<"\t2. Vivo"<<endl;
	cout<<"\t3. Oppo"<<endl;
cout<<"Choose Brand (1-3)"<<endl;
cin>>userchoice;
cout<<endl;
if(userchoice==1){
do{	
	{
		cout<<"We have 5 Models of Samsung Mobile"<<endl;
		cout<<endl;
	cout<<"\t1.  Samsung Galaxy A14 5G                       (54,999 Rs)"<<endl;
  	cout<<"\t2.  Samsung Galaxy A34                  	     (79,999 Rs)"<<endl;
  	cout<<"\t3.  Samsung Galaxy A13s                         (38,999 Rs)"<<endl;
  	cout<<"\t4.  Samsung Galaxy A54                          (115,999 Rs)"<<endl;
  	cout<<"\t5.  Smasung Galaxy F13                          (34,999 Rs)"<<endl;
    }
    	cout<<"Choose option 1 to 5 : ";
    cin>>userchoice;
	cout<<"Enter quantity of product : ";
	cin>>quantity;
   switch(userchoice)
   {
   	      case 1:{
            price=54999;
			break;}
		  case 2:{
		  	price=79999;
			break;}
		  case 3:{
		  	price=38999;
			break;}
		  case 4:{
		    price=115999;	
			break;}
		  case 5:{
		  	price=34999;
			break;
		  }		
		  default:{
		  	cout<<"Invalid! Type"<<endl;}
	}
	Q_price = multiple( price , quantity );                       

	Store_price( Q_price , Total_sum);                                
	Total_sum=Store_price(Q_price, Total_sum);		
	cout<<"\nDo you Want to Buy again ? Press (1).";
	cin>>switch_loop;
    cout<<endl;
   }while(switch_loop==1);
     cout<<"Your Total Price is: "<<"Rs"<<Total_sum<<endl; 
} 
   if(userchoice==2){
   	  do{	
	{
		cout<<"We have 5 Models of Vivo Mobile"<<endl;
		cout<<endl;
cout<<"\t1. V25 5G.      (Rs. 109,999)"<<endl;
cout<<"\t2. V25e.        (Rs. 109,999)"<<endl;
cout<<"\t3. Y16.         (Rs. 67,999)"<<endl;
cout<<"\t4. Y22.         (Rs. 69,999)"<<endl;
cout<<"\t5. Y02s.        (Rs. 49,999)"<<endl;
    }
    	cout<<"Choose option 1 to 5 : ";
    cin>>userchoice;
	cout<<"Enter quantity of product : ";
	cin>>quantity;
   switch(userchoice)
   {
   	      case 1:{
            price=109999;
			break;}
		  case 2:{
		  	price=109999;
			break;}
		  case 3:{
		  	price=67999;
			break;}
		  case 4:{
		    price=69999;	
			break;}
		  case 5:{
		  	price=49999;
			break;
		  }		
		  default:{
		  	cout<<"Invalid! Type"<<endl;}
	}

	Q_price = multiple( price , quantity );                       // Quantity function
	Store_price( Q_price , Total_sum);                                 // Store price 
	Total_sum=Store_price(Q_price, Total_sum);	
	cout<<"\nDo you Want to Buy again ? Press (1).";
                     	//cout<<"Press 0 Otherwise press any key to Continue. . . ."<
	cin>>switch_loop;
    cout<<endl;
   }while(switch_loop==1);
     cout<<"Your Total Price is: "<<"Rs"<<Total_sum<<endl; 
   }
   if(userchoice==3){
   	  	  do{	
	{
		cout<<"We have 4 Models of Vivo Mobile"<<endl;
		cout<<endl;
cout<<"\t1. Oppo F21 Pro 5G	     (Rs. 104999)"<<endl;	
cout<<"\t2. Oppo F21 Pro	     (Rs. 89999)"<<endl;	
cout<<"\t3. Oppo A96	         (Rs. 77999)"<<endl;	
cout<<"\t4. Oppo A16e	         (Rs. 59999)"<<endl;
    }
    	cout<<"Choose option 1 to 4 : ";
    cin>>userchoice;
	cout<<"Enter quantity of product : ";
	cin>>quantity;
   switch(userchoice)
   {
   	      case 1:{
            price=104999;
			break;}
		  case 2:{
		  	price=89999;
			break;}
		  case 3:{
		  	price=77999;
			break;}
		  case 4:{
		    price=59999;	
			break;}	
		  default:{
		  	cout<<"Invalid! Type"<<endl;}
	}
	Q_price = multiple( price , quantity );                       
	Store_price( Q_price , Total_sum);                                 
	Total_sum=Store_price(Q_price, Total_sum);	
	cout<<"\nDo you Want to Buy again ? Press (1).";
	cin>>switch_loop;
    cout<<endl;
   }while(switch_loop==1);
      cout<<"Your Total Price is: "<<"Rs"<<Total_sum<<endl;
   }
 }
   if(userchoice==2){
do{	
	{
		cout<<"We have 4 Models of Smart Mobile"<<endl;
		cout<<endl;
cout<<"\t1. Haino Teko H99 Smart Watch     Rs. 8,999/-"<<endl;	
cout<<"\t2. Kospet Magic 4 Smartwatch	   Rs. 8,499/-"<<endl;	
cout<<"\t3. OPPO Band Style	               Rs. 10,799/-"<<endl;	
cout<<"\t4. ITel ISW 31 Smart Watch 	   Rs. 12,499"<<endl;
    }
    	cout<<"Choose option 1 to 4 : ";
    cin>>userchoice;
	cout<<"Enter quantity of product : ";
	cin>>quantity;
   switch(userchoice)
   {
   	      case 1:{
            price=8999;
			break;}
		  case 2:{
		  	price=8499;
			break;}
		  case 3:{
		  	price=10799;
			break;}
		  case 4:{
		    price=12499;	
			break;}	
		  default:{
		  	cout<<"Invalid! Type"<<endl;}
	}
	Q_price = multiple( price , quantity );                       
	Store_price( Q_price , Total_sum);                               
	Total_sum=Store_price(Q_price, Total_sum);	
	cout<<"\nDo you Want to Buy again ? Press (1).";
	cin>>switch_loop;
    cout<<endl;
   }while(switch_loop==1);
   cout<<"Your Total Price is: "<<"Rs"<<Total_sum<<endl;
   }
  }
 cout<<endl;
 cout<<"Do you Want to show our Whole Menue"<<endl;
 cin>>userchoice;
}while(userchoice==1);
  system("pause");
}
        }
        else
        {
            cout << "Invalid username or password." << endl;
        }
    }

    // handle registration
    else if (choice == 'r')
    {
        string username, password;

        // get user input for username and password
        cout << "Enter username: ";
        cin >> username;
        cout << "Enter password: ";
        cin >> password;

        // save the username and password to the file
        file << username << " " << password << endl;
        cout << "Registration successful." << endl;
    }

    // handle invalid choice
    else
    {
        cout << "Invalid choice." << endl;
    }

    // close the file
    file.close();
}
int multiple(int a,int b){
         return a*b;}
int Store_price (int price ,int sum){
	return sum+price;
}
