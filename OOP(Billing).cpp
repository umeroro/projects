#include<iostream>
#include<string>
#include<fstream>

using namespace std;

class shopping
{
	protected:
		int pcode;
		float price,dis;
		string pname;
};

class me : public shopping
{
	public:
		void add();
		void edit();
		void rem();
		void list();
		void receipt();
		void administrator();
		void buyer();
		void menu(){
			m:
	        int choice;
	        string email,password;
	
	        cout<<"\t\t\t\t__________________________________________\n";
	        cout<<"\t\t\t\t                                          \n";
	        cout<<"\t\t\t\t          Supermart Main Menu             \n";
	        cout<<"\t\t\t\t                                          \n";
	        cout<<"\t\t\t\t__________________________________________\n";
	        cout<<"\t\t\t\t                                          \n";
	        cout<<"\t\t\t\t|   1) Administrator    |\n";
	        cout<<"\t\t\t\t|                       |\n";
	        cout<<"\t\t\t\t|   2) Buyer            |\n";
	        cout<<"\t\t\t\t|                       |\n";
	        cout<<"\t\t\t\t|   3) Exit             |\n";
	        cout<<"\t\t\t\t|                       |\n";
	        cout<<"\n\t\t\t Please Select : ";
	        cin>>choice;
	
	        switch(choice)
	        {
		        case 1:
			        cout<<"\t\t\t Please Login :- \n";
			        cout<<"\t\t\t Enter Email :   \n";
			        cin>>email;
			        cout<<"\t\t\t Enter Password : \n";
			        cin>>password;
			        if(email=="umer@gmail.com" && password=="umer123")
			        {
				        administrator();
			        }
			        else
			        {
				        cout<<"Invalid email/password";
			        }
		        break;
		
		        case 2:
			    {
				    buyer();
			    }
			
		        break;
		
		        case 3:
			    {
				    exit(0);
			    }
		
		        break;
			
		        default:
			    {
				    cout<<"Please select from the given option";
			    }
	        }
	        goto m;
	    }
};

void me :: administrator()
{
	m:
	int choice;
	cout<<"\n\n\n\t\t\t Administrator menu :-";
	cout<<"\n\t\t\t|_____1) Add the product_____|";
	cout<<"\n\t\t\t|                            |";
	cout<<"\n\t\t\t|_____2) Edit the product____|";
	cout<<"\n\t\t\t|                            |";
	cout<<"\n\t\t\t|_____3) Delete the product__|";
	cout<<"\n\t\t\t|                            |";
	cout<<"\n\t\t\t|_____4) Back to main menu___|";
	
	cout<<"\n\n\t Please Enter your choice : ";
	cin>>choice;
	
	switch(choice)
	{
		case 1:
			add();
		
		break;
		
		case 2:
			edit();
			
		break;
		
		case 3:
			rem();
			
		break;
		
		case 4:
			menu();
			
		break;
		
		default:
			cout<<"Invalid choice!";
	}
	goto m;
	
}

void me :: buyer(){
	m:
	int choice;
	cout<<"\t\t\t Buyer :- \n";
	cout<<"\t\t\t______________ \n";
	cout<<"                     \n";
	cout<<"\t\t\t1) Buy product \n";
	cout<<"                     \n";
	cout<<"\t\t\t2) Go Back     \n";
	
	cout<<"\t\t\t Enter your choice : ";
	cin>>choice;
	
	switch(choice)
	{
		case 1:
			receipt();
			
		break;
		
		case 2:
			menu();
			
		break;
		
		default:
			cout<<"Invalid choice";
	}
	goto m;
	
}

void me :: add()
{
	m:
	fstream data;
	int c,token=0;
	float p,d;
	string n;
	
	cout<<"\n\n\t\t\t Add new product ";
	cout<<"\n\n\t Enter product code of the product : ";
	cin>>pcode;
	cout<<"\n\n\t Enter Name of the Product :";
	cin>>pname;
	cout<<"\n\n\t Enter Price of the product :";
	cin>>price;
	cout<<"\n\n\t Enter Discount on Product :";
	cin>>dis;
	
	data.open("database.txt",ios::in);
	
	if(!data)
	{
		data.open("database.txt",ios::app|ios::out);
		data<<" "<<pcode<<" "<<pname<<" "<<price<<" "<<dis<<"\n";
		data.close();
	}
	else
	{
		data>>c>>n>>p>>d;
		
		while(!data.eof())
		{
			if(c==pcode)
			{
				token++;
			}
			data>>c>>n>>p>>d;
		}
		data.close();
	}
	
	if(token==1)
	{
		goto m;
	}
	else
	{
		data.open("database.txt",ios::app|ios::out);
		data<<" "<<pcode<<" "<<pname<<" "<<price<<" "<<dis<<"\n";
		data.close();
	}
	cout<<"\n\n\t\t Record inserted !";
}

