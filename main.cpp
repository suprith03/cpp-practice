#include <iostream>
#include<cmath>
#include<math.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);

#endif


// IF ELSE EXAMPLES .. 
    
    // int savings;
    // cin>>savings;

    // if (savings>4000){
    //     if(savings>80000){
    //         cout<<"RoadTrip"<<endl;
    //     }
    //         else{
    //             cout<<"gareeb bsdk"<<endl;;
    //         }
        
    
    // }
    // else if (savings>2000){
    // cout<<"b"<<endl; 
    // }
    // else {
    //     cout<<"c"<<endl;
    // }




// ODD EVEN EXAMPLE .. 

    // int n;
    // cin>>n;

    // if(n%2==0){
    //     cout<<"EVEN"<<endl;
    // }else{
    //     cout<<"ODD"<<endl;

    // }




// LOOPS and CONT. & BREAK .. 

    // for(int i =0;i<100;i++)
    // {
    //     if(i%3==0){
    //         continue;
    //     }
    //     cout<<i<<endl;
    // }



// CHECKING PRIME NUMBERS..

    // int n;
    // cin>>n;
    // int i;
   

    // for (i=2;i<n;i++)
    // {
    //     if(n%i==0){
    //         cout<<"NOT PRIME"<<endl;
    //         break;
    //     }
    // }
    // if (i==n){
    //     cout<<"PRIME"<<endl;
    //     return 0;
    // }

     
     
     // PRINT PRIME NO.s BETWEEN 2 NUMBERS

//      int a,b;
//      cin>>a>>b;
     
//      for(int num=a;num<=b;num++)
//      {
//         int i;
//         for(i=2;i<num;i++){
//             if(num%i==0){
//             break;

//         }
//      }
//      if(i==num){
//         cout<<num<<endl;
//      }
// return 0;
//      }




    //SWITCH CASE .. 

    // char button;
    // cin>>button;

    // if(button=='a')
    // {
    //     cout<<"Hello"<<endl;
    // }
    // else if(button=='b')
    // {
    //     cout<<"Namaste"<<endl;
    // }
    // else if(button=='c')
    // {
    //     cout<<"Hola"<<endl;
    // }
    // else if(button=='d')
    // {
    //     cout<<"Ciao"<<endl;
    // }
    // else{
    //     cout<<"Chaman kuch toh seekh le"<<endl;
    // }


    // char button;
    // cin>>button;
    
    // switch(button)
    // {
    //     case 'a':
    //     cout<<"Hello"<<endl;
    //     break;
    //      case 'b':
    //     cout<<"Namaste"<<endl;
    //     break;
    //      case 'c':
    //     cout<<"Hola"<<endl;
    //     break;
    //      case 'd':
    //     cout<<"Ciao"<<endl;
    //     break;
    //     default:
    //     cout<<"Chaman kuch toh seekh le"<<endl;
    //     break;

    // }




// Calculator


// float n1,n2;
// cout<<"Input 2 Number " <<endl;
// cin>>n1>>n2;

// char op;
// cout<<"Enter Operator"<<endl;
// cin>>op;

// switch (op)
// {
// case '+':
// cout<< n1+n2 <<endl;
//     break;
// case '-':
// cout<< n1-n2 <<endl;
//     break;
// case '*':
// cout<< n1*n2 <<endl;
//     break;
// case '/':
// cout<< n1 / n2 <<endl;
//     break;


// default:
// cout<<"Invalid"<<endl;
//     break;
// }



// PRINTING * AS ROWS AND COLS..
// int row,col;
// cin>>row>>col;

// for(int i=1;i<=row;i++){
//     for(int j=1;j<=col;j++){
//     if(i==1 || i==row || j==1 || j==col){
//   cout<<"*";
//     }
//     else{
//         cout<<" ";
//     }
      
//     }

//     cout<<endl;

// }





// BUTTERFLY PATTERN PRINT

int n;
cin>>n;

for(int i=1;i<=n;i++){
    for( int j=1;j<=i;j++){
        cout<<"*";

    }
        int space =2*n-2*i;
        for(int j=1;j<=space;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
}

for(int i=n;i>=1;i--){
    for( int j=1;j<=i;j++){
        cout<<"*";

    }
        int space =2*n-2*i;
        for(int j=1;j<=space;j++){
            cout<<" ";

        }
        for(int j=1;j<=i;j++){
            cout<<"*";
           
        }
cout<<endl;

return 0;
}



// REVERSE A NUMBER .. 

// int n;
// cin>>n;
// int reverse=0;
// while(n>0){
//     int lastdigit=n%10;
//     reverse = reverse*10 + lastdigit;
//     n=n/10;
// }
// cout<<reverse<<endl;




// ARMSTRONG NUMBER ..(adding cubes of all the digits )

// int n;
// cin>>n;

// int sum=0;
// int original=n;
// while(n>0){
//     int lastdigit=n%10;
//     sum+=pow(lastdigit,3);
//     n=n/10;

// }
// if(sum==original){
//     cout<<"ARMSTRONG"<<endl;

// }
// else{
//     cout<<"NOT ARMSTRONG"<<endl;
// }
// return 0;
}