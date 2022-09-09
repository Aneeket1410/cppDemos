#include <iostream>

int main(){
    if ((std::cout << "Hello World!" << std::endl)) //statements in cpp are expressions which can be evaluated
    {
        /* code */
    }
   //OR
   do
   {
       int num = (std::cout << "This is a statement, when evaluated assign value 20 to num var."<< std::endl, 20) ;
       std::cout <<"num = "<< num <<std::endl;
   } while ((std::cout << "Hello World!" << std::endl) && false);

   while((std::cout << "Hello World!", false)){} 
   // a statement can be returned with any value using comma operator.
    
}