void me :: edit()
{
	fstream data,data1;
	int pkey,c,token=0;
	float p,d;
	string n;
	
	cout<<"\n\t\t\t Modify the record";
	cout<<"\n\t\t\t Product Code :";
	cin>>pkey;
	
	data.open("database.txt",ios::in);
	if(!data)
	{
		cout<<"\n\nfile does not exit!";
	}
	else
	{
		data1.open("database1.txt",ios::app|ios::out);
		data>>pcode>>pname>>price>>dis;
		while(!data.eof())
		{
			if(pkey==pcode)
			{
				cout<<"\n\t\t Product new code :";
				cin>>c;
				cout<<"\n\t\t Name of the Product :";
				cin>>n;
				cout<<"\n\t\t Price :";
				cin>>p;
				cout<<"\n\t\t Discount :";
				cin>>d;
				data<<" "<<c<<" "<<n<<" "<<p<<" "<<d<<"\n";
				cout<<"\n\n\t\t Record Edited";
				token++;
			}
			else
			{
				data1<<" "<<pcode<<" "<<pname<<" "<<price<<" "<<dis<<"\n";
			}
			data>>pcode>>pname>>price>>dis;
		}
		data.close();
		data1.close();
		
		remove("database.txt");
		rename("database1.txt","database.txt");
		
		if(token==0)
		{
			cout<<"\n\n Record not found sorry!";
		}
	}
	
}

void me :: rem()
{
    fstream data,data1;
	int pkey,token=0;
	cout<<"\n\t\t Delete Product";
	cout<<"\n\t\t Product code :";
	cin>>pkey;
	data.open("database.txt",ios::in);
	if(!data)
	{
		cout<<"file does't exist";
	}
	else
	{
		data1.open("database1.txt",ios::app|ios::out);
		data>>pcode>>pname>>price>>dis;
		while(!data.eof())
		{
			if(pcode==pkey)
			{
				cout<<"\n\n\t Product deleted Successully";
				token++;
			}
			else
			{
				data<<" "<<pcode<<" "<<pname<<" "<<price<<" "<<dis<<"\n";
			}
			data>>pcode>>pname>>price>>dis;
		}
		data.close();
		data1.close();
		remove("database.txt");
		rename("database1.txt","database.txt");
		
		if(token==0)
		{
			cout<<"\n\n Record not found";
		}
	}
}

void me :: list()
{
	fstream data;
	data.open("database.txt",ios::in);
	cout<<"\n\n_________________________________________________________________\n";
	cout<<"ProNo \t\tName \t\tPrice\n";
	cout<<"\n\n_________________________________________________________________\n";
	data>>pcode>>pname>>price>>dis;
	while(!data.eof())
	{
		cout<<pcode<<"\t\t"<<pname<<"\t\t"<<price<<"\n";
		data>>pcode>>pname>>price>>dis;
	}
	data.close();
}

void me :: receipt()
{
	fstream data;
	int arrc[100],arrq[100],c=0;
	float amount=0,dis=0,total=0;
	char choice;
	
	cout<<"\n\n\t\t\t\t Receipt :-";
	data.open("database.txt",ios::in);
	if(!data)
	{
		cout<<"\n\n Empty Database";
	}
	else
	{
		data.close();
		
		list();
		cout<<"\n________________________________________________\n";
		cout<<"\n|                                               \n";
		cout<<"\n               Please place the order           \n";
		cout<<"\n|                                               \n";
		cout<<"\n________________________________________________\n";
		do
		{
			m:
			cout<<"\n\nEnter Product Code :";
			cin>>arrc[c];
			cout<<"\n\nEnter the product qunatity :";
			cin>>arrq[c];
			for(int i=0;i<c;i++)
			{
				if(arrc[c]==arrc[i])
				{
					cout<<"\n\n Duplicate product code. Please try agin!";
					goto m;
				}
			}
			c++;
			cout<<"\n\n Do you want to buy another product? I yes then press y else no";
			cin>>choice;
		}
		while(choice=='y');
		
		cout<<"\n\n\t\t\t________________________RECEIPT________________________\n";
		cout<<"\nProduct No\t Product Name\t Product Quantity\tprice\tAmount\tAmount with discount\n";
		
		for(int i=0;i<c;i++)
		{
			data.open("database.txt",ios::in);
			data>>pcode>>pname>>price>>dis;
			while(!data.eof())
			{
				if(pcode==arrc[i])
				{
					amount=price*arrc[i];
					dis=amount-(amount*dis/100);
					total=total+dis;
					cout<<"\n"<<pcode<<"\t\t"<<pname<<"\t\t"<<arrq[i]<<"\t\t"<<price<<"\t"<<amount<<"\t\t"<<dis;
				}
				data>>pcode>>pname>>price>>dis;
			}
		}
		data.close();
	}
	cout<<"\n\n_______________________________________________________";
	cout<<"\n Total Amount :"<<total;
}

int main(){
	me s1;
	s1.menu();
}
