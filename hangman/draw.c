#include<stdio.h>
#include<curses.h>

void printV(int x, int y, int n)
{
	for(int i = 0; i < n; i++ )
	{
		move(x++,y);
		printw(" ");
	}

}

void printH(int x, int y, int n)
{
	for(int i = 0; i < n; i++)
	{
		move(x,y++);
		printw(" ");
	}
}

void drawBorder(){
	if(has_colors())
	{
		start_color();

		init_pair(1,COLOR_WHITE,COLOR_RED);
		init_pair(2,COLOR_WHITE,COLOR_YELLOW);
		init_pair(3,COLOR_WHITE,COLOR_GREEN);
		init_pair(4,COLOR_WHITE,COLOR_BLUE);
		init_pair(5,COLOR_WHITE,COLOR_BLACK);
		init_pair(6,COLOR_WHITE,COLOR_WHITE);

	}
	attron(COLOR_PAIR(6));	

	printV(2,5,20);
	printV(2,6,20);
	printV(2,82,20);
	printV(2,83,20);
	printH(2,7,75);
	printH(21,7,75);
	
	refresh();
}

void drawStart()
{	
	if(has_colors())
	{
		start_color();

		init_pair(1,COLOR_WHITE,COLOR_RED);
		init_pair(2,COLOR_WHITE,COLOR_YELLOW);
		init_pair(3,COLOR_WHITE,COLOR_GREEN);
		init_pair(4,COLOR_WHITE,COLOR_BLUE);
		init_pair(5,COLOR_WHITE,COLOR_BLACK);
		init_pair(6,COLOR_WHITE,COLOR_WHITE);

	}
	attron(COLOR_PAIR(1));	
	
	//H
	move(5,15);
	addstr(" ");
	move(6,15);
	addstr(" ");
	move(7,15);
	addstr(" ");
	move(8,15);	
	addstr(" ");
	move(9,15);	
	addstr(" ");
	
	move(5,14);
	addstr(" ");
	move(6,14);
	addstr(" ");
	move(7,14);
	addstr(" ");
	move(8,14);	
	addstr(" ");
	move(9,14);
	addstr(" ");
	
	move(7,16);
	addstr(" ");
	move(7,17);
	addstr(" ");
	move(7,18);
	addstr(" ");
	
	move(5,19);
	addstr(" ");
	move(6,19);
	addstr(" ");
	move(7,19);
	addstr(" ");
	move(8,19);	
	addstr(" ");
	move(9,19);	
	addstr(" ");
	
	move(5,20);
	addstr(" ");
	move(6,20);
	addstr(" ");
	move(7,20);
	addstr(" ");
	move(8,20);	
	addstr(" ");
	move(9,20);
	addstr(" ");
	
	//A
	move(5,22);
	addstr(" ");
	move(6,22);
	addstr(" ");
	move(7,22);
	addstr(" ");
	move(8,22);
	addstr(" ");
	move(9,22);
	addstr(" ");
	move(5,23);
	addstr(" ");
	move(6,23);
	addstr(" ");
	move(7,23);
	addstr(" ");
	move(8,23);
	addstr(" ");
	move(9,23);
	addstr(" ");
	
	move(5,24);
	addstr(" ");
	move(5,25);
	addstr(" ");
	move(5,26);
	addstr(" ");
	move(7,24);
	addstr(" ");
	move(7,25);
	addstr(" ");
	move(7,26);
	addstr(" ");
	
	move(5,27);
	addstr(" ");
	move(6,27);
	addstr(" ");
	move(7,27);
	addstr(" ");
	move(8,27);
	addstr(" ");
	move(9,27);
	addstr(" ");
	move(5,28);
	addstr(" ");
	move(6,28);
	addstr(" ");
	move(7,28);
	addstr(" ");
	move(8,28);
	addstr(" ");
	move(9,28);
	addstr(" ");
	
	//N
	move(5,30);
	addstr(" ");
	move(6,30);
	addstr(" ");
	move(7,30);
	addstr(" ");
	move(8,30);
	addstr(" ");
	move(9,30);
	addstr(" ");
	move(5,31);
	addstr(" ");
	move(6,31);
	addstr(" ");
	move(7,31);
	addstr(" ");
	move(8,31);
	addstr(" ");
	move(9,31);
	addstr(" ");
	
	move(5,32);
	addstr(" ");
	move(6,32);
	addstr(" ");
	move(6,33);
	addstr(" ");
	move(7,33);
	addstr(" ");
	move(7,34);
	addstr(" ");
	move(8,34);
	addstr(" ");
	move(8,35);
	addstr(" ");
	move(9,35);
	addstr(" ");
	move(9,36);
	addstr(" ");
	
	move(8,36);
	addstr(" ");
	move(7,36);
	addstr(" ");
	move(6,36);
	addstr(" ");
	move(5,36);
	addstr(" ");
	move(9,37);
	addstr(" ");
	move(8,37);
	addstr(" ");
	move(7,37);
	addstr(" ");
	move(6,37);
	addstr(" ");
	move(5,37);
	addstr(" ");
	
	//G
	move(5,39);
	addstr(" ");
	move(6,39);
	addstr(" ");
	move(7,39);
	addstr(" ");
	move(8,39);
	addstr(" ");
	move(9,39);
	addstr(" ");
	move(5,40);
	addstr(" ");
	move(6,40);
	addstr(" ");
	move(7,40);
	addstr(" ");
	move(8,40);
	addstr(" ");
	move(9,40);
	addstr(" ");
	
	move(5,41);
	addstr(" ");
	move(5,42);
	addstr(" ");
	move(5,43);
	addstr(" ");
	move(5,44);
	addstr(" ");
	move(9,41);
	addstr(" ");
	move(9,42);
	addstr(" ");
	move(9,43);
	addstr(" ");
	move(9,44);
	addstr(" ");
	move(7,43);
	addstr(" ");
	move(7,44);
	addstr(" ");
	
	move(5,45);
	addstr(" ");
	move(7,45);
	addstr(" ");
	move(8,45);
	addstr(" ");
	move(9,45);
	addstr(" ");
	move(5,46);
	addstr(" ");
	move(7,46);
	addstr(" ");
	move(8,46);
	addstr(" ");
	move(9,46);
	addstr(" ");
	
	attron(COLOR_PAIR(4));	
	
	//M
	move(5,48);
	addstr(" ");
	move(6,48);
	addstr(" ");
	move(7,48);
	addstr(" ");
	move(8,48);
	addstr(" ");
	move(9,48);
	addstr(" ");
	move(5,49);
	addstr(" ");
	move(6,49);
	addstr(" ");
	move(7,49);
	addstr(" ");
	move(8,49);
	addstr(" ");
	move(9,49);
	addstr(" ");
	
	move(5,50);
	addstr(" ");
	move(5,51);
	addstr(" ");
	move(5,52);
	addstr(" ");
	move(5,53);
	addstr(" ");
	move(5,54);
	addstr(" ");
	move(5,55);
	addstr(" ");
	
	move(6,52);
	addstr(" ");
	move(6,53);
	addstr(" ");
	move(7,52);
	addstr(" ");
	move(7,53);
	addstr(" ");
	move(8,52);
	addstr(" ");
	move(8,53);
	addstr(" ");
	move(9,52);
	addstr(" ");
	move(9,53);
	addstr(" ");

	
	move(5,56);
	addstr(" ");
	move(6,56);
	addstr(" ");
	move(7,56);
	addstr(" ");
	move(8,56);
	addstr(" ");
	move(9,56);
	addstr(" ");
	move(5,57);
	addstr(" ");
	move(6,57);
	addstr(" ");
	move(7,57);
	addstr(" ");
	move(8,57);
	addstr(" ");
	move(9,57);
	addstr(" ");
	
	//A
	move(5,59);
	addstr(" ");
	move(6,59);
	addstr(" ");
	move(7,59);
	addstr(" ");
	move(8,59);
	addstr(" ");
	move(9,59);
	addstr(" ");
	move(5,60);
	addstr(" ");
	move(6,60);
	addstr(" ");
	move(7,60);
	addstr(" ");
	move(8,60);
	addstr(" ");
	move(9,60);
	addstr(" ");
	
	move(5,61);
	addstr(" ");
	move(5,62);
	addstr(" ");
	move(5,63);
	addstr(" ");
	move(7,61);
	addstr(" ");
	move(7,62);
	addstr(" ");
	move(7,63);
	addstr(" ");
	
	move(5,64);
	addstr(" ");
	move(6,64);
	addstr(" ");
	move(7,64);
	addstr(" ");
	move(8,64);
	addstr(" ");
	move(9,64);
	addstr(" ");
	move(5,65);
	addstr(" ");
	move(6,65);
	addstr(" ");
	move(7,65);
	addstr(" ");
	move(8,65);
	addstr(" ");
	move(9,65);
	addstr(" ");
	
	//N
	move(5,67);
	addstr(" ");
	move(6,67);
	addstr(" ");
	move(7,67);
	addstr(" ");
	move(8,67);
	addstr(" ");
	move(9,67);
	addstr(" ");
	move(5,68);
	addstr(" ");
	move(6,68);
	addstr(" ");
	move(7,68);
	addstr(" ");
	move(8,68);
	addstr(" ");
	move(9,68);
	addstr(" ");

	move(5,69);
	addstr(" ");
	move(6,69);
	addstr(" ");
	move(6,70);
	addstr(" ");
	move(7,70);
	addstr(" ");
	move(7,71);
	addstr(" ");
	move(8,71);
	addstr(" ");
	move(8,72);
	addstr(" ");
	move(9,72);
	addstr(" ");
	move(9,73);
	addstr(" ");
	
	move(8,73);
	addstr(" ");
	move(7,73);
	addstr(" ");
	move(6,73);
	addstr(" ");
	move(5,73);
	addstr(" ");
	move(9,74);
	addstr(" ");
	move(8,74);
	addstr(" ");
	move(7,74);
	addstr(" ");
	move(6,74);
	addstr(" ");
	move(5,74);
	addstr(" ");	
	
	attroff(COLOR_PAIR(4));
	move(14,38);
	addstr("1.start");
	move(15,38);
	addstr("2.exit");
	refresh();
}

