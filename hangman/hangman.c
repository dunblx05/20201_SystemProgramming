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

		init_pair(1,COLOR_WHITE,COLOR_WHITE);

	}
	attron(COLOR_PAIR(1));	

	printV(2,5,20);
	printV(2,6,20);
	printV(2,82,20);
	printV(2,83,20);
	printH(2,7,75);
	printH(21,7,75);
	
	refresh();
}

void drawHangMan(){
	//head
	printH(8,30,10);
	printH(11,30,10);
	printV(9,30,2);
	printV(9,31,2);
	printV(9,38,2);
	printV(9,39,2);
	
	//body
	printV(12,34,4);
	printV(12,35,4);
	
	//left-hand
	printH(13,27,7);
	//right-hand
	printH(13,36,7);
	//left-foot
	printH(16,33,2);
	printH(17,32,2);
	printH(18,31,2);
	printH(19,30,2);
	//right-foot
	printH(16,35,2);
	printH(17,36,2);
	printH(18,37,2);
	printH(19,38,2);
	
}

void drawGame(){
	if(has_colors())
	{
		start_color();

		init_pair(1,COLOR_WHITE,COLOR_RED);
		init_pair(2,COLOR_WHITE,COLOR_WHITE);

	}
	attron(COLOR_PAIR(2));
		
	printV(5,13,16);
	printV(5,14,16);
	printV(5,34,3);
	printV(5,35,3);
	printH(5,15,20);
	
	attron(COLOR_PAIR(1));
	move(6,53);
	addstr("Theme : Animal");
	attroff(COLOR_PAIR(2));
	move(12,55);
	addstr("Press key");
	move(16,55);
	addstr("a b c d e");
	move(17,55);
	addstr("- - - - - ");
	
	drawHangMan();	
}

void main(){
	initscr();
	clear();
	drawBorder();
	drawGame();
	move(LINES-1,COLS-1);
	getch();
	endwin();
	
}