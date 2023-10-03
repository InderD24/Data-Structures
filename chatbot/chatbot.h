#include <iostream>
#include <cstring>
#include <string>
#include <cstdlib>


using namespace std;

// chatbot.h

//
// Your chatbot class goes here. Make sure it works with chatbot_driver.cpp.
//

//
// You can #include any standard C++ files, but do not use any other outside
// code (unless you write it).
//

class Chatbot
{
  public:
    string name;
    int ans;

    Chatbot(string  a)
    {
      name = a;
      ans = 0;
    }
    
    string get_name()
    {
      return name;
    }
    
    void tell(string input)
    {
    if (input == "hello" || input == "Hello" || input == "hi"
              || input == "Hi" || input =="hey"|| input == "Hey"|| input == "What's up" || input == "whats up"|| input == "what's up")
     {
      ans = 0;
     }
     
    else if (input == "")
     
     {
       ans = 1;
     }

    else if (input == "Yes" || input == "YES" || input ==       "yes" || input == "yeah" || input == "Yeah" || input  =="yeah"|| input == "Yea")
        {
          ans = 2;
        }
      
    else if (input == "No" || input == "no" || input ==     "nah" || input == "Nah" || input == "nope" || input ==  "Nope")
        {
          ans = 3;
        }
        
      else if (input == "Mike Tyson" || input == "Mike" ||  input == "Tyson"|| input =="mike tyson"|| input == "mike"|| input == "tyson"|| input == "Iron Mike"|| input=="iron mike")
        {
          ans = 4;
        }
        
      else if(input == "muhammad ali" || input == "Muhammad Ali" || input == "Muhammad" || input == "muhammad"|| input== "ali"|| input == "Ali")
        
        {
          ans = 5;
        }
        
      else if (input == "floyd mayweather" || input == "Floyd Mayweather" || input == "Floyd" ||
        input == "floyd" || input == "Mayweather" || input == "mayweather")
        {
          ans = 6;
        }
        
      else if (input == "Manny Pacquiao" || input == "manny pacquiao" || input == "Manny" ||
        input == "Pacquiao" || input == "manny" || input == "pacquiao")
        
        {
          ans = 7;
        }
        else if (input == "goodbye" || input == "bye"|| input == "Bye"|| input == "Goodbye"){
          exit (3);
        }
      

    }

    string get_reply()
    {

      string greetings[] = {"With a yes or no, do you like boxing?","Hey do you like boxing? Yes or No", "Do you like to box? yes or no ?"};
      int i = rand() % 3;
      string greeting = greetings[i];

      string errors[] = {"Unfortunately I did not understand", "Your answer seems off", "What?"};
      int j =  rand() % 3;
      string error = errors[j];
      if (ans == 1)
      {
        return error;
      }
      else if (ans == 0)
      {
        return greeting;
      }
      else if (ans == 2)
      {
        return "Who's better Mike Tyson or Muhammed Ali?";
      }
      else if (ans == 3)
      {
        return "Everyone likes fighting, it's our natrual instinct, Mike Tyson or Muhammad Ali? If you don't know any of these fighters google them and tell me who you think seems better";
      }
      else if (ans == 4)
      {
        return "Nice, so Floyd Mayweather or Manny Pacquiao";
      }
      else if (ans == 5)
      {
        return "Just what I expected, so Floyd Mayweather or Manny Pacquiao";
      }
      else if (ans == 6)
      {
        return "You have an interesting taste in fighters, Goodbye, say bye back";
      }
      else if (ans == 7)
      {
        return "Power is Everything!!!!!, it's time for me to go, bye! say bye back";
      }
      else
        return "I do not undertstand, how about you try again.";
    }
};