void drawSelect(){
	if(has_colors())
	{
		start_color();

		init_pair(1,COLOR_WHITE,COLOR_RED);
		init_pair(2,COLOR_WHITE,COLOR_YELLOW);
		init_pair(3,COLOR_WHITE,COLOR_GREEN);
		init_pair(4,COLOR_WHITE,COLOR_BLUE);
		init_pair(5,COLOR_WHITE,COLOR_BLACK);
		init_pair(6,COLOR_WHITE,COLOR_WHITE);

	}
	attron(COLOR_PAIR(3));
	
	//S
	move(5,20);
	addstr(" ");
	move(6,20);
	addstr(" ");
	move(7,20);
	addstr(" ");
	move(9,20);
	addstr(" ");
	move(5,21);
	addstr(" ");
	move(6,21);
	addstr(" ");
	move(7,21);
	addstr(" ");
	move(9,21);
	addstr(" ");
	
	move(5,22);
	addstr(" ");
	move(5,23);
	addstr(" ");
	move(5,24);
	addstr(" ");
	move(7,22);
	addstr(" ");
	move(7,23);
	addstr(" ");
	move(7,24);
	addstr(" ");
	move(9,22);
	addstr(" ");
	move(9,23);
	addstr(" ");
	move(9,24);
	addstr(" ");
	
	move(5,25);
	addstr(" ");
	move(7,25);
	addstr(" ");
	move(8,25);
	addstr(" ");
	move(9,25);
	addstr(" ");
	move(5,26);
	addstr(" ");
	move(7,26);
	addstr(" ");
	move(8,26);
	addstr(" ");
	move(9,26);
	addstr(" ");
	
	//E
	move(5,28);
	addstr(" ");
	move(6,28);
	addstr(" ");
	move(7,28);
	addstr(" ");
	move(8,28);
	addstr(" ");
	move(9,28);
	addstr(" ");
	move(5,29);
	addstr(" ");
	move(6,29);
	addstr(" ");
	move(7,29);
	addstr(" ");
	move(8,29);
	addstr(" ");
	move(9,29);
	addstr(" ");
	
	move(5,30);
	addstr(" ");
	move(5,31);
	addstr(" ");
	move(5,32);
	addstr(" ");
	move(7,30);
	addstr(" ");
	move(7,31);
	addstr(" ");
	move(7,32);
	addstr(" ");
	move(9,30);
	addstr(" ");
	move(9,31);
	addstr(" ");
	move(9,32);
	addstr(" ");
	
	move(5,33);
	addstr(" ");
	move(7,33);
	addstr(" ");
	move(9,33);
	addstr(" ");
	move(5,34);
	addstr(" ");
	move(7,34);
	addstr(" ");
	move(9,34);
	addstr(" ");
	
	//L
	move(5,36);
	addstr(" ");
	move(6,36);
	addstr(" ");
	move(7,36);
	addstr(" ");
	move(8,36);
	addstr(" ");
	move(9,36);
	addstr(" ");
	move(5,37);
	addstr(" ");
	move(6,37);
	addstr(" ");
	move(7,37);
	addstr(" ");
	move(8,37);
	addstr(" ");
	move(9,37);
	addstr(" ");
	
	move(9,38);
	addstr(" ");
	move(9,39);
	addstr(" ");
	move(9,40);
	addstr(" ");
	

	move(9,41);
	addstr(" ");
	move(9,42);
	addstr(" ");
	
	//E
	move(5,44);
	addstr(" ");
	move(6,44);
	addstr(" ");
	move(7,44);
	addstr(" ");
	move(8,44);
	addstr(" ");
	move(9,44);
	addstr(" ");
	move(5,45);
	addstr(" ");
	move(6,45);
	addstr(" ");
	move(7,45);
	addstr(" ");
	move(8,45);
	addstr(" ");
	move(9,45);
	addstr(" ");
	
	move(5,46);
	addstr(" ");
	move(5,47);
	addstr(" ");
	move(5,48);
	addstr(" ");
	move(7,46);
	addstr(" ");
	move(7,47);
	addstr(" ");
	move(7,48);
	addstr(" ");
	move(9,46);
	addstr(" ");
	move(9,47);
	addstr(" ");
	move(9,48);
	addstr(" ");
	
	move(5,49);
	addstr(" ");
	move(7,49);
	addstr(" ");
	move(9,49);
	addstr(" ");
	move(5,50);
	addstr(" ");
	move(7,50);
	addstr(" ");
	move(9,50);
	addstr(" ");
	
	//C
	move(5,52);
	addstr(" ");
	move(6,52);
	addstr(" ");
	move(7,52);
	addstr(" ");
	move(8,52);
	addstr(" ");
	move(9,52);
	addstr(" ");
	move(5,53);
	addstr(" ");
	move(6,53);
	addstr(" ");
	move(7,53);
	addstr(" ");
	move(8,53);
	addstr(" ");
	move(9,53);
	addstr(" ");
	
	move(5,54);
	addstr(" ");
	move(5,55);
	addstr(" ");
	move(5,56);
	addstr(" ");
	move(9,54);
	addstr(" ");
	move(9,55);
	addstr(" ");
	move(9,56);
	addstr(" ");
	
	move(5,57);
	addstr(" ");
	move(9,57);
	addstr(" ");
	move(5,58);
	addstr(" ");
	move(9,58);
	addstr(" ");
	
	//T
	move(5,60);
	addstr(" ");
	move(5,61);
	addstr(" ");
	move(5,62);
	addstr(" ");
	move(5,63);
	addstr(" ");
	move(5,64);
	addstr(" ");
	move(5,65);
	addstr(" ");
	move(5,66);
	addstr(" ");
	move(5,67);
	addstr(" ");
	
	move(6,63);
	addstr(" ");
	move(7,63);
	addstr(" ");
	move(8,63);
	addstr(" ");
	move(9,63);
	addstr(" ");
	move(6,64);
	addstr(" ");
	move(7,64);
	addstr(" ");
	move(8,64);
	addstr(" ");
	move(9,64);
	addstr(" ");
	
	attroff(COLOR_PAIR(3));
	move(13,32);
	addstr("1.animals   6.body");
	move(14,32);
	addstr("2.food      7.kitchen");
	move(15,32);
	addstr("3.clothes   8.transports");
	move(16,32);
	addstr("4.jobs      9.things");
	move(17,32);
	addstr("5.sports");
	
	refresh();
}

