/*
    This program is a combination of all (at least most of 'em) C++ projects I, HG, make.
    In case you wanna learn C++, there are more tutorials on the internet than the number of messaging apps by google. Go ahead, dive in, get confused, get enlightened.
    In case you find any mistake/have a problem/are bored, DO NOT:-
    1. Raise an issue about it.
    2. Fork, fix, pull request.
    3. Mail me at hg1229@gmail.com
    4. Find me on telegram @TeleHG.
    5. Miss out on the irony, stupid!

    Now, the licensing stuff.



    Copyright (C) 2016  Harshit Garg aka GitHG22 and Nalin Shani aka NixonZ

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.

    Happy Coding!
*/


#include<iostream>
#include<math.h>
#include<string>
#include<stdlib.h>
#include "../headers/pointstuff.h"

using namespace std;


int main()  {
    string fname;
    string lname;
    cout
    <<"    |\\      /| \\     /    |------  |-----|  |----\\   |-----\n"
    <<"    | \\    / |  \\   /     |        |     |  |     \\  |     \n"
    <<"    |  \\  /  |   \\ /      |        |     |  |      | |---  \n"
    <<"    |   \\/   |    |       |        |     |  |     /  |     \n"
    <<"    |        |    |       |------  |-----|  |----/   |-----\n"
    <<"                                                       v0.1.1\n\n";
//Because I always wanted to do this

//| \ \    / / | \
//| |\ \  / /| |
//| | \ \/ / | |
//| |        | |
//| |        | |
//And this one too. Will do it later.




    cout<<"For best results, be honest.\n"; //Yes, yes its that deep
    cout<<"And there's no way you can loop the code\n";
    cout<<"Okay, first things first, what's your name?\nEnter your First Name : ";
    cin>>fname;
    if (fname=="Harshit"||fname=="harshit"){cout<<"\nAbe apne hi programme mein kya dekhna chah raha hai?\n";}
    else if (fname=="Yash"||fname=="yash"||fname=="shalya"||fname=="Shalya"){cout<<"ayy motu\n";fname="Motu";lname="Shalya";}
    else if (fname=="Nalin"||fname=="nalin"||fname=="nixonz"||fname=="Nixonz"){cout<<"ayy Nallu";fname="Nallu";lname="Kant";}
    else if (fname=="sarthak"||fname=="Sarthak"){cout<<"Sarthak Bhai! _/\\_";lname="Saharan";}
    else if (fname=="sachin"||fname=="Sachin"){cout<<"Sachin XD";lname="Toy";}
    else if (fname=="Abhishek"||fname=="abhishek"){cout<<"Mango :P";fname="Mango";lname="Ka Pedh";}
    else if (fname=="varun"||fname=="Varun"){cout<<"Oye! Varun!";lname="Dhawan";}
    else if (fname=="Tarushi"||fname=="tarushi"){cout<<"user6tk spotted";fname="user6tk";}
    else if (fname=="Rushil"||fname=="rushil"){cout<<"Ae motu ruchill";fname="Ru";lname="Chill";}
//  else if (fname=="Ishaan"||fname=="ishaan"||fname=="ishan"||fname=="Ishaan"||fname=="Tropkillaz"||fname=="tropkillaz"){cout<<"Tropkillaz!";fname="Tropkillaz";lname="Akhand";}
//  else if (fname=="Nishchay"||fname=="nishchay"){cout<<"ayy Nishanol aka El~Diablo.";fname="Nishchyl";lname="Alcohol";}
    else if (fname=="Hardik"||fname=="hardik"){cout<<"Lo and behold! Hardik is here!";fname="Hardukant";}
    else{
    cout<<"Now, for your Last Name : ";
    cin>>lname;
  }

    cout<<'\n'<<fname<<' '<<lname<<"? LoL"<<endl;

    cout<<"Now, Mr."<<lname<<", what did you wish to do?"<<endl;

    char i;
    do  {
        cout
        <<endl<<endl
        //<<"1. See which number is maximum and minimum"<<endl Added to playwithnumbers

        <<"1. Play with numbers."<<endl
        <<"2. Enter a character and check if it's a number or alphabet."<<endl

        //<<"3. Find the 'raised to power' of a number"<<endl //deprecated. Reason: Small program.

        //<<"3. Generate 'n' natural/even/odd numbers and find the sum and product of them"<<endl //Could have done separate natural/even/odd numbers but no. Why? Because iLazy. deprecated. Reason : Mergerd with playwithnumbers

        <<"3. Generate the table of a number."<<endl

        //<<"6. Generate Fibonacci Series and optionally get the sum"<<endl
        //<<"7. Find the factorial of a given number"<<endl
        <<"4. Find roots of a quadratic equation, because you can't do homework yourself."<<endl
        <<"5. Enter a number in decimal and get the binary and hexadecimal equivalent of it."<<endl
        <<"e. GTFO"<<endl
        <<"So? ";
        cin>>i;

        if((i<=56&&i>=48)||i=='e'){
            switch (i){
            //case 49: greatest(); //deprecated. See archive.
            //    break;
            case 49: playswithnumbers();//Because the spelling is way too hard//Corrected on 19/10/2016//I changed. It was fibonacci.
                break;
            case 50: charalph();
                break;
            //case 51: power();
            //    break;
            //case 51: natnum();
            //   break;
            case 51: table();
                break;
            //case 55: factorial();
              //  break;
            case 52: quadratic();
                break;
            case 53: cout<<"Enter the number : ";
                     unsigned long int no;
                     char h[50],b[50];
                     cin>>no;
                     d2b(no,b);d2h(no,h);
                     cout<<"The binary equivalent of the number is "<<b
                     <<"\nThe hexadecimal equivalent of the number is "<<h<<endl;
                break;
            case 'e': cout<<"Good Bye, "<<fname<<' '<<lname;break;
            default: break;
            }
        }
        else {
            cout<<"\n\nYou little evil devil. Can't read English. DAE.";
            exit(1);
        }


    }
    while(i!='e');

    return 0;
}
