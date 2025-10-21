#include <iostream>
using namespace std;

int main() {
    //TODO: Create int var and cout and cin commands

    int n;  // I declared the variable "n"//
   
    cout <<"Hello User lets play a game"<<endl;  //I comunicated in a social way with the user :)//
        cout << "Type a number :"<<endl;// I asked the user to type an specific value//
    cin >> n; // I am giving the variable "n" a value depending on what the user inputs//

    // TODO: Write a for loop that runs from 1 to limit
    
for (int i = 1 ; i <= n; i++){     //Initiating a "for" loop//
   
        
        // TODO: Use if/else statements to apply FizzBuzz logic

    
    //I did this last night and had few mistakes because of the order I code//
    //so i started with because in order for the compiler to not stop at the first code that makes sence
    // which would be i % 3 and 1 % 5, so for it to loop i need to start with the value that includes both numbers in this specific program which is 3 & 5.
 if ( i % 3 == 0 && i % 5 == 0){
     cout <<" fizzBuzz"<<endl;
 }
    else if (i % 3 == 0){
        cout << "fizz" <<endl;
    }
    else if (i % 5 == 0){
        cout << "Buzz" <<endl;
    }
    else {
        cout << i <<endl;
    }
}
    

    return 0;
}