void drawGameOver()
{   
   if(has_colors())
   {
      start_color();

      init_pair(1,COLOR_WHITE,COLOR_RED);
      init_pair(2,COLOR_WHITE,COLOR_YELLOW);
      init_pair(3,COLOR_WHITE,COLOR_GREEN);
      init_pair(4,COLOR_WHITE,COLOR_BLUE);
      init_pair(5,COLOR_WHITE,COLOR_BLACK);
      init_pair(6,COLOR_WHITE,COLOR_WHITE);

   }
   attron(COLOR_PAIR(1));   

   //G
   printH(4, 10, 12);
   printV(4, 11, 6);
   printV(4, 10, 6);
   printH(10, 10, 12);
   printH(8, 14, 6);
   printV(8, 20, 3);
   printV(8, 21, 3);
   
   //A
   printH(4, 28, 12);
   printV(4, 28, 7);
   printV(4, 27, 7);
   printV(4, 40, 7);
   printV(4, 41, 7);
   printH(7, 28, 13);
   
   //M
   printH(4, 46, 12);
   printV(4, 47, 7);
   printV(4, 46, 7);
   printV(4, 58, 7);
   printV(4, 59, 7);
   printV(4, 53, 7);
   printV(4, 52, 7);
   
   //E
   printH(4, 65, 12);
   printV(4, 65, 7);
   printV(4, 64, 7);
   printH(7, 65, 12);
   printH(10, 65, 12);
   
   //O
   printH(12, 10, 10);
   printV(12, 10, 6);
   printV(12, 11, 6);
   printV(12, 20, 6);
   printV(12, 21, 6);
   printH(18, 10, 12);
   
   //V
   move(12, 27);
   addstr(" ");
   move(12, 28);
   addstr(" ");
   move(13, 28);
   addstr(" ");
   move(13, 29);
   addstr(" ");
   move(14, 29);
   addstr(" ");
   move(14, 30);
   addstr(" ");
   move(15, 30);
   addstr(" ");
   move(15, 31);
   addstr(" ");
   move(16, 31);
   addstr(" ");
   move(16, 32);
   addstr(" ");
   move(17, 32);
   addstr(" ");
   move(17, 33);
   addstr(" ");
   move(18, 33);
   addstr(" ");
   move(18, 34);
   addstr(" ");
   move(18, 35);
   addstr(" ");
   move(17, 35);
   addstr(" ");
   move(17, 36);
   addstr(" ");
   move(16, 36);
   addstr(" ");
   move(16, 37);
   addstr(" ");
   move(15, 37);
   addstr(" ");
   move(15, 38);
   addstr(" ");
   move(14, 38);
   addstr(" ");
   move(14, 39);
   addstr(" ");
   move(13, 39);
   addstr(" ");
   move(13, 40);
   addstr(" ");
   move(12, 40);
   addstr(" ");
   move(12, 41);
   addstr(" ");
   
   //E
   printH(12, 47, 11);
   printV(12, 47, 7);
   printV(12, 46, 7);
   printH(15, 47, 11);
   printH(18, 47, 11);
   
   //R
   printH(12, 64, 11);
   printV(12, 64, 7);
   printV(12, 65, 7);
   printV(12, 75, 3);
   printV(12, 76, 3);
   printH(15, 64, 13);
   
   move(16, 73);
   addstr(" ");
   move(16, 74);
   addstr(" ");
   
   move(17, 74);
   addstr(" ");
   move(17, 75);
   addstr(" ");
   
   move(18, 75);
   addstr(" ");
   move(18, 76);
   addstr(" ");
   
   refresh();
}

