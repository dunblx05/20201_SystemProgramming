#include <stdio.h>
#include <curses.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <signal.h>
#include <unistd.h>
#include <sys/time.h>
#include "words.h"


char *themeName[] = {"animals","food","clothes","jobs","sports","body","kitchen","transports","things"};
char *words;
int timeOver = 0;
int num = 10;

void printV();
void printH();
void drawBorder();
void drawStart();
void drawSelect();
void drawGameOver();
void drawNice();
void drawHangMan(int);

//gameover signal handler
void GameOver(int signum){
	clear();
	drawBorder();
	drawGameOver();
	move(LINES-1,COLS-1);
}

//nice signal handler
void Nice(int signum){
	clear();
	drawBorder();
	drawNice();
	move(LINES-1,COLS-1);
}

int set_ticker(int n_msecs){
	struct itimerval new_timeset;
	long n_sec, n_usecs;
	
	n_sec = n_msecs/1000;
	n_usecs = (n_msecs%1000)*1000L;
	new_timeset.it_interval.tv_sec = n_sec;
	new_timeset.it_interval.tv_usec = n_usecs;
	new_timeset.it_value.tv_sec = n_sec;
	new_timeset.it_value.tv_usec = n_usecs;
	
	return setitimer(ITIMER_REAL, &new_timeset, NULL);
}
//timeover signal handler
void countdown(int signum){
	//print time
	move(4,71);
	attroff(COLOR_PAIR(1));
	printw("%d",num);
	if(num >= 10)
		move(4,73);
	else{
		if(num == 9){
			move(4,73);
			addch(' ');
		}
		move(4,72);
	}
	addch('s');
	move(LINES-1,COLS-1);
	refresh();
	num--;
	//timeover
	if(num==-1){
		timeOver = 1;
		attroff(COLOR_PAIR(1));
		move(16,55);
		for(int i=0;i<strlen(words);i++){
			printw("%c ",words[i]);
		}
		move(LINES-1,COLS-1);
		refresh();
	}
	//gameover
	if(num==-2){
		clear();
		drawBorder();
		drawGameOver();
		move(LINES-1,COLS-1);
		refresh();
		set_ticker(0);
	}
}
//hangman game
void Game(char input){
	char alpha;
	int index;
	int len;
	int count = 0;
	int correct = 0;
	int correctLen = 0;
	int startX = 55,startY = 16;
	int repeat[26] = {0,};
	
	//set timeover signal handler
   	signal(SIGALRM,countdown);
   	set_ticker(1000);

	srand(time(NULL));
	index = rand()%19;
	words = themes[input-'1'][index];
	len = strlen(words);
	if(has_colors())
	{
		start_color();

		init_pair(1,COLOR_WHITE,COLOR_WHITE);
		init_pair(2,COLOR_WHITE,COLOR_RED);
	}
	attron(COLOR_PAIR(1));
	
	printV(5,13,16);
	printV(5,14,16);
	printV(5,34,3);
	printV(5,35,3);
	printH(5,15,20);
	
	//print UI
	attron(COLOR_PAIR(2));
	move(6,53);
	printw("Theme : %s",themeName[input-'1']);
	attroff(COLOR_PAIR(1));
	move(12,55);
	addstr("Press key");
	move(17,55);
	for(int i=0;i<len;i++){
		addstr("- ");
	}
	move(LINES-1,COLS-1);
	
	//draw hangman
	while(1){
		drawHangMan(count);
		//game over
		if(count == 6)
			break;

		move(LINES-1,COLS-1);
		while(1){
			if(timeOver == 1){
				break;
			}
			alpha = getch();
			if(alpha >= 'a' && alpha <= 'z'){
				if(repeat[alpha-'a'] == 0)
					break;
			}
		}
		if(timeOver == 1){
			break;
		}
		for(int i=0;i<len;i++){
			//correct alphabet
			if(alpha==words[i]){
				attroff(COLOR_PAIR);
				move(startY,startX+2*i);
				addch(alpha);
				move(LINES-1,COLS-1);
				correctLen++;
				correct = 1;
				repeat[alpha-'a'] = 1;
			}
		}
		//wrong alphabet
		if(correct == 0){
			count++;
		}
		else{
			correct = 0;
		}
		//correct word
		if(correctLen==len)
			break;
	}
	
	if(timeOver == 1){
		return;
	}
	//print word
	attroff(COLOR_PAIR(1));
	move(16,55);
	for(int i=0;i<strlen(words);i++){
		printw("%c ",words[i]);
	}
	move(LINES-1,COLS-1);
	refresh();
	
	//game over
	if(count == 6){
		signal(SIGALRM,GameOver);
		alarm(1);
		pause();
			
	}
	//correct answer
	else{
		signal(SIGALRM,Nice);
		alarm(1);
		pause();
		
	}
}

void main(){
	initscr();
	noecho();
	clear();
	
	int input;
	//start game
	while(1){
		drawBorder();
		drawStart();	
		move(LINES-1,COLS-1);
		input = getch();
		
		if(input == '1'){
			clear();
			drawBorder();
			drawSelect();
			move(LINES-1,COLS-1);
			
			while(1){
				input = getch();
				if(input >= '1' && input <='9'){
					break;
				}
			}		
			clear();
			drawBorder();
			Game(input);
			if(timeOver==0)
				getch();
			timeOver = 0;
			num = 10;
			clear();
		}
		else{
			endwin();
			break;
		}
	}
		
}
