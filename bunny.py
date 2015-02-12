import time
import os
import platform
#Method for clearing the screen
def clearScreen():
        if platform.system() == 'Windows':
            os.system('cls')
        else: 
            os.system('clear')

print("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@")
print("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@")
print("@@@                    THE BUNNY GAME                   @@@")
print("@@@ This is a simple program i wipped up, you could     @@@")
print("@@@ call it a game, i suppose. No its not a game.       @@@")
print("@@@ don't call it that, EVER. Oh well this not game     @@@")
print("@@@ has 5 err i mean 4 commands, its pretty self        @@@")
print("@@@ explanitory. just play it. If this program closes,  @@@")
print("@@@ you lose                                            @@@")
print("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@")
print("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@")                              
wait = input("")        #This just says wait intil enter is pressed
clearScreen()

loop = 0
while loop < 1:
    print("     (\__/)")
    print("     ( -.-)")
    print("    C(\")(\")")
    time.sleep(3)
    print("What do you want to do with it?")
    print(" 1) Pet")
    print(" 2) Poke")
    print(" 3) Tell Joke")
    print(" 4) Steal nose")
    choice = int(input("Choice: "))
    clearScreen()


    if choice == 1:
        time.sleep(1.5)
        print("     (\__/) Bunny like pets. Now let me sleep.")
        print("     ( -.-) That means leave.                 ")
        print("    C(\")(\")                                   ")
        time.sleep(5)
        print(" umm, I think its best to do what it says.... ")
        wait = input("")
        clearScreen()
        
    
    elif choice == 2 :
        print("     (\__/)")
        print("     ( -.-)")
        print("    C(\")(\")")
        time.sleep(3)
        clearScreen()
        print("     (\__/)")
        print("     ( 0.0)")
        print("    C(\")(\")")
        print(" WHO STOLE MY CARROTS???")
        print(" I WILL DESTROY THE WOLRD")
        print(" MWAHAHA")
        time.sleep(2.5)
        count = 10
        def countdown(count):
                while (count >= 0):
                     clearScreen()
                     print (count)
                     count -= 1
                     time.sleep(1)
        countdown(10)
        clearScreen()
        print("SOMEONE POKED THE BUNNY. THE WORLD IS OVER.")
        print("Guess the bunny beat those terrorists to it...")
        break

    elif choice == 3:
        print("     (\__/)")
        print("     ( -.-)")
        print("    C(\")(\")")
        time.sleep(3)
        print(" random joke  im to lazy to think of")
        time.sleep(1.5)
        clearScreen()
        print("     (\__/) gasp")
        print("     ( 0.0)")
        print("    C(\")(\")")
        time.sleep(1.5)
        print("     (\__/) Giggle, lol")
        print("     ( *.*)")
        print("    C(\")(\")")
        time.sleep(3)
        clearScreen()
        print(" You made the bunny laugh, awwww cute.")
        wait = input("")
        clearScreen()

    elif choice == 4:
        print("     (\__/)")
        print("     ( -.-)")
        print("    C(\")(\")")
        print(" hey bunny")
        time.sleep(1.5)
        clearScreen()
        print("     (\__/) ?")
        print("     ( o.o)")
        print("    C(\")(\")")
        time.sleep(1.5)
        clearScreen()
        print("     (\__/) ?")
        print("     ( o o)")
        print("    C(\")(\")")
        print(" I got your nose")
        time.sleep(1.5)
        print("     (\__/) AHHHHH!!")
        print("     ( o.o)")
        print("    C(\")(\")")
        time.sleep(4)
        clearScreen()
        print("You stole the bunny's nose. why, why did you do that??? \nWhy??")
        time.sleep(5)
        clearScreen()
        break

    elif choice == 5:
        name = "carl"
        while name != "bunny":
            name = input("Name: ")
            if name == "bunny": 
                    print("Congratulations! you have won the game!\n")
                    print("When i first made the game a song played at this part")
                    print("I did not include it for copyright reasons. Thanks for playing")
            else:
                print("EXTERMANATE!!!, wait sorry WRONG USER")

        
                

