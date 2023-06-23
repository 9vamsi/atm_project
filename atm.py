print("Welcome to SBI ATM")
print("Please enter the card ")
a = input("PLEASE ENTER YOUR ATM PIN: ")
if(len(a)<4):
    print("wrong pin entered")
else:
    print("                'welcome to new page'         ")
    print("press '1' for cash withdrawal")
    print("press '2' for Balance inquiry")
    print("press '3' for enquiry")
    print("press 4 for change card pin")
    b = int(input("PLEASE SELECT THE OPTION YOU WANT:"))
    if (b == 1):
        z = int(input("Please enter the bank balance in your account:"))
        c = int(input("100/1000/500/2000 'Enter the amount you want to withdraw': "))
        if (z >= c):
            print("successfully drawn")
            print("Updated bank balance :", z - c)
            d = input("Do you want to print the receipt y/n: ")
            if (d == 'y'):
                print("Receipt is successfully generated")
            if (d == 'n'):
                print("Thank you, visit again")
        if (z < c):
            print("Not sufficient amount")
            print("Thank you")
    if (b == 2):
        x = (input("Enter your last four digits of your account_no: "))
        if (len(x) == 4):
            print("your balance in", x, "is: 14000")
        else:
            print("no of digits are less than 4")
    if (b == 3):
        print("contact us -> |")
        print("mob_no: 9676346765")
        print("Email_id: vamsigrandhi809@gmail.com")
    if(b==4):
        l=(input("please enter your old pin: "))
    if(l==a):
            print("You have entered wrong pin")
    else:

            m = int(input("Enter your new pin: "))
            n = int(input("Re-enter your new pin: "))
            if(m==n):
                print("Pin as been successfully changed")
            else:
                print("please recheck the new-pin")




