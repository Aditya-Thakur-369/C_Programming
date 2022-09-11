#include<stdio.h>
#include<string.h>
int main(){
    char user[20];
    char pass[20];
    printf("Enter Your Username : ");
    scanf("%s",&user);
    printf("Enter Your Password : ");
    scanf("%s",&pass);
    printf("The username is %s and the password is %s \n",user ,pass);
    if(strcmp(user,"aditya")==0)
    {
    if(strcmp(pass,"adi")==0)
    {
    printf("Correct password \n");
    printf("Log in succes \n");
    printf("Welcome \n");
    }
    else
    {
    printf("Incorrect password \n");
    }
    }
    else
    {
        printf("Invalid Username \n");
        printf("Please enter a valid Username \n");
        printf("Log In failed ");
    }
    return 0; 
}