void drawSelect() {
	if (has_colors())
	{
		start_color();

		init_pair(1, COLOR_WHITE, COLOR_RED);
		init_pair(2, COLOR_WHITE, COLOR_YELLOW);
		init_pair(3, COLOR_WHITE, COLOR_GREEN);
		init_pair(4, COLOR_WHITE, COLOR_BLUE);
		init_pair(5, COLOR_WHITE, COLOR_BLACK);
		init_pair(6, COLOR_WHITE, COLOR_WHITE);

	}
	attron(COLOR_PAIR(3));

	//S
	move(5, 20);
	addstr(" ");
	move(6, 20);
	addstr(" ");
	move(7, 20);
	addstr(" ");
	move(9, 20);
	addstr(" ");
	move(5, 21);
	addstr(" ");
	move(6, 21);
	addstr(" ");
	move(7, 21);
	addstr(" ");
	move(9, 21);
	addstr(" ");

	move(5, 22);
	addstr(" ");
	move(5, 23);
	addstr(" ");
	move(5, 24);
	addstr(" ");
	move(7, 22);
	addstr(" ");
	move(7, 23);
	addstr(" ");
	move(7, 24);
	addstr(" ");
	move(9, 22);
	addstr(" ");
	move(9, 23);
	addstr(" ");
	move(9, 24);
	addstr(" ");

	move(5, 25);
	addstr(" ");
	move(7, 25);
	addstr(" ");
	move(8, 25);
	addstr(" ");
	move(9, 25);
	addstr(" ");
	move(5, 26);
	addstr(" ");
	move(7, 26);
	addstr(" ");
	move(8, 26);
	addstr(" ");
	move(9, 26);
	addstr(" ");

	//E
	move(5, 28);
	addstr(" ");
	move(6, 28);
	addstr(" ");
	move(7, 28);
	addstr(" ");
	move(8, 28);
	addstr(" ");
	move(9, 28);
	addstr(" ");
	move(5, 29);
	addstr(" ");
	move(6, 29);
	addstr(" ");
	move(7, 29);
	addstr(" ");
	move(8, 29);
	addstr(" ");
	move(9, 29);
	addstr(" ");

	move(5, 30);
	addstr(" ");
	move(5, 31);
	addstr(" ");
	move(5, 32);
	addstr(" ");
	move(7, 30);
	addstr(" ");
	move(7, 31);
	addstr(" ");
	move(7, 32);
	addstr(" ");
	move(9, 30);
	addstr(" ");
	move(9, 31);
	addstr(" ");
	move(9, 32);
	addstr(" ");

	move(5, 33);
	addstr(" ");
	move(7, 33);
	addstr(" ");
	move(9, 33);
	addstr(" ");
	move(5, 34);
	addstr(" ");
	move(7, 34);
	addstr(" ");
	move(9, 34);
	addstr(" ");

	//L
	move(5, 36);
	addstr(" ");
	move(6, 36);
	addstr(" ");
	move(7, 36);
	addstr(" ");
	move(8, 36);
	addstr(" ");
	move(9, 36);
	addstr(" ");
	move(5, 37);
	addstr(" ");
	move(6, 37);
	addstr(" ");
	move(7, 37);
	addstr(" ");
	move(8, 37);
	addstr(" ");
	move(9, 37);
	addstr(" ");

	move(9, 38);
	addstr(" ");
	move(9, 39);
	addstr(" ");
	move(9, 40);
	addstr(" ");


	move(9, 41);
	addstr(" ");
	move(9, 42);
	addstr(" ");

	//E
	move(5, 44);
	addstr(" ");
	move(6, 44);
	addstr(" ");
	move(7, 44);
	addstr(" ");
	move(8, 44);
	addstr(" ");
	move(9, 44);
	addstr(" ");
	move(5, 45);
	addstr(" ");
	move(6, 45);
	addstr(" ");
	move(7, 45);
	addstr(" ");
	move(8, 45);
	addstr(" ");
	move(9, 45);
	addstr(" ");

	move(5, 46);
	addstr(" ");
	move(5, 47);
	addstr(" ");
	move(5, 48);
	addstr(" ");
	move(7, 46);
	addstr(" ");
	move(7, 47);
	addstr(" ");
	move(7, 48);
	addstr(" ");
	move(9, 46);
	addstr(" ");
	move(9, 47);
	addstr(" ");
	move(9, 48);
	addstr(" ");

	move(5, 49);
	addstr(" ");
	move(7, 49);
	addstr(" ");
	move(9, 49);
	addstr(" ");
	move(5, 50);
	addstr(" ");
	move(7, 50);
	addstr(" ");
	move(9, 50);
	addstr(" ");

	//C
	move(5, 52);
	addstr(" ");
	move(6, 52);
	addstr(" ");
	move(7, 52);
	addstr(" ");
	move(8, 52);
	addstr(" ");
	move(9, 52);
	addstr(" ");
	move(5, 53);
	addstr(" ");
	move(6, 53);
	addstr(" ");
	move(7, 53);
	addstr(" ");
	move(8, 53);
	addstr(" ");
	move(9, 53);
	addstr(" ");

	move(5, 54);
	addstr(" ");
	move(5, 55);
	addstr(" ");
	move(5, 56);
	addstr(" ");
	move(9, 54);
	addstr(" ");
	move(9, 55);
	addstr(" ");
	move(9, 56);
	addstr(" ");

	move(5, 57);
	addstr(" ");
	move(9, 57);
	addstr(" ");
	move(5, 58);
	addstr(" ");
	move(9, 58);
	addstr(" ");

	//T
	move(5, 60);
	addstr(" ");
	move(5, 61);
	addstr(" ");
	move(5, 62);
	addstr(" ");
	move(5, 63);
	addstr(" ");
	move(5, 64);
	addstr(" ");
	move(5, 65);
	addstr(" ");
	move(5, 66);
	addstr(" ");
	move(5, 67);
	addstr(" ");

	move(6, 63);
	addstr(" ");
	move(7, 63);
	addstr(" ");
	move(8, 63);
	addstr(" ");
	move(9, 63);
	addstr(" ");
	move(6, 64);
	addstr(" ");
	move(7, 64);
	addstr(" ");
	move(8, 64);
	addstr(" ");
	move(9, 64);
	addstr(" ");

	attroff(COLOR_PAIR(3));
	move(13, 32);
	addstr("1.animals   6.body");
	move(14, 32);
	addstr("2.food      7.kitchen");
	move(15, 32);
	addstr("3.clothes   8.transports");
	move(16, 32);
	addstr("4.jobs      9.things");
	move(17, 32);
	addstr("5.sports");

	refresh();
}