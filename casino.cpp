#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
int main()
{
    string name,no,cn,mem,ans,rep,cho;int ch,num,numc;;float price,amt;
    cout<<"\n-----Welcome to the Deltin Royale Casino-----";
    cout<<"\nEnter Name : ";cin>>name;
    while(1)
    {
        cout<<"\nEnter Debit/Credit Card Number : ";cin>>no;
        if(no.length()==12)
        {
            break;
        }
        else
        {
            cout<<"\nEnter Valid Card Number!";
        }
    }
    while(1)
    {
    cout<<"\nEnter Contact Number : ";cin>>cn;
    if(cn.length()==10)
    {
        break;
    }
    else
    {
        cout<<"\nEnter Valid Contact Number.";
    }
    }
    cout<<"\nWould you like to be a Member of our Deltin Royale Casino ? (yes/no) : ";cin>>ans;
    if(ans=="yes")
    {
        cout<<"\nEnter : ";
        cout<<"\n1. Premium Membership : 5000/-";
        cout<<"\n2. Gold Membership : 8000/-";
        cout<<"\n3. Platinum Membership : 12000/-";
        cout<<"\nEnter Your Choice : ";cin>>ch;
        switch(ch)
        {
            case 1 : cout<<"\nPremium Membership Selected.\nThank you!!";break;
            case 2 : cout<<"\nGold Membership Selected.\nThank you!!";break;
            case 3 : cout<<"\nPlatinum Membership Selected.\nThank you!!";break;
            default : cout<<"\nInvalid Choice";
        }
    }
    else 
    {
        cout<<"\nThank you ! "<<endl;
    }
    cout<<"\nEnter the Current Balance you want to Enter for Casino : ";cin>>price;
    cout<<"\nWould Like to Play Casino Now ? (yes/no) : ";cin>>rep;
    if(rep=="yes")
    {
        while(1)
        {
        cout<<"\nEnter the Number of your choice (1-100): ";cin>>num;
        cout<<"\nEnter the Amount you want to bet : ";cin>>amt;
        if(amt>0 && amt<=price)
        {
             numc=(rand()%100)+1;
             cout<<"\nGenerated Number : "<<numc;
             if(numc==num)
             {
                price+=amt;
                cout<<"\nTOTAL BALANCE : "<<price<<endl;
             }
             else
             {
                price-=amt;
                cout<<"\nTOTAL BALANCE : "<<price<<endl;
             }
             cout<<"\nWould you like to Play Again ? (yes/no) : ";cin>>cho;
            if(cho=="yes" && price>0)
            {
              continue;
            }
            else if(price==0)
            {
               cout<<"\nYour Balance is 0 Amount Sorry!! :(";break;
            }
            else if(cho=="no")
            {
             cout<<"\nThank you!! Have a great Entertainment!! Hope you Enjoyed!!"; break;
            }
        }
        else
        {
            cout<<"\nEnter Valid Amount!!";
        }
        }
    }
    else
    {
        cout<<"\n--Thank you for Choosing Deltin Royale Casino--"<<endl;
    }
}