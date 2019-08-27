#include <iostream>

using namespace std;

void PasswordValidation(string str, string ReStr){
          int strSize = str.length();
          bool lowerCase = false, upperCase = false, digit = false;
          if(strSize < 8){
            cout << "Note: Password must be at list 8 character longer and at list 1 digit, 1 upper case and 1 lower case character." << endl;
            cout << "Enter Your Password:";
            getline(cin, str);
            PasswordValidation(str, ReStr);
          }
          else{
            for(int i = 0; i < strSize; i++){
                if(str[i] >= '0' && str[i] <= '9'){
                   digit = true;
                }
                else if(str[i] >= 'a' && str[i] <= 'z'){
                    lowerCase = true;
                }
                else if(str[i] >= 'A' && str[i] <= 'Z'){
                    upperCase = true;
                }
            }
            if(digit == true && lowerCase == true && upperCase == true){
               if(ReStr == " "){
                 cout << "Reenter your password:";
                 getline(cin, ReStr);
               }
               if(str == ReStr){
                cout << "Password Matched." << endl;
                cout << "Your Password has been Updated." << endl;
               }
               else{
                  cout << "Password did not matched!!!" << endl;
                  cout << "Reenter your password:";
                  getline(cin, ReStr);
                  PasswordValidation(str, ReStr);
               }
             }
             else{
                cout << "Note: Password must be at list 8 character longer and at list 1 digit, 1 upper case and 1 lower case character." << endl;
                cout << "Enter Your Password:";
                getline(cin, str);
                PasswordValidation(str, ReStr);
             }

          }
}

int main()
{
    string str, ReStr = " ";
    cout << "Note: Password must be at list 8 character longer and at list 1 digit, 1 upper case and 1 lower case character." << endl;
    cout << "Enter Your Password:";
    getline(cin, str);
    PasswordValidation(str, ReStr);
    return 0;
}
