#include <iostream>
#include <ncurses.h>
#include <unistd.h>
#include <string.h>
using namespace std;

int main()
{
	initscr();
	cbreak();
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




	while (true)
	{
		clear();
		printw( "     (\\__/)\n");
		printw( "     ( -.-)\n");
		printw( "    C(\")(\")\n");
		printw( "What do you want to do with it?\n");
		printw( " 1) Pet\n");
		printw( " 2) Poke\n");
		printw( " 3) Tell Joke\n");
		printw( " 4) Steal nose\n");
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
			while (count > 0)
			{
				clear();
				printw("%d\n", count);
				count -= 2;
				sleep(1);
				refresh();
			}
			clear();
			refresh();
			printw("SOMEONE POKED THE BUNNY. THE WORLD IS OVER.\n");
			printw("Guess the bunny beat those terrorists to it...\n");
			refresh();
			getch();
			break;
		}
		else if (choice == '3')
		{
			clear();
			printw("     (\\__/)\n");
			printw("     ( -.-)\n");
			printw("    C(\")(\")\n");
			refresh();
			sleep(1);
			printw("random joke  im to lazy to think of\n");
			refresh();
			sleep(2);
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
			printw("Press enter to continue ...\n");
			getch();
			clear();
			refresh();
		}
		else if (choice == '4')
		{
			clear();
			printw("     (\\__/)\n");
			printw("     ( -.-)\n");
			printw("    C(\")(\")\n");
			printw(" hey bunny\n");
			refresh();
			sleep(1);
			clear();
			printw("     (\\__/) ?\n");
			printw("     ( o.o)\n");
			printw("    C(\")(\")\n");
			sleep(3);
			refresh();
			clear();
			printw("     (\\__/) ?\n");
			printw("     ( o o)\n");
			printw("    C(\")(\")\n");
			printw(" I got your nose\n");
			sleep(3);
			refresh();
			clear();
			printw("     (\\__/) AHHHHH!!\n");
			printw("     ( o o)\n");
			printw("    C(\")(\")\n");
			sleep(4);
			printw("You stole the bunny's nose. why, why did you do that??? \nWhy??\n");
			refresh();
			sleep(1);
			printw("Press enter\n");
			getch();
			clear();
			break;
		}
		else if (choice == '5')
		{
			clear();
			char name[21];
			char answer[7] = "bunny";
			refresh();
			
			while (name != answer)
			{
				printw("name: ");
				refresh();
				scanw("%20s", name);
				refresh();
				sleep(1);
				if (strcmp(name, "bunny")  == 0)
				{
					clear();
					printw("Congratulations! you have won the game!\n");
					printw("When i first made the game a song played at this part\n");
					printw("I did not include it for copyright reasons. Thanks for playing\n\n");
					printw("Press enter\n");
					getch();
					clear();
					endwin();
					return 0;
				}
				else
				{
					clear();
					printw("EXTERMANATE!!!, wait sorry WRONG USER\n");
					refresh();
					sleep(1);

				}
				
			}
			
		}
	}
	

	endwin();
	return 0;
}

