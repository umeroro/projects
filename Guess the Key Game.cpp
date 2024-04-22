#include<iostream>
#include<string>
#include<cstdlib>
#include<time.h>
using namespace std;
void easy(int arr[3][3],char brr[3][3],int count,int win,int ch){
	cout<<"\t\t\t                                             \n";
	cout<<"\t\t\t  =========================================    "<<endl;
	cout<<"\t\t\t  =      *      =           =                  "<<endl;
	cout<<"\t\t\t  =    * * *    =           =                  "<<endl;
	cout<<"\t\t\t  =      *      =           =                  "<<endl;
	cout<<"\t\t\t  =     ***     =           =                  "<<endl;
	cout<<"\t\t\t  =    * * *    =           =                  "<<endl;
	cout<<"\t\t\t  =   *  *  *   =           =                  "<<endl;
	cout<<"\t\t\t  =     * *     =           =                  "<<endl;
	cout<<"\t\t\t  =    *   *    =           =                  "<<endl;
	cout<<"\t\t\t  =========================================    "<<endl;
	l1:
	cout<<"\t\t\t"<<"|"<<brr[0][0]<<"|"<<brr[0][1]<<"|"<<brr[0][2]<<"|"<<brr[1][0]<<"|";
	cout<<endl;
	cout<<"\t\t\tEnter Your Choice to Find Key : ";
	cin>>ch;
	if( ch==arr[0][0] || ch==arr[1][0] ){
	    count++;
		win++;
		if(win==2){
			for(int i=0;i<3;i++){
				for(int j=0;j<1;j++){
					ch==brr[i][j];
					brr[i][j]='X';
				}
			}
			cout<<"\t\t\t"<<"|"<<brr[0][0]<<"|"<<brr[0][1]<<"|"<<brr[0][2]<<"|"<<brr[1][0]<<"|";
			cout<<endl;
			cout<<"\t\t\t                                             \n";
	        cout<<"\t\t\t  =========================================    "<<endl;
	        cout<<"\t\t\t  =      *                                     "<<endl;
	        cout<<"\t\t\t  =    * * *                                   "<<endl;
	        cout<<"\t\t\t  =      *                                     "<<endl;
	        cout<<"\t\t\t  =     ***                                    "<<endl;
	        cout<<"\t\t\t  =    * * *                                   "<<endl;
	        cout<<"\t\t\t  =   *  *  *                                  "<<endl;
	        cout<<"\t\t\t  =     * *                                    "<<endl;
	        cout<<"\t\t\t  =    *   *                                   "<<endl;
	        cout<<"\t\t\t  =========================================    "<<endl;
	        cout<<endl;
	        cout<<"\t\t\tYou found the keys"<<endl;
			goto x1;
		}
		for(int i=0;i<=2;i++){
			for(int j=0;j<=2;j++){
				if(brr[i][j]==ch){
					brr[i][j]='X';
				}
			}
		}
		cout<<"\t\t\t                                             \n";
	    cout<<"\t\t\t  =========================================    "<<endl;
	    cout<<"\t\t\t  =      *                  =                  "<<endl;
	    cout<<"\t\t\t  =    * * *                =                  "<<endl;
	    cout<<"\t\t\t  =      *                  =                  "<<endl;
	    cout<<"\t\t\t  =     ***                 =                  "<<endl;
	    cout<<"\t\t\t  =    * * *                =                  "<<endl;
	    cout<<"\t\t\t  =   *  *  *               =                  "<<endl;
	    cout<<"\t\t\t  =     * *                 =                  "<<endl;
	    cout<<"\t\t\t  =    *   *                =                  "<<endl;
	    cout<<"\t\t\t  =========================================    "<<endl;
	    cout<<endl;
	    cout<<"\t\t\tYou found 1 the Key find another"<<endl;
		goto l1;
	}
	else{
	    count++;
	    for(int i=0;i<=2;i++){
			for(int j=0;j<=2;j++){
				if(brr[i][j]==ch){
					brr[i][j]='X';
			    }
			}
		}
		if(count==2){
		    cout<<"\t\t\t"<<"|"<<brr[0][0]<<"|"<<brr[0][1]<<"|"<<brr[0][2]<<"|"<<brr[1][0]<<"|";
			cout<<endl;
			cout<<"\t\t\t                                             \n";
	        cout<<"\t\t\t  =========================================    "<<endl;
	        cout<<"\t\t\t  =      *      =           =                  "<<endl;
	        cout<<"\t\t\t  =    * * *    =           =                  "<<endl;
	        cout<<"\t\t\t  =      *      =           =                  "<<endl;
	        cout<<"\t\t\t  =     ***     =           =                  "<<endl;
	        cout<<"\t\t\t  =    * * *    =           =                  "<<endl;
	        cout<<"\t\t\t  =   *  *  *   =           =                  "<<endl;
	        cout<<"\t\t\t  =     * *     =           =                  "<<endl;
	        cout<<"\t\t\t  =    *   *    =           =                  "<<endl;
	        cout<<"\t\t\t  =========================================    "<<endl;
	        cout<<endl;
	        cout<<"\t\t\tGame Over you don't escape for cage'"<<endl;
			goto x1;
		}
		cout<<"\t\t\tTry Again"<<endl;
		goto l1;
	}
	x1:;
}
void medium(int arr[3][3],char brr[3][3],int count,int win,int ch,int *num1,int *num2){
	cout<<"\t\t\t                                             \n";
	cout<<"\t\t\t  =========================================    "<<endl;
	cout<<"\t\t\t  =      *      =           =                  "<<endl;
	cout<<"\t\t\t  =    * * *    =           =                  "<<endl;
	cout<<"\t\t\t  =      *      =           =                  "<<endl;
	cout<<"\t\t\t  =     ***     =           =                  "<<endl;
	cout<<"\t\t\t  =    * * *    =           =                  "<<endl;
	cout<<"\t\t\t  =   *  *  *   =           =                  "<<endl;
	cout<<"\t\t\t  =     * *     =           =                  "<<endl;
	cout<<"\t\t\t  =    *   *    =           =                  "<<endl;
	cout<<"\t\t\t  =========================================    "<<endl;
	l1:
	cout<<"\t\t\t"<<"|"<<brr[0][0]<<"|"<<brr[0][1]<<"|"<<brr[0][2]<<"|"<<brr[1][0]<<"|"<<brr[1][1]<<"|"<<brr[1][2]<<"|";;
	cout<<endl;
	cout<<"\t\t\tEnter Your Choice to Find Key : ";
	cin>>ch;
	if( ch==arr[0][0] || ch==arr[0][1] || ch==arr[1][1] || ch==arr[1][2]){
	    count++;
		win++;
		if(win==4){
			for(int i=0;i<3;i++){
				for(int j=0;j<1;j++){
					ch==brr[i][j];
					brr[i][j]='X';
				}
			}
			cout<<"\t\t\t"<<"|"<<brr[0][0]<<"|"<<brr[0][1]<<"|"<<brr[0][2]<<"|"<<brr[1][0]<<"|"<<brr[1][1]<<"|"<<brr[1][2]<<"|";;
			cout<<endl;
			cout<<"\t\t\t                                             \n";
	        cout<<"\t\t\t  =========================================    "<<endl;
	        cout<<"\t\t\t  =      *                                     "<<endl;
	        cout<<"\t\t\t  =    * * *                                   "<<endl;
	        cout<<"\t\t\t  =      *                                     "<<endl;
	        cout<<"\t\t\t  =     ***                                    "<<endl;
	        cout<<"\t\t\t  =    * * *                                   "<<endl;
	        cout<<"\t\t\t  =   *  *  *                                  "<<endl;
	        cout<<"\t\t\t  =     * *                                    "<<endl;
	        cout<<"\t\t\t  =    *   *                                   "<<endl;
	        cout<<"\t\t\t  =========================================    "<<endl;
	        cout<<endl;
	        cout<<"\t\t\tYou found the keys"<<endl;
			goto x1;
		}
		for(int i=0;i<=2;i++){
			for(int j=0;j<=2;j++){
				if(brr[i][j]==ch){
					brr[i][j]='X';
				}
			}
		}
		cout<<"\t\t\t                                             \n";
	    cout<<"\t\t\t  =========================================    "<<endl;
	    cout<<"\t\t\t  =      *                  =                  "<<endl;
	    cout<<"\t\t\t  =    * * *                =                  "<<endl;
	    cout<<"\t\t\t  =      *                  =                  "<<endl;
	    cout<<"\t\t\t  =     ***                 =                  "<<endl;
	    cout<<"\t\t\t  =    * * *                =                  "<<endl;
	    cout<<"\t\t\t  =   *  *  *               =                  "<<endl;
	    cout<<"\t\t\t  =     * *                 =                  "<<endl;
	    cout<<"\t\t\t  =    *   *                =                  "<<endl;
	    cout<<"\t\t\t  =========================================    "<<endl;
	    cout<<endl;
	    cout<<"\t\t\tYou found 1 the Key find another"<<endl;
		goto l1;
	}
	else{
	    count++;
	    for(int i=0;i<=2;i++){
			for(int j=0;j<=2;j++){
				if(brr[i][j]==ch){
					brr[i][j]='X';
			    }
			}
		}
		if(count==4){
		    cout<<"\t\t\t"<<"|"<<brr[0][0]<<"|"<<brr[0][1]<<"|"<<brr[0][2]<<"|"<<brr[1][0]<<"|"<<brr[1][1]<<"|"<<brr[1][2]<<"|";;
			cout<<endl;
			cout<<"\t\t\t                                             \n";
	        cout<<"\t\t\t  =========================================    "<<endl;
	        cout<<"\t\t\t  =      *      =           =                  "<<endl;
	        cout<<"\t\t\t  =    * * *    =           =                  "<<endl;
	        cout<<"\t\t\t  =      *      =           =                  "<<endl;
	        cout<<"\t\t\t  =     ***     =           =                  "<<endl;
	        cout<<"\t\t\t  =    * * *    =           =                  "<<endl;
	        cout<<"\t\t\t  =   *  *  *   =           =                  "<<endl;
	        cout<<"\t\t\t  =     * *     =           =                  "<<endl;
	        cout<<"\t\t\t  =    *   *    =           =                  "<<endl;
	        cout<<"\t\t\t  =========================================    "<<endl;
	        cout<<endl;
	        cout<<"\t\t\tGame Over you don't escape for cage'"<<endl;
			goto x1;
		}
		cout<<"\t\t\tTry Again"<<endl;
		goto l1;
	}
	x1:;
}
void hard(int arr[3][3],char brr[3][3],int count,int win,int ch,int *num1,int *num2,int *num3,int *num4){
	cout<<"\t\t\t                                             \n";
	cout<<"\t\t\t  =========================================    "<<endl;
	cout<<"\t\t\t  =      *      =           =                  "<<endl;
	cout<<"\t\t\t  =    * * *    =           =                  "<<endl;
	cout<<"\t\t\t  =      *      =           =                  "<<endl;
	cout<<"\t\t\t  =     ***     =           =                  "<<endl;
	cout<<"\t\t\t  =    * * *    =           =                  "<<endl;
	cout<<"\t\t\t  =   *  *  *   =           =                  "<<endl;
	cout<<"\t\t\t  =     * *     =           =                  "<<endl;
	cout<<"\t\t\t  =    *   *    =           =                  "<<endl;
	cout<<"\t\t\t  =========================================    "<<endl;
	l3:
	cout<<"\t\t\t"<<"|"<<brr[0][0]<<"|"<<brr[0][1]<<"|"<<brr[0][2]<<"|"<<brr[1][0]<<"|"<<brr[1][1]<<"|"<<brr[1][2]<<"|"<<brr[2][0]<<"|"<<brr[2][1]<<"|"<<brr[2][2]<<"|";
	cout<<endl;
	cout<<"\t\t\tEnter Your Choice to Find Key : ";
	cin>>ch;
	if( ch==arr[0][0] || ch==arr[0][1] || ch==arr[0][2] || ch==arr[1][1] || ch==arr[2][0] || ch==arr[2][2] ){
	    count++;
		win++;
		if(win==6){
			cout<<"\t\t\t"<<"|"<<brr[0][0]<<"|"<<brr[0][1]<<"|"<<brr[0][2]<<"|"<<brr[1][0]<<"|"<<brr[1][1]<<"|"<<brr[1][2]<<"|"<<brr[2][0]<<"|"<<brr[2][1]<<"|"<<brr[2][2]<<"|";
			cout<<endl;
			cout<<"\t\t\t                                             \n";
	        cout<<"\t\t\t  =========================================    "<<endl;
	        cout<<"\t\t\t  =      *                                     "<<endl;
	        cout<<"\t\t\t  =    * * *                                   "<<endl;
	        cout<<"\t\t\t  =      *                                     "<<endl;
	        cout<<"\t\t\t  =     ***                                    "<<endl;
	        cout<<"\t\t\t  =    * * *                                   "<<endl;
	        cout<<"\t\t\t  =   *  *  *                                  "<<endl;
	        cout<<"\t\t\t  =     * *                                    "<<endl;
	        cout<<"\t\t\t  =    *   *                                   "<<endl;
	        cout<<"\t\t\t  =========================================    "<<endl;
	        cout<<endl;
	        cout<<"\t\t\tYou found the keys and You are Escape"<<endl;
			goto x1;
		}
		cout<<"\t\t\t                                             \n";
	    cout<<"\t\t\t  =========================================    "<<endl;
	    cout<<"\t\t\t  =      *                  =                  "<<endl;
	    cout<<"\t\t\t  =    * * *                =                  "<<endl;
	    cout<<"\t\t\t  =      *                  =                  "<<endl;
	    cout<<"\t\t\t  =     ***                 =                  "<<endl;
	    cout<<"\t\t\t  =    * * *                =                  "<<endl;
	    cout<<"\t\t\t  =   *  *  *               =                  "<<endl;
	    cout<<"\t\t\t  =     * *                 =                  "<<endl;
	    cout<<"\t\t\t  =    *   *                =                  "<<endl;
	    cout<<"\t\t\t  =========================================    "<<endl;
	    cout<<"\t\t\tYou found the Key find another"<<endl;
		goto l3;
	}
	else{
	    count++;
		if(count==6){
		    cout<<"\t\t\t"<<"|"<<brr[0][0]<<"|"<<brr[0][1]<<"|"<<brr[0][2]<<"|"<<brr[1][0]<<"|"<<brr[1][1]<<"|"<<brr[1][2]<<"|"<<brr[2][0]<<"|"<<brr[2][1]<<"|"<<brr[2][2]<<"|";
			cout<<endl;
			cout<<"                                             \n";
	        cout<<"\t\t\t  =========================================    "<<endl;
	        cout<<"\t\t\t  =      *      =           =                  "<<endl;
	        cout<<"\t\t\t  =    * * *    =           =                  "<<endl;
	        cout<<"\t\t\t  =      *      =           =                  "<<endl;
	        cout<<"\t\t\t  =     ***     =           =                  "<<endl;
	        cout<<"\t\t\t  =    * * *    =           =                  "<<endl;
	        cout<<"\t\t\t  =   *  *  *   =           =                  "<<endl;
	        cout<<"\t\t\t  =     * *     =           =                  "<<endl;
	        cout<<"\t\t\t  =    *   *    =           =                  "<<endl;
	        cout<<"\t\t\t  =========================================    "<<endl;
	        cout<<endl;
	        cout<<"\t\t\tGame Over"<<endl;
			goto x1;
		}
		cout<<"\t\t\tTry Again"<<endl;
		goto l3;
	}
	srand(time(0));
	*num1=arr[0][0]+rand()%(arr[3][3]-arr[0][0]+1);
	*num2=arr[0][0]+rand()%(arr[3][3]-arr[0][0]+1);
	*num3=arr[0][0]+rand()%(arr[3][3]-arr[0][0]+1);
	*num4=arr[0][0]+rand()%(arr[3][3]-arr[0][0]+1);
	x1:;
}
int main(){
	int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	char brr[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
	int count=0;
	int win=0;
	int ch;
	int level;
	int *num1,*num2,*num3,*num4;
	cout<<"\t\t\t=============================================\n";
	cout<<"\t\t\t             WELCOME TO GUESS GAME           \n";
	cout<<"\t\t\t=============================================\n";
	cout<<"\t\t\t                                             \n";
	cout<<"\t\t\t   Discription :                             \n";
	cout<<"\t\t\t            Guess the Key to Escape from Cage\n";
	cout<<"\t\t\t                                             \n";
	cout<<"\t\t\t=============================================\n";
	cout<<"\t\t\t                                             \n";
	cout<<"\t\t\t            Select Difficulty Level    \n"<<endl;
	cout<<"\t\t\t=============================================\n";
	cout<<"\t\t\t              Enter 1 for Easy         \n"<<endl;
	cout<<"\t\t\t       (In Easy Level You find 2 Keys) \n"<<endl;
	cout<<"\t\t\t              Enter 2 for Medium       \n"<<endl; 
	cout<<"\t\t\t      (In Medium Level You find 4 Keys)\n"<<endl;
	cout<<"\t\t\t              Enter 3 for Hard         \n"<<endl;
	cout<<"\t\t\t        (In Hard Level You find 6 Keys)\n"<<endl;
	cout<<"\t\t\t              Enter Your Choice : ";
	cin>>level;
	switch(level){
		case 1:
			easy(arr,brr,count,win,ch);
	    break;
	    case 2:
	    	medium(arr,brr,count,win,ch,num1,num2);
	    break;
	    case 3:
	    	hard(arr,brr,count,win,ch,num1,num2,num3,num4);
	    break;
    }
}