void drawNice(){
    if(has_colors())
   {
      start_color();

      init_pair(1,COLOR_WHITE,COLOR_RED);
      init_pair(2,COLOR_WHITE,COLOR_YELLOW);
      init_pair(3,COLOR_WHITE,COLOR_GREEN);
      init_pair(4,COLOR_WHITE,COLOR_BLUE);
      init_pair(5,COLOR_WHITE,COLOR_BLACK);
      init_pair(6,COLOR_WHITE,COLOR_WHITE);

   }
   attron(COLOR_PAIR(4));     
   
   
   //N
   
   printV(7, 10, 10);
   printV(7, 11, 10);
   printV(7, 22, 10);
   printV(7, 23, 10);
   
   move(7, 12);
   addstr(" ");
   move(7, 13);
   addstr(" ");
   
   move(8, 13);
   addstr(" ");
   move(8, 14);
   addstr(" ");
   
   move(9, 14);
   addstr(" ");
   move(9, 15);
   addstr(" ");

   move(10, 15);
   addstr(" ");
   move(10, 16);
   addstr(" ");
   
   move(11, 16);
   addstr(" ");
   move(11, 17);
   addstr(" ");
   
   move(12, 17);
   addstr(" ");
   move(12, 18);
   addstr(" ");
   
   
   move(13, 18);
   addstr(" ");
   move(13, 19);
   addstr(" ");
   
   move(14, 19);
   addstr(" ");
   move(14, 20);
   addstr(" ");
   
   move(15, 20);
   addstr(" ");
   move(15, 21);
   addstr(" ");
   
   move(16, 21);
   addstr(" ");
   move(16, 22);
   addstr(" ");
   
   //I
   printH(7, 30, 10);
   printV(7, 34, 10);
   printV(7, 35, 10);
   printH(16, 30, 10);
   
   //C
   printH(7, 47, 11);
   printV(7, 47, 10);
   printV(7, 48, 10);
   printH(16, 47, 11);
   
   //E
   printH(7, 66, 11);
   printV(7, 66, 10);
   printV(7, 67, 10);
   printH(12, 66, 10);
   printH(12, 67, 10);
   printH(16, 66, 11);
   
   refresh();
}


void drawHangMan(int count){
	attron(COLOR_PAIR(1));
	
	//head
	if(count>=1){
		printH(8,30,10);
		printH(11,30,10);
		printV(9,30,2);
		printV(9,31,2);
		printV(9,38,2);
		printV(9,39,2);
	}
	
	//body
	if(count>=2){
		printV(12,34,4);
		printV(12,35,4);
	}
	
	//left-hand
	if(count>=3)
		printH(13,27,7);
	//right-hand
	if(count>=4) 
		printH(13,36,7);
	//left-foot
	if(count>=5){
		printH(16,33,2);
		printH(17,32,2);
		printH(18,31,2);
		printH(19,30,2);
	}
	//right-foot
	if(count>=6){
		printH(16,35,2);
		printH(17,36,2);
		printH(18,37,2);
		printH(19,38,2);
	}
	
}
