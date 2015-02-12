@echo off
title Happy Bunny game

echo @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
echo @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
echo @@@                    THE BUNNY GAME                   @@@
echo @@@ This is a simple program i wipped up, you could     @@@
echo @@@ call it a game, i suppose. No its not a game.       @@@
echo @@@ don't call it that, EVER. Oh well this not game     @@@
echo @@@ has 5 err i mean 4 commands, its pretty self        @@@
echo @@@ explanitory. just play it. If this program closes,  @@@
echo @@@ you lose                                            @@@
echo @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
echo @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@			      
pause
cls
:A
color 07
echo	 (\__/)
echo	 ( -.-)
echo	C(")(")     
echo its a bunny
ping localhost -n 3 >nul
echo What do you want to do with it?
pause
:Q
echo 1) Pet
echo 2) Poke
echo 3) Tell Joke
echo 4) Steal nose

set /p input=
if %input%==1 goto b
if %input%==2 goto c
if %input%==3 goto D
if %input%==4 goto e
if %input%==5 goto f


echo That is not on the list, you fail, try again.
pause
goto Q

:b
cls
echo	 (\__/) Bunny like pets. Now let me sleep.
echo	 ( -.-) That means leave.
echo	C(")(") 
ping localhost -n 5 >nul
echo umm, I think its best to do what it says....
ping localhost -n 3 >nul
cls
goto a

:c
CLS
echo	 (\__/)
echo	 ( -.-)
echo	C(")(") 
ping localhost -n 3 >nul
echo "poke"
cls

echo	 (\__/)
echo	 ( 0.0)
echo	C(")(")
echo WHO STOLE MY CARROTS???
ECHO I WILL DESTROY THE WOLRD
ECHO MWAHAHA
ping localhost -n 5 >nul
cls
ping localhost -n 2 >nul
echo 10
ping localhost -n 2 > nul
cls
echo 9
ping localhost -n 2 > nul
cls
echo 8
ping localhost -n 2 > nul
cls
echo 7
ping localhost -n 2 > nul
cls
echo 6
ping localhost -n 2 > nul
cls
echo 5
ping localhost -n 2 > nul
cls
echo 4
ping localhost -n 2 > nul
cls
echo 3
ping localhost -n 2 > nul
cls
echo 2
ping localhost -n 2 > nul
cls
echo 1
ping localhost -n 2 > nul
cls
echo 0
ping localhost -n 2 > nul
start bunny.vbs
start bunnyhasfun.wav
exit

:D
cls
echo	 (\__/)
echo	 ( -.-)
echo	C(")(") 
echo random joke im to lazy to think of
ping localhost -n 3 >nul
cls
echo	 (\__/) gasp
echo	 ( 0.0)
echo	C(")(")
ping localhost -n 3 >nul
cls
echo	 (\__/)Giggle, lol 
echo	 ( *.*)
echo	C(")(")
ping localhost -n 3 >nul 
cls
echo You made the bunny laugh, awwww cute.
pause
cls
goto A

 

:e
cls
echo	 (\__/)
echo	 ( -.-)
echo	C(")(") 
echo hey bunny
ping localhost -n 3 > nul
cls
echo	 (\__/) ?
echo	 ( o.o)
echo	C(")(")
ping localhost -n 3 > nul
cls
echo	 (\__/)
echo	 ( o o)
echo	C(")(") 
echo I got your nose 
ping localhost -n 3 > nul
cls
echo	 (\__/) AHHHHH!!
echo	 ( 0 0)
echo	C(")(") 
echo bu-but why? why did you steal the bunny's nose??
ping localhost -n 5 > nul
start bunny1.vbs
exit


:f
cls
color 70
:name
Set input=
set /p input= Name:
if %input%==bunny goto YES
if not %input%==bunny goto NO

:YES

goto z

:NO

Echo EXTERMANATE!!!, wait sorry WRONG USER
pause
goto name

:z
echo You found the bunny's secret music!!!
pause
cls
goto A
