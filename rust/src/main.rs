use std::io;
//use std::thread::sleep;

fn clear_screen() {
    for _ in 0..50 {
        println!("\n");
    }
}
fn pause() {
    let mut enter = String::new();
    io::stdin().read_line(&mut enter)
        .expect("failed to read line");
}

fn main() {

    println!("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");
    println!("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");
    println!("@@@                    THE BUNNY GAME                   @@@");
    println!("@@@ This is a simple program i wipped up, you could     @@@");
    println!("@@@ call it a game, i suppose. No its not a game.       @@@");
    println!("@@@ don't call it that, EVER. Oh well this not game     @@@");
    println!("@@@ has 5 err i mean 4 commands, its pretty self        @@@");
    println!("@@@ explanitory. just play it. If this program closes,  @@@");
    println!("@@@ you lose                                            @@@");
    println!("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");
    println!("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");                            


    pause();
    clear_screen();

    loop {
        println!("     (\\__/)");
        println!("     ( -.-)");
        println!("    C(\")(\")");
        //sleep(2);
        println!("What do you want to do with it?");
        println!(" 1) Pet");
        println!(" 2) Poke");
        println!(" 3) Tell Joke");
        println!(" 4) Steal nose");
        println!("Please input your choice.");

        let mut choice = String::new();

        io::stdin().read_line(&mut choice)
            .expect("failed to read line");

        let choice: u32 = match choice.trim().parse(){
            Ok(num) => num,
            Err(_) => continue,
        };
        clear_screen();


        //let choice = 1;
        if choice == 1{
            println!("     (\\__/) Bunny like pets. Now let me sleep.");
            println!("     ( -.-) That means leave.                 ");
            println!("    C(\")(\")                                   ");
            //time.sleep(5);
            println!(" umm, I think its best to do what it says.... ");
            println!("\nPress enter to continue ...");
            pause();
        }
        else if choice == 2{
            println!("choice 2");
            println!("     (\\__/)");
            println!("     ( -.-)");
            println!("    C(\")(\")");
            //time.sleep(3);
            clear_screen();
            println!("     (\\__/)");
            println!("     ( 0.0)");
            println!("    C(\")(\")");
            println!(" WHO STOLE MY CARROTS???");
            println!(" I WILL DESTROY THE WOLRD");
            println!(" MWAHAHA");
            //time.sleep(2.5);
            let v: Vec<i32> = vec![10,9,8,7,6,5,4,3,2,1,0];
            for i in 0..10 {
                clear_screen();
                println!("{}", i);
            }
            println!("SOMEONE POKED THE BUNNY. THE WORLD IS OVER.");
            println!("Guess the bunny beat those terrorists to it...");
            pause();
            break;


        }
        else if choice == 3{
            println!("choice 3");
            println!("     (\\__/)");
            println!("     ( -.-)");
            println!("    C(\")(\")");
            //time.sleep(1.5);
            println!(" random joke  im to lazy to think of");
            //time.sleep(3);
            clear_screen();
            println!("     (\\__/) gasp");
            println!("     ( 0.0)");
            println!("    C(\")(\")");
            //time.sleep(3);
            clear_screen();
            println!("     (\\__/) Giggle, lol");
            println!("     ( *.*)");
            println!("    C(\")(\")");
            //time.sleep(3);
            clear_screen();
            println!(" You made the bunny laugh, awwww cute.");
            println!("\n Press enter to continue ...");
            pause();
            clear_screen();


        }
        else if choice == 4{
            println!("choice 5");
            println!("     (\\__/)");
            println!("     ( -.-)");
            println!("    C(\")(\")");
            println!(" hey bunny");
            //time.sleep(3);
            clear_screen();
            println!("     (\\__/) ?");
            println!("     ( o.o)");
            println!("    C(\")(\")");
            //time.sleep(3);
            clear_screen();
            println!("     (\\__/) ?");
            println!("     ( o o)");
            println!("    C(\")(\")");
            println!(" I got your nose");
            //time.sleep(3);
            clear_screen();
            println!("     (\\__/) AHHHHH!!");
            println!("     ( o o)");
            println!("    C(\")(\")");
            //time.sleep(4);
            clear_screen();
            println!("You stole the bunny's nose. why, why did you do that??? \nWhy??");
            //time.sleep(3)
            println!("\n Press enter");
            clear_screen();
            break;


        }
        else if choice == 5{
            let mut name = String::new();
            loop {

                println!("name: ");
                //read in name
                io::stdin().read_line(&mut name)
                    .expect("failed to read line");
                let name = name.trim();

                let answer = String::from("bunny");
                if name == answer {
                    println!("Congratulations! you have won the game!");
                    println!("When i first made the game a song played at this part");
                    println!("I did not include it for copyright reasons. Thanks for playing");
                    println!("\n Press enter");
                    pause();
                    break;
                }
                else {

                    println!("EXTERMANATE!!!, wait sorry WRONG USER")

                }
            }
        }
    }
}
