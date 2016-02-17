#include <iostream>
#include <ncurses.h>
#include <unistd.h>
using namespace std;

int main()
{
	initscr();
	printw("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
	printw("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
	printw("@@@                    THE BUNNY GAME                   @@@\n");
	printw("@@@ This is a simple program i wipped up, you could     @@@\n");
	printw("@@@ call it a game, i suppose. No its not a game.       @@@\n");
	printw("@@@ don't call it that, EVER. Oh well this not game     @@@\n");
	printw("@@@ has 5 err i mean 4 commands, its pretty self        @@@\n");
	printw("@@@ explanitory. just play it. If this program closes,  @@@\n");
	printw("@@@ you lose                                            @@@\n");
	printw("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
	printw("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");

	printw( "Press enter to continue ...");
	refresh();
	getch();
	clear();




	int loop = 0;
	while (loop < 1)
	{
		clear();
		printw( "     (\\__/)\n");
		printw( "     ( -.-)\n");
		printw( "    C(\")(\")\n");
		printw( "What do you want to do with it?\n");
		printw( " 1) Pet\n");
		printw( " 2) Poke\n");
		printw( " 3) Tell Joke\n");
		refresh();
		char choice;
		choice = getch();	


		if (choice  == '1')
		{
			clear();
			printw( "     (\\__/) Bunny like pets. Now let me sleep.\n");
			printw( "     ( -.-) That means leave.                 \n");
			printw( "    C(\")(\")                                   \n");
			printw( " umm, I think its best to do what it says.... \n\n");
			printw( "Press enter to continue ...");
			refresh();
			getch();

		}
		else if (choice == '2')
		{
			clear();
			printw("     (\\__/)\n");
			printw("     ( -.-)\n");
			printw("    C(\")(\")\n");
			clear();
			refresh();
			sleep(1);
			printw("     (\\__/)\n");
			printw("     ( 0.0)\n");
			printw("    C(\")(\")\n");
			printw(" WHO STOLE MY CARROTS???\n");
			printw(" I WILL DESTROY THE WOLRD\n");
			printw(" MWAHAHA\n");
			refresh();
			sleep(2);
			int count = 10;
			while (count >= 0)
			{
				clear();
				printw("%d\n", count);
				count -= 1;
				sleep(1);
				refresh();
			}
			refresh();
			printw("SOMEONE POKED THE BUNNY. THE WORLD IS OVER.\n");
			printw("Guess the bunny beat those terrorists to it...\n");
			getch();
		}
		else if (choice == "3")
		{
			clear();
			printw("     (\\__/)\n");
			printw("     ( -.-)\n");
			printw("    C(\")(\")\n");
			sleep(1);
			printw(" random joke  im to lazy to think of\n");
			sleep(3);
			clear();
			printw("     (\\__/) gasp\n");
			printw("     ( 0.0)\n");
			printw("    C(\")(\")\n");
			refresh();
			sleep(3);
			clear();
			printw("     (\\__/) Giggle, lol\n");
			printw("     ( *.*)\n");
			printw("    C(\")(\")\n");
			refresh();
			sleep(3);
			clear();
			printw(" You made the bunny laugh, awwww cute.\n");
			wait = input("\n Press enter to continue ...\n");
			clear();
			refresh();



		}
		else if (choice == "4")
		{
			clear();
			printw("     (\\__/)");
			printw("     ( -.-)");
			printw("    C(\")(\")");
			printw(" hey bunny");
			refresh();
			sleep(3);
			clear();
			printw("     (\\__/) ?");
			printw("     ( o.o)");
			printw("    C(\")(\")");
			sleep(3);
			refresh();
			clear();
			printw("     (\\__/) ?");
			printw("     ( o o)");
			printw("    C(\")(\")");
			printw(" I got your nose");
			sleep(3);
			refresh();
			clear();
			printw("     (\\__/) AHHHHH!!");
			printw("     ( o o)");
			printw("    C(\")(\")");
			sleep(4);
			printw("You stole the bunny's nose. why, why did you do that??? \nWhy??");
			refresh();
			sleep(1);
			printw("Press enter\n");
			getch();
			clear();
		}
		else if (choice == "5")
		{
			name = "carl";
			while name != "bunny"
			{
				name = input("Name: ");
				if name == "bunny"; 
				clear();
				print("Congratulations! you have won the game!\n");
				print("When i first made the game a song played at this part\n");
				print("I did not include it for copyright reasons. Thanks for playing\n");
				wait = input("Press enter\n");
				clear();
				loop = 1;
			}
			else
			{
				print("EXTERMANATE!!!, wait sorry WRONG USER")

			}
	}

	endwin();
	return 0;
}

