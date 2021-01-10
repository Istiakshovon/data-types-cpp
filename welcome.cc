#include <iostream>
#include <cmath>

using namespace std; 

int main(int argc, char**argv) {
//    in c programming strings are array of char
//    In c++ programming strings are strings
    string characterName = "John";
    int age = 30;
    double gpa = 3.5;
    bool isMale = true;
    char letter = 'A';
    string text = "Hello World";
    int num1 = 5;
    int num2 = 10;
    
// Prints hello world different way
//    cout = console out
//    endl not end1 endl means ending the line
    
    std::cout << "Hello World" << std::endl;
    cout << "Hello World" << endl;
    cout << "Hello World\n";
    
//    printing variables   
//    cout << "Hello "<<characterName <<". You are "<<age<<" years old." << "You got "<<gpa<<" in M.Sc.";
    
    cout <<"Addition : "<<num1+num2<<endl;
    cout <<"Subtraction : "<<num1-num2<<endl;
    cout <<"Multiplication : "<<num1*num2<<endl;
    cout <<"Division : "<<num2/num1<<endl;
    cout <<"Modulus : "<<num1%num2<<endl;
    cout <<"Power : "<<pow(num2,num1)<<endl;
    cout <<"Square root : "<<sqrt(num2)<<endl;
    cout << "Round operator in c++ increases and decreases depending on values\n"<<round(3.5)<<endl;
    cout <<"Ceil operator in c++ always increases\n"<<ceil(4.5)<<endl;
    cout <<"Floor operator in c++ always decreases\n"<<floor(4.5)<<endl;
    cout <<"(maximum clock frequency)Max number : "<<fmax(3,10)<<endl;
    cout <<"(minimum clock frequency)Minimum number : "<<fmin(3,10)<<endl;
//    In c++ exponential, sine, cosine, cotangent, tangent etc math functions available  
    
    
//   finding "World" in text value. Where to start that's second param  
    cout << text.find("World",0);
    
//    substr = substring and first parameter is where to start and second parameter is where to finish
    cout << text.substr(6,4);
    
//    array of string
    cout << text[0];
    
//    getting input from user
//    cin = console input   >> putting values to a variable << telling console output
//    getline takes huge value 
    cout << "Enter your name : ";
    getline(cin, characterName);
    cout <<"Hello "<<characterName;
    cout << "Enter your age : ";
    cin >> age;
    cout << "Hello "<<characterName<<"! You are "<<age<<" years old";
    
    
    string name1 = "john";
    string *pName1 = &name1;
    
    cout << *pName1;
    return 0;
}